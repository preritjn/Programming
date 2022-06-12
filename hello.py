'''multiline comments'''
# single line comment

import os

print("Hello World")
print('''Hello World     
Hello World
Hello World            
Hello World
Hello World''')  # to print multiline statements

from playsound import playsound
playsound('D:\\Programming\\Python\\Pasoori - Shae Gill.mp3')

print(os.listdir())
a1 = "Prerit"
a2 = 'Prerit'
a3 = '''Prerit'''
b = 300
c = 84.156
d = True
e = None
# Printing the values of variables
print(a1)
print(a2)
print(a3)
print(b)
print(c)
print(d)
print(e)
# Printing the type of variables
print(type(a1))
print(type(a2))
print(type(a3))
print(type(b))
print(type(c))
print(type(d))
print(type(e))

# logical operator
bool1 = True
bool2 = False
print("The value of bool1 and bool2 is ",(bool1 and bool2))
print("The value of bool1 or bool2 is ",(bool1 or bool2))
print("The value of not bool2 is ",(not bool2)) 

a="505"
a=int(a)
print(type(a))
print(a+5)

c2=str(31)
print(type(c2))

name=input("Enter your name : ")
print(name)
print(type(name))