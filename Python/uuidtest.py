import uuid

myuuid = [uuid.uuid4() for _ in range(100)]

for val in myuuid :
    print(val)