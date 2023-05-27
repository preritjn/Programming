def function(greeting, name='Hello'):
    print('Inside the {} {} function'.format(greeting, name))
    # pass


function('greeting', 'Prerit')


def function1():
    return 5


print(function1())


def student_info(*args, **kwargs):
    print(args)
    print(kwargs)


# student_info('Maths', 'Art', name='John', age=22)
# Positional Arguments Maths, Art
# Keyword Arguments name, age

course = ['Maths', 'Art']
info = {'name': 'John', 'age': 22}
student_info(*course, **info)
