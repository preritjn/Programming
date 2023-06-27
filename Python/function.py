import random
# def function(greeting, name='Hello'):
#     print('Inside the {} {} function'.format(greeting, name))
#     # pass


# function('greeting', 'Prerit')


# def function1():
#     return 5


# print(function1())


# def student_info(*args, **kwargs):
#     print(args)
#     print(kwargs)


# # student_info('Maths', 'Art', name='John', age=22)
# # Positional Arguments Maths, Art
# # Keyword Arguments name, age

# course = ['Maths', 'Art']
# info = {'name': 'John', 'age': 22}
# student_info(*course, **info)

# def lw() :
#     for i in range(1,6):
#         yield i
    
# for line in lw():
#     print(line)


y = [i*2 for i in range(5)] # this is called list comprehension
print(y)

z = (i*2 for i in range(5)) # this is called generator comprehension this gives generator object
print(z)

x = [i*2 for i in range(5) if i!=3]
print(x)


exp = random.randint(1,10)
job = "ok" if exp>5 else "Not ok"
print(exp,job)