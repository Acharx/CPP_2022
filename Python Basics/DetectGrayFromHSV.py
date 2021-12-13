import numpy as np
import cv2 as cv

def nothing(x):
    pass

cap = cv.VideoCapture(0)
font = cv.FONT_HERSHEY_COMPLEX

while True:
    _,frame =cap.read()
    frame = cv.medianBlur(frame,5)
    hsv_frame = cv.cvtColor(frame,cv.COLOR_BGR2HSV)
    
    gray_frame =cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
    hsv_frame2=hsv_frame
    h, s, v1 = cv.split(hsv_frame2)

    low_red = np.array([161,155,84])
    high_red = np.array([179,255,255])
    red_mask = cv.inRange(hsv_frame,low_red,high_red)
    red = cv.bitwise_and(frame,frame,mask=red_mask)
    
        
    
    new_red = red
    new_low_red = np.array([0,0,0])
    new_high_red = np.array([255,255,255])
    new_red_mask = cv.inRange(new_red,new_low_red,new_high_red)
    new_red = cv.bitwise_and(frame,frame,mask=new_red_mask)
    
    cv.startWindowThread() #linuxte kullanmaya gerek yok
    cv.imshow("frame",frame)
    cv.imshow("mask",red)
    cv.imshow("findCircle",gray_frame)
    cv.imshow("h1 channel",v1)
    cv.imshow("new red channel",new_red)
    
    key = cv.waitKey(1)
    if key == 27:
        break
