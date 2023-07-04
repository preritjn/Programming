import boto3
import time

def create_volume(size, availability_zone, volume_type='gp2'):
    ec2 = boto3.client('ec2')
    response = ec2.create_volume(
        AvailabilityZone=availability_zone,
        Size=size,
        VolumeType=volume_type
    )
    volume_id = response['VolumeId']
    return volume_id

def attach_volume(volume_id, instance_id, device):
    ec2 = boto3.client('ec2')
    response = ec2.attach_volume(
        VolumeId=volume_id,
        InstanceId=instance_id,
        Device=device
    )
    return response

# Create an EBS volume
volume_size = 5  # Size in GB
availability_zone = 'ap-south-1b'
volume_type = 'gp2'  # General Purpose SSD (default)
new_volume_id = create_volume(volume_size, availability_zone, volume_type)
print(f"New volume ID: {new_volume_id}")

for i in range(0,5):
    time.sleep(2)

# Attach the volume to an EC2 instance
instance_id = 'i-03b5797f8c3f36c43'  # Replace with your instance ID
device = '/dev/sdf'  # Replace with your desired device name or mount point
attach_response = attach_volume(new_volume_id, instance_id, device)
print(f"Volume attached: {attach_response}")
