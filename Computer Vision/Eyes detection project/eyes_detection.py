import cv2

#Setting the camera
camera = cv2.VideoCapture(0)

#Choosing the classifier type
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + "haarcascade_eye.xml")

#Creating a continuous loop for the app
while True:
    
    #Reading the values from the camera
    ret, frame = camera.read()
    
    #Converting the image from RGB to GRAY
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    #Detecting the eyes in the image
    eyes = face_cascade.detectMultiScale(gray, 1.2, 5, minSize=(30, 30), flags=cv2.CASCADE_SCALE_IMAGE)
    
    #Creating a rectangle around the eyes
    for (x, y, w, h) in eyes:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 245, 67), 2)
        
    #Displaying the rectangle on the frame
    cv2.imshow("Video Frame", frame)
    
    #Setting a quitting key
    if cv2.waitKey(1) == ord('q'):
        break
        
#Ending all the operations
camera.release()
cv2.destroyAllWindows()
