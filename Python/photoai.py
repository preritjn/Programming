import cv2

cap=cv2.VideoCapture(0)
while True:
    status,photo = cap.read()
    # cv2.imshow("hola",photo)
    # cv2.waitKey()
    # cv2.destroyAllWindows()
    facemodel = cv2.CascadeClassifier('ai.xml')
    myface = facemodel.detectMultiScale(photo)
    if len(myface):
        x1 = myface[0][0]
        y1 = myface[0][1]
        x2 = myface[0][2] + myface[0][0]
        y2 = myface[0][3] + myface[0][1]
        newphoto = cv2.rectangle(photo,(x1,y1),(x2,y2),color=[0,255,0],thickness=5)
    cv2.imshow('j',newphoto)
    if cv2.waitKey(10) == 13:
        break
cv2.destroyAllWindows