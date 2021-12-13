import cv2 as cv
import numpy as np

def nothing(x):
    pass

cap = cv.VideoCapture(0)
font = cv.FONT_HERSHEY_COMPLEX

while True:
    _,frame =cap.read()
    #frame = cv.medianBlur(frame,5)
    hsv_frame = cv.cvtColor(frame,cv.COLOR_BGR2HSV)
    #frame = cv.cvtColor(frame,cv.COLOR_BGR2HSV)

    low_red = np.array([161,155,84])
    high_red = np.array([179,255,255])
    mask = cv.inRange(hsv_frame,low_red,high_red)
    #mask = cv.inRange(frame,low_red,high_red)
    red = cv.bitwise_and(frame,frame,mask=mask)

    median = cv.medianBlur(mask,15)

    contours, hierarchy = cv.findContours(median,cv.findContours,cv.RETR_LIST,cv.CHAIN_APPROX_TC89_L1)

    for cnt in contours:
        area = cv.contourArea(cnt)
        approx = cv.approxPolyDP((cnt,0.0),cv.arcLength(cnt,True),True)   # TEKRAR BAKKKK
        x = approx.ravel()[0]
        y = approx.ravel()[1]

        if area>1000:
            cv.drawContours(frame,[approx],-1,(0,0,255),5)

            if len(approx) ==4:
                cv.putText(frame,"Rectangle",(x,y),font,1,(0,255,0),5)
            if len(approx) <6:
                cv.putText(frame,"Circle",(x,y),font,1,(0,255,0),5)
            if len(approx)==3:
                cv.putText(frame,"Triangle",(x,y),font,1,(0,255,0),5)        

    
    cv.startWindowThread() #linuxte kullanmaya gerek yok
    cv.imshow("frame",frame)
    cv.imshow("mask",red)
    
    key = cv.waitKey(1)
    if key == 27:
        break
