a = 19
b = "Prerit's"
c = '''Prerit Jain's'''
print(a, b, c)
print(type(a), type(b), type(c))

print(b[2])
print(b[0:4])
print(b[:4])  # same as b[0:4]
print(b[2:])  # same as b[2:7]

print(c[2])
print(c[0:4])
print(c[:4])
print(c[2:])
print(c[0::2])  # print(c[start value:endvalue:skip value])

story = "paragraphs are the building blocks of papers. Many students define paragraphs in terms of length: a paragraph is a group of at least five sentences, a paragraph is half a page long, etc."

# string function
print(len(story))
print(story.endswith("etc."))
print(story.endswith("Prerit"))
print(story.count("e"))
print(story.capitalize())
print(story.find("the"))
print(story.replace("a", "was"))
