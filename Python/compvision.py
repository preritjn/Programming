import cv2
import numpy
import random

# cap=cv2.VideoCapture('http://192.168.112.59:8080/video')
cap=cv2.VideoCapture(0)
while True:
    status,photo = cap.read()
    # photo[0:240,0:320,0:2] = random.randint(0,255)
    cv2.imshow("hola",photo)
    if cv2.waitKey(5) == 13:
        break
cv2.destroyAllWindows()

a = numpy.array([[1,10,100],[2,20,200],[3,30,300],[4,40,400]])
print(a.shape)
print(a.ndim)
print(a[1:3,1:3])
gray = cv2.cvtColor(photo,cv2.COLOR_BGR2GRAY)
print(gray.shape)
print(gray[:,:])
cv2.imshow('Helo',gray)
cv2.waitKey()
cv2.destroyAllWindows()


