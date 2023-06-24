import boto3

myec2 = boto3.resource("ec2")
response = myec2.create_instances(
    ImageId='ami-057752b3f1d6c4d6c',
    InstanceType='t2.micro',
    MaxCount=1,
    MinCount=1
)

'''
ImageId='string',
InstanceType='t2.micro',
'Tags'=[
            {
                'key' : 'Name',
                'value' : 'sds'
            }
        ],
MaxCount=1,
MinCount=1
'''
print(response)


def create_ebs_volume(region, availability_zone, size_gb):
    ec2_client = boto3.client('ec2', region_name=region)

    response = ec2_client.create_volume(
        AvailabilityZone=availability_zone,
        Size=size_gb,
        VolumeType='gp2'  # Specify the desired volume type (e.g., gp2, io1, st1, sc1)
    )

    volume_id = response['VolumeId']
    print(f"Created EBS volume {volume_id} in availability zone {availability_zone}.")

    return volume_id


def attach_ebs_volume(region, volume_id, instance_id, device_name):
    ec2_resource = boto3.resource('ec2', region_name=region)

    volume = ec2_resource.Volume(volume_id)

    response = volume.attach_to_instance(
        Device=device_name,
        InstanceId=instance_id
    )

    print(f"Attached EBS volume {volume_id} to instance {instance_id} as device {device_name}.")


# Usage example
region = response.region
availability_zone = 'us-east-1a'
volume_size_gb = 100
instance_id = 'i-0123456789abcdef0'  # Replace with your instance ID
device_name = '/dev/xvdf'  # Replace with the desired device name

# Create and attach the EBS volume
volume_id = create_ebs_volume(region, availability_zone, volume_size_gb)
attach_ebs_volume(region, volume_id, instance_id, device_name)
