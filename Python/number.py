import inflect
number = int(input('Enter a number : '))
p = inflect.engine()
print(p.number_to_words(number))