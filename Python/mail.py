import smtplib
import ssl
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart


sender_email = 'preritbgr3010@gmail.com'
receiver_email = 'mohitvyas260@gmail.com'
subject = 'Example Subject'
message = 'This is the body of the email.'


smtp_server = 'smtp.gmail.com'
smtp_port = 465         #587
username = 'atramshridhar19@gmail.com'
password = 'dkvebrmxnjyaznnf'

msg = MIMEMultipart()
msg['From'] = sender_email
msg['To'] = receiver_email
msg['Subject'] = subject

msg.attach(MIMEText(message, 'plain'))

context = ssl.create_default_context()

try:
    with smtplib.SMTP_SSL(smtp_server, smtp_port, context=context) as smtp:
        smtp.login(username, password)

        # Send the email
        smtp.send_message(msg)
        print('Email sent successfully.')

except Exception as e:
    print(f'Error: {e}')