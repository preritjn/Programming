import cv2

# cap = cv2.VideoCapture(0)
# status, photo = cap.read()
# print(status)
# cv2.imwrite('Prerit.png', photo)
# cv2.imshow("My photo", photo)
# cv2.waitKey(5000) 
# cv2.destroyAllWindows()

cap=cv2.VideoCapture(0)
while True:
    status , photo= cap.read()
    a=photo[0:240,0:320]
    b=photo[240:480,0:320]
    c=photo[0:240,320:640]
    d=photo[240:480,320:640]
    a[:,:,0] =+ 80
    b[:,:,1] =+ 80
    c[:,:,2] =+ 80
    photo[0:240,0:320]=a
    photo[240:480,0:320]=b
    photo[0:240,320:640]=c
    photo[240:480,320:640]=d
    
    
    cv2.imshow("hanji",photo)
    if cv2.waitKey(5) ==13:
        break
cv2.destroyAllWindows()