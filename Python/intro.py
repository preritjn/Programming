# import my_module
# import my_module as mm
# from my_module import find_index  # only gives access to find_index function
import sys

from my_module import find_index, test
import test
import random
import os
from datetime import datetime

courses = ['Maths', 'Physics', 'Chemistry', 'CompSci']

# index = mm.find_index(courses,'Maths')
index = find_index(courses, 'CompSci')
print(index)
print(test)
print(sys.path)

random_course = random.choice(courses)
print(random_course)
print(os.__file__)  # dunder file attribute

print(os.getcwd())
print(os.listdir())
print(os.stat('hello.py').st_mtime)
print(datetime.fromtimestamp(os.stat('hello.py').st_mtime))
