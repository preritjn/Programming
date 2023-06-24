import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart


def send_email(sender_email, sender_password, recipient_email, subject, message):
    # Create a MIME message
    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = subject

    # Attach the message to the MIMEMultipart object
    msg.attach(MIMEText(message, 'plain'))

    try:
        # Create an SMTP session
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()

        # Login to your Gmail account
        server.login(sender_email, sender_password)

        # Send the email
        server.send_message(msg)
        print("Email sent successfully!")
    except Exception as e:
        print(f"Error: {str(e)}")
    finally:
        # Terminate the SMTP session
        server.quit()


# Provide your Gmail account details and the email content
sender_email = 'preritbgr3010@gmail.com'
sender_password = 'Pkjainbgr@30'
recipient_email = 'preritkumarjain@gmail.com'
subject = 'Test Email'
message = 'Hello, this is a test email!'

# Call the function to send the email
send_email(sender_email, sender_password, recipient_email, subject, message)
