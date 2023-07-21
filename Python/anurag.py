#!/usr/bin/python3

import subprocess
import cgi
import boto3
import uuid
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
print("Content-Type: text/html")

print()

print("Work is done")
formdata= cgi.FieldStorage()
data = formdata.getvalue("c")
def send_email(sender_email, receiver_email, subject, message, smtp_server, smtp_port, smtp_username, smtp_password):
    # Create a multipart message
    msg = MIMEMultipart()
    msg["From"] = sender_email
    msg["To"] = receiver_email
    msg["Subject"] = subject

    # Add body to the email
    msg.attach(MIMEText(message, "plain"))

    try:
        # Create a secure SSL/TLS connection to the SMTP server
        server = smtplib.SMTP(smtp_server, smtp_port)
        server.ehlo()
        server.starttls()
        server.ehlo()

        # Login to the SMTP server
        server.login(smtp_username, smtp_password)

        # Send the email
        server.sendmail(sender_email, receiver_email, msg.as_string())

        # Close the SMTP connection
        server.quit()

        print("Email sent successfully!")
    except Exception as e:
        print("Failed to send email. Error:", str(e))

def create_bucket():
    # AWS access keys
    access_key = 'AKIAZ4GCQXRTNT447EGD'
    secret_key =  'jPoI7UzFlJyrduNu+sZZ8FRv6KwWR1ATjo9xyYNv'

    # AWS region
    region = 'ap-south-1'  # Replace with your desired region

    # Create an S3 client using access keys
    s3_client = boto3.client(
        's3',
        aws_access_key_id=access_key,
        aws_secret_access_key=secret_key,
        region_name=region
    )

    # S3 bucket name
    bucket_name = 'bucket-' + str(uuid.uuid4())

    # Create an S3 bucket
    s3_client.create_bucket(
        Bucket=bucket_name,
        CreateBucketConfiguration={
            'LocationConstraint': region
        }
    )

    # Print the bucket creation confirmation
    print(f"Bucket '{bucket_name}' created successfully.")

def create_instance():
    print("its there")
    access_key = 'AKIAZ4GCQXRTNT447EGD'
    secret_key = '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'
    region = 'ap-south-1'


    ec2_resource = boto3.resource(
    'ec2',
    aws_access_key_id=access_key,
    aws_secret_access_key=secret_key,
    region_name=region
)

    print("<br/>")
    instance = ec2_resource.create_instances(
        ImageId = 'ami-057752b3f1d6c4d6c',
        InstanceType = 't2.micro',
        MaxCount= 1,
        MinCount = 1
)
    print("<h3>logged in</h3>")
    print("test-2")

    print("test3")
    print("<h2>instance id </h2>")
    print(instance.id)
    print("test4")

def create_volume():
    access_key = 'AKIAZ4GCQXRTNT447EGD'
    secret_key = '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'
    region = 'ap-south-1'
    ec2_client = boto3.client(
    'ec2',
    aws_access_key_id=access_key,
    aws_secret_access_key=secret_key,
    region_name=region
    )
    availability_zone = 'ap-south-1b'
    size_gb = 1
    response = ec2_client.create_volume(
    AvailabilityZone=availability_zone,
    Size=size_gb
    )
    volume_id = response['VolumeId']
    print(volume_id)


def dockerTable():
    exitcode, output = subprocess.getstatusoutput("sudo docker ps -a")

    if exitcode==0:
        totalcontainer= output.split('\n')[1:]
        #print(totalcontainer)
        print("<table width='80%' align = 'center' border=5>")
        print("""<tr bgcolor='grey'>
            <th>Console</th>
            <th>Status</th>
            <th>Image</th>
            <th>Name</th>
            <th>Start</th>
            <th>Stop</th>
        </tr>""")
        for container in totalcontainer:
            print("<tr>" )

            print( "<td>"+ "<a target='myos' href='https://13.127.196.254:4200/'>Console</a>"+"</td>")
            print( "<td>"+ container.split()[0]+"</td>")
            print( "<td>"+ container.split()[1]+"</td>")
            print( "<td>"+ container.split()[-1]+"</td>")
            print( "<td>"+ "<button>Start</button>"+"</td>")
            print( "<td>"+ "<button>Stop</button>"+"</td>")

            print("</tr>" )
        print("</table>")
    else :
        print("retry")
    print("<iframe name='myos'> </iframe>")


if "instance" in data:
    print("its there")
    create_instance()
elif "volume" in data:
    print("its there")
    create_volume()
elif "bucket" in data:
    print("its there")
    create_bucket()
elif "email" in data:
    keyword1 = "that "
    index = c.find(keyword) + len(keyword)
    result = c[index:]
    keyword2="to"
    index2=result.find(keyword2)
    body=result[:index2]
    words = c.split()
    index = words.index("to")
    send_to = words[index + 1] + "@nitgoa.ac.in"
    sender_email = "anuragp1718@gmail.com"
    receiver_email = send_to
    subject = body
    message = "This is a test email sent from Python."
    smtp_server = "smtp.gmail.com"
    smtp_port = 587
    smtp_username = "anuragp1718@gmail.com"
    smtp_password = "uilhungydbtqmthf"
    send_email()