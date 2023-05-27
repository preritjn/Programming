import os

for dir_path, dir_name, file_name in os.walk(os.getcwd()):
    print('Current Path:', dir_path)
    print('Directory Name:', dir_name)
    print('File Name:', file_name)
    print()


print(os.environ.get('Python'))
