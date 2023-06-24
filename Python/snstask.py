import boto3

sns = boto3.client('sns')

response = sns.create_topic(Name='task')
topic_arn = response['TopicArn']

endpoint = 'preritbgr3010@gmail.com'
protocol = 'email'
response = sns.subscribe(TopicArn=topic_arn, Protocol=protocol, Endpoint=endpoint)


sns.publish(
    TopicArn = topic_arn,
    Subject = "Test Subject",
    Message = "Hello from boto3..."
)