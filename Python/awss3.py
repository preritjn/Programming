import boto3

client = boto3.client('s3')
bucketName = 'prerit3010'
client.create_bucket(
    Bucket=bucketName,
    CreateBucketConfiguration={
        'LocationConstraint': 'ap-south-1'
    }
)
print(f"Bucket : {bucketName} created bucket")