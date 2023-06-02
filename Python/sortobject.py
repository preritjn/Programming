from operator import attrgetter


class Employee:
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.salary = salary

    def __repr__(self):
        return '({}, {},${})'.format(self.name, self.age, self.salary)


e1 = Employee('Carl', 37, 70000)
e2 = Employee('Sarah', 28, 80000)
e3 = Employee('John', 43, 90000)

employees = [e1, e2, e3]


def e_sort(emp):
    return emp.name


# s_employees = sorted(employees, key=e_sort)

s_employees = sorted(employees, key=attrgetter('age'))
print(s_employees)
