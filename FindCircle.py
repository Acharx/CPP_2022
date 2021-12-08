import numpy as np
import cv2 as cv

def nothing(x):
    pass

cap = cv.VideoCapture(0)
font = cv.FONT_HERSHEY_COMPLEX

img = np.zeros((300,512,3),np.uint16)
cv.namedWindow('image')


#img2 = np.zeros((300,512,3),np.uint16)
#cv.namedWindow('Adjust Circle Paramater')

cv.createTrackbar('low_red_1','image',161,255,nothing)
cv.createTrackbar('low_red_2','image',155,255,nothing)
cv.createTrackbar('low_red_3','image',84,255,nothing)
cv.createTrackbar('high_red_1','image',179,255,nothing)
cv.createTrackbar('high_red_2','image',255,255,nothing)
cv.createTrackbar('high_red_3','image',255,255,nothing)
#cv.createTrackbar('maxRadius_x','Adjust Circle Paramater',0,10,nothing)   #int
#cv.createTrackbar('minRadius_x','Adjust Circle Paramater',0,10,nothing)   #int
#cv.createTrackbar('param1_x','Adjust Circle Paramater',50,100,nothing)   #doulbe
#cv.createTrackbar('param2_x','Adjust Circle Paramater',30,100,nothing)  # 0.8, 0.85, 0.9, 1   value/20  double
#cv.createTrackbar('minDist_x','Adjust Circle Paramater',20,40,nothing)    #double 1  ,  1.5   ,   2   /20
#cv.createTrackbar('dp_x','Adjust Circle Paramater',1,1,nothing)





while True:
    _,frame = cap.read()
    frame=cv.medianBlur(frame,5)
    hsv_frame = cv.cvtColor(frame,cv.COLOR_BGR2HSV)
    
    gray_frame =cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
    #hsv_frame2=hsv_frame
    #h, s, v1 = cv.split(hsv_frame2)


    
    lr1 =cv.getTrackbarPos('low_red_1','image')
    lr2 =cv.getTrackbarPos('low_red_2','image')
    lr3 =cv.getTrackbarPos('low_red_3','image')
    hr1 =cv.getTrackbarPos('high_red_1','image')
    hr2 =cv.getTrackbarPos('high_red_2','image')
    hr3 =cv.getTrackbarPos('high_red_3','image')
    #mxR= #cv.getTrackbarPos('maxRadius_x','Adjust Circle Paramater')
    #mnR= #cv.getTrackbarPos('minRadius_x','Adjust Circle Paramater')
    #pr1= #cv.getTrackbarPos('param1_x','Adjust Circle Paramater')
    #pr2= #cv.getTrackbarPos('param2_x','Adjust Circle Paramater')
    #mnDk= #cv.getTrackbarPos('minDist_x','Adjust Circle Paramater')
    #dpx= #cv.getTrackbarPos('dp_x','Adjust Circle Paramater')

    

    low_red = np.array([lr1,lr2,lr3])
    high_red = np.array([hr1,hr2,hr3])
    red_mask = cv.inRange(hsv_frame,low_red,high_red)
    red = cv.bitwise_and(frame,frame,mask=red_mask)
    #secondRed =red
    bluecnts = cv.findContours(red_mask.copy(),cv.RETR_EXTERNAL,cv.CHAIN_APPROX_SIMPLE)[-2]

    
    circles = cv.HoughCircles(gray_frame,cv.HOUGH_GRADIENT,1,20,param1=95,param2=45,minRadius=0,maxRadius=0)
    
    #circles = cv.HoughCircles(red[2],cv.HOUGH_GRADIENT,dpx,mnDk,param1=pr1,param2=pr2,minRadius=mnR,maxRadius=mxR)


    circles= np.uint16(np.around(circles))
    for i in circles[0,:]:
        #draw the outer circle
        cv.circle(gray_frame,(i[0],i[1]),i[2],(0,255,0),2)
        #draw the center of the circle,
        cv.circle(gray_frame,(i[0],i[1]),2,(0,0,255),3)



    

    if len(bluecnts)>0:
        blue_area = max(bluecnts,key=cv.contourArea)
        (xg,yg,wg,hg)=cv.boundingRect(blue_area)
        cv.rectangle(red,(xg,yg),(xg+wg,yg+hg),(0,255,255),2)
        size_x=wg/2
        string_x=str(size_x)
        size_y=int(hg/2)
        string_y=str(size_y)
        coor_xInString=str(size_x)
        coor_yInString=str(size_y)
        print(size_x," ",size_y)
        difference=abs(size_x-size_y)
        if(difference)<5:
            boolx=True
        else:
            boolx=False

        stringx='Red Ball'+'Circle='+str(boolx)+'SizeX='+string_x+' SizeY='+string_y
        cv.putText(red,stringx,(xg,yg-15),font,1,(220,0,0),2,cv.LINE_AA)
        string_coor_x=str(xg)
        string_coor_y=str(yg)
        print("Coordinat x= "+string_coor_x+" Coordinat y= "+string_coor_y)

    cv.startWindowThread() #linuxte kullanmaya gerek yok
    cv.imshow("frame",frame)
    cv.imshow("mask",red)
    cv.imshow("findCircle",gray_frame)
    #cv.imshow("h1 channel",v1)
    
    key = cv.waitKey(1)
    if key == 27:
        break