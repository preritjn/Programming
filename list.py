list=[1,9,57,54,25,2,34,4]

print(list)
list.sort()
print(list)
list.reverse()
print(list)
list.append(35)
print(list)
list.sort()
print(list)
list.insert(2,99)
print(list)
list.pop(2)
print(list)
list.remove(25)
print(list)


t1=(1,2,3,5,4,6,3,3,3)
print(t1)
print(t1[0])

t2=() #Empty tuple
# t3=(1) wrong way to declare single element tuple
t3=(1,) #single element tuple
print(t2)
print(t3)
print(t1.count(3))
print(t1.index(4))