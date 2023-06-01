# File Objects

# f = open('test.txt', 'r')
# print(f)
# print(f.name)
# print(f.mode)
# f.close()

with open('test.txt', 'r') as f:
    # print(f)
    # print(f.name)
    # print(f.mode)
    # f_contents = f.read(135)
    # print(f_contents, end='')
    # f_contents = f.read(130)
    # print(f_contents, end='')
    # f_contents = f.readline()
    # print(f_contents, end='')
    # for line in f:
    #     print(line, end='')
    size = 100
    f_context = f.read(size)
    while len(f_context) > 0:
        print(f.tell())  # says the index of the last char
        print(f_context, end='')
        f_context = f.read(size)

print(f.closed)

with open('test2.txt', 'w') as f:
    f.write('Hello Again')
    # f.seek(0)
    # f.write('Seek')
    f.write('Hello Again')

with open('test.txt', 'r') as rf:
    with open('test_copy.txt', 'w') as wf:
        for line in rf:
            wf.write(line)
