import boto3
from botocore.exceptions import ClientError
cognito_client = boto3.client('cognito-idp')

try:
    response = cognito_client.create_user_pool(
        PoolName='my-user-pool1',
        ClientName='prerit',
        Policies={
            'PasswordPolicy': {
                'MinimumLength': 8,
                'RequireLowercase': True,
                'RequireNumbers': True,
                'RequireSymbols': True,
                'RequireUppercase': True
            }
        },
        CallbackURLs=[
            'https://in.linkedin.com/?trk=public_jobs_nav-header-logo'
        ]
    )
    user_pool_id = response['UserPool']['Id']
    print(f"User pool created with ID: {user_pool_id}")
except ClientError as e:
    print(f"Error creating user pool: {e.response['Error']['Message']}")