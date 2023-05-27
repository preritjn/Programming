print('Imported my_module...')

test = 'Test String'


def find_index(to_search, target):
    for i, value in enumerate(to_search):  # enumerate returns index,value of the sequence
        if value == target:
            return i
    return -1
