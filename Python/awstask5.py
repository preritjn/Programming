import boto3


def lambda_handler(event, y):
    s3 = boto3.client('s3')
    
    bucket_name = 'hellobucket32'
    file_name = 'email-list.csv'
    
    try:
        response = s3.get_object(Bucket=bucket_name, Key=file_name)
        file_content = response['Body'].read().decode('utf-8')
        print(file_content)
    except Exception as e:
        print(f'Error reading file: {str(e)}')
    
    print(type(file_content))
    substrings = file_content.split()
    
    print(substrings)
    
    emails = []
    for substring in substrings:
        if "@" in substring and "." in substring:
            emails.append(substring)
    
    print("typr of data \n")
    print(type(emails))
    
    
    
    for to_emails in emails:
      
        ses_client = boto3.client('ses')
        sender_email = 'preritbgr3010@gmail.com'
        recipient_email = to_emails
        email_subject = 'Team Meeting '
        email_body = 'We have the Meeting tomorrow at sharp 11.'
    
        email_request = {
            'Source': sender_email,
            'Destination': {
                'ToAddresses': [recipient_email]
            },
            'Message': {
                'Subject': {
                    'Data': email_subject
                },
                'Body': {
                    'Text': {
                        'Data': email_body
                    }
                }
            }
        }
    
        response = ses_client.send_email(
            Source=sender_email,
            Destination={
                'ToAddresses': [recipient_email]
            },
            Message={
                'Subject': {
                    'Data': email_subject
                },
                'Body': {
                    'Text': {
                        'Data': email_body
                    }
                }
            }
        )
    
        print(response)