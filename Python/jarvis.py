import pyttsx3 #pip install pyttsx3
import speech_recognition as sr #pip install speechRecognition
import datetime
import wikipedia #pip install wikipedia
import webbrowser
import os
import smtplib
import boto3
import cv2

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)
client = boto3.client('ec2')
s3_client = boto3.client('s3')


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("Good Morning!")

    elif hour>=12 and hour<18:
        speak("Good Afternoon!")   

    else:
        speak("Good Evening!")  

    speak("Hello Linux World this is Team 19")       

def takeCommand():
    #It takes microphone input from the user and returns string output

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        # r.pause_threshold = 1
        audio = r.record(source)

    # try:
        print("Recognizing...")    
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    # except Exception as e:
    #     # print(e)    
    #     print("Say that again please...")  
    #     return "None"
    return query

def sendEmail(to, content):
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.ehlo()
    server.starttls()
    server.login('preritbgr3010@gmail.com', 'Pkjainbgr@30')
    server.sendmail('mohitdon.vyas@gmail.com', to, content)
    server.close()

if __name__ == "__main__":
    wishMe()
    while True:
        query = takeCommand().lower()
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia")
            print(results)
            speak(results)

        elif 'open linux bash' in query:
            webbrowser.open('http://3.110.155.206')

        elif 'send sns' in query:
            webbrowser.open('https://i8x22vx77k.execute-api.ap-south-1.amazonaws.com/Bhoot/bhoot')

        elif 'open youtube' in query:
            webbrowser.open("youtube.com")

        elif 'send sns' in query:
            webbrowser.open('https://i8x22vx77k.execute-api.ap-south-1.amazonaws.com/Bhoot/bhoot')   

        elif 'open google' in query:
            webbrowser.open("google.com")

        elif 'open stackoverflow' in query:
            webbrowser.open("stackoverflow.com")   

        elif 'play music' in query:
            music_dir = 'D:\\Linux World'
            songs = os.listdir(music_dir)
            print(songs)    
            os.startfile(os.path.join(music_dir, songs[0]))

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")    
            speak(f"Sir, the time is {strTime}")

        elif 'create bucket' in query:
            bucket_name = 'preritnewbucket'  # Replace with your desired bucket name
            response = s3_client.create_bucket(
                Bucket=bucket_name,
                CreateBucketConfiguration={
                    'LocationConstraint': 'ap-south-1'  # Replace with your desired AWS region
                }
            )

        elif 'open code' in query:
            codePath = "D:\\GitHub\\Programming\\Python\\Code.exe"
            os.startfile(codePath)
        
        elif 'take photo' in query:
            cap = cv2.VideoCapture(0)
            status , photo = cap.read()
            cv2.imwrite("mohit.png" , photo)
            cv2.imshow("my photo" , photo)
            if cv2.waitKey() == 13:
                cv2.destroyAllWindows()

        elif 'launch instance' in query:
            instances = client.run_instances(
            ImageId = "ami-0a2acf24c0d86e927",
            MinCount=1,
            MaxCount=1,
            InstanceType="t2.micro")

        elif 'email to someone' in query:
            try:
                speak("What should I say?")
                content = takeCommand()
                to = "preritbgr3010@gmail.com"    
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry my friend prerit bhai. I am not able to send this email")