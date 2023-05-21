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

t1 = (1, 2, 3, 5, 4, 6, 3, 3, 3)
print(t1)
print(t1[0])

t2 = ()  # Empty tuple
# t3=(1) wrong way to declare single element tuple
t3 = (1,)  # single element tuple
print(t2)
print(t3)
print(t1.count(3))
print(t1.index(4))
