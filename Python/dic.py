dictionary = {
    "Prerit": "A Student",
    "First Name": "Prerit",
    "Last Name": "Kumar Jain",
    "Age": 19,
    "dict1": {"Hello": "World",
              "Hello1": "World1"}
}
print(dictionary)
print(dictionary["Prerit"])
print(dictionary["First Name"])
print(dictionary["Last Name"])
print(dictionary["Age"])
dictionary["Age"] = 20
print(dictionary["Age"])
print(dictionary["dict1"])
print(dictionary["dict1"]["Hello"])

print(dictionary.keys())
print(type(dictionary.keys()))
print(list(dictionary.keys()))
print(type(list(dictionary.keys())))

print(dictionary.values())
print(type(dictionary.values()))
print(list(dictionary.values()))
print(type(list(dictionary.values())))

print(dictionary.items())
update_dictionary = {
    "Prer": "Friend",
    "Jain": "Enemy",
    "Middle Name": "Kumar"
}
dictionary.update(update_dictionary)
print(dictionary)

print(dictionary.get("Preri", "Not Found"))
print(dictionary["Prer"])
