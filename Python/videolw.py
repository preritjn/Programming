# import cv2
# cap = cv2.VideoCapture(0)
# status, photo = cap.read()
# print(status)
# cv2.imwrite('PreritJain.png',photo)
# cv2.imshow('my photo', photo)
# if cv2.waitKey() == 27:
#     cv2.destroyAllWindows()
# print(type(photo))    
# print(photo.shape)
# print(photo.ndim)

import cv2

# Define the coordinates of the region to be cropped
# Format: (x, y, width, height)
crop_coords = (100, 100, 300, 300)

# Create a VideoCapture object to capture video from the camera
video_capture = cv2.VideoCapture(0)
while True:
    # Read a frame from the video stream
    ret, frame = video_capture.read()

    # Crop the frame to the specified region
    cropped_frame = frame[crop_coords[1]:crop_coords[1]+crop_coords[3],
                          crop_coords[0]:crop_coords[0]+crop_coords[2]]

    # Display the cropped frame in a window
    cv2.imshow('Cropped Video', cropped_frame)

    # Break the loop if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the video capture object and close the windows
video_capture.release()
cv2.destroyAllWindows()