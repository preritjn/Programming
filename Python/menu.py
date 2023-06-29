import os
import pyttsx3
import webbrowser
import subprocess



output = "two"

while True:
    print('''
        Speak 1 to run date commmand
        Press 2 to open Notepad
        Press 3 to open Firefox
        Press 1 to open Chrome
        Press 2 to open Notepad
        Press 3 to open Firefox
        Press 1 to open Chrome
        Press 2 to open Notepad
        Press 3 to open Firefox
                                ''')
    

    
    if output == 'one':
        url = "https://4xlujj75hf.execute-api.us-east-1.amazonaws.com/task19/task19"
        webbrowser.open(url)

    elif output == 'two':
        subprocess.Popen(['cmd'])
    elif output == 'two':
        print('Open something')
    elif output == 'two':
        print('Open something')
    elif output == 'two':
        print('Open something')
    elif output == 'two':
        print('Open something')
    elif output == 'two':
        print('Open something')
    input('Press enter to continue')
    os.system("cls")