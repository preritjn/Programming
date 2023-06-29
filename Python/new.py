import speech_recognition as sr
import boto3

# Initialize AWS clients
s3 = boto3.client('s3')
ec2 = boto3.resource('ec2')
dynamodb = boto3.client('dynamodb')

# Initialize the recognizer
r = sr.Recognizer()

def recognize_speech():
    with sr.Microphone() as source:
        print("Listening...")
        audio = r.listen(source)

        try:
            # Use Google Speech Recognition to convert audio to text
            recognized_text = r.recognize_google(audio)
            print("Recognized Text:", recognized_text)
            return recognized_text.lower()
        except sr.UnknownValueError:
            print("Sorry, speech not recognized.")
        except sr.RequestError as e:
            print("Sorry, an error occurred. Please check your internet connection.")

def create_s3_bucket():
    bucket_name = input("Enter a unique bucket name: ")
    s3.create_bucket(Bucket=bucket_name)
    print("S3 bucket created successfully.")

def list_s3_buckets():
    response = s3.list_buckets()
    for bucket in response['Buckets']:
        print("Bucket Name:", bucket['Name'])
        print("---")

def list_ec2_instances():
    instances = ec2.instances.all()
    for instance in instances:
        print("Instance ID:", instance.id)
        print("Instance Type:", instance.instance_type)
        print("State:", instance.state['Name'])
        print("---")

def create_dynamodb_table():
    table_name = input("Enter a table name: ")
    key_name = input("Enter the primary key name: ")
    key_type = input("Enter the primary key data type (e.g., N, S): ")
    attribute_definitions = [
        {
            'AttributeName': key_name,
            'AttributeType': key_type
        }
    ]
    key_schema = [
        {
            'AttributeName': key_name,
            'KeyType': 'HASH'
        }
    ]
    provisioned_throughput = {
        'ReadCapacityUnits': 5,
        'WriteCapacityUnits': 5
    }
    dynamodb.create_table(
        TableName=table_name,
        AttributeDefinitions=attribute_definitions,
        KeySchema=key_schema,
        ProvisionedThroughput=provisioned_throughput
    )
    print("DynamoDB table created successfully.")

def main():
    print("AWS Automation Menu")
    print("-------------------")
    print("1. Create S3 Bucket")
    print("2. List S3 Buckets")
    print("3. List EC2 Instances")
    print("4. Create DynamoDB Table")

    while True:
        recognized_text = recognize_speech()

        if recognized_text == "create s3 bucket":
            create_s3_bucket()
        elif recognized_text == "list s3 buckets":
            list_s3_buckets()
        elif recognized_text == "list ec2 instances":
            list_ec2_instances()
        elif recognized_text == "create dynamodb table":
            create_dynamodb_table()
        elif recognized_text == "exit":
            break
        else:
            print("Invalid command. Please try again.")

main()