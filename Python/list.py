lists = [1, 9, 57, 54, 25, 2, 34, 4]

print(lists)
lists.sort()
print(lists)
lists.reverse()
print(lists)
lists.append(35)
print(lists)
lists.sort()
print(lists)
lists.insert(2, 99)
print(lists)
lists.pop(2)
print(lists)
lists.remove(25)
print(lists)
# tuples are immutable
t1 = (1, 2, 3, 5, 4, 6, 3, 3, 3)
print(t1)
print(t1[0])

# Empty tuple
t2 = ()
empty_tuple = tuple()
# t3=(1) wrong way to declare single element tuple
t3 = (1,)  # single element tuple
print(t2)
print(t3)
print(t1.count(3))
print(t1.index(4))

new_list = ['History', 'Math', 'Physics', 'Chemistry', 'Biology']
sorted_new_list = sorted(new_list)
print(new_list)
print(sorted_new_list)

for course in new_list:
    print(course)
for index, course in enumerate(sorted_new_list):
    print(index, course)

new_list_str = " - ".join(new_list)
new_list1 = new_list_str.split(" - ")
print(new_list_str)
print(new_list1)

# empty list
empty_list = []
empty_list1 = list()
