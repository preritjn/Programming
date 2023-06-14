import pandas

students = {
    "name": ["vital", "rahul", "ramesh"],
    "remarks": ["v good", "ok", "good"],
    "mob": [111, 222, 333],
}

db = pandas.DataFrame(students)
print(db['mob'])
print(db[['name', 'mob']])  # column wise operation
print(db.loc[[1, 2]])  # row wise operation
