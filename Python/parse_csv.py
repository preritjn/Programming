import csv

# with open('name.csv', 'r') as csv_file:
#     csv_reader = csv.reader(csv_file)
#
#     # next(csv_reader)
#     with open('new_name.csv', 'w') as csv_new_file:
#         csv_writer = csv.writer(csv_new_file, delimiter='\t')
#
#         for line in csv_reader:
#             csv_writer.writerow(line)
#
# with open('new_name.csv', 'r') as csv_file:
#     csv_reader = csv.reader(csv_file, delimiter='\t')
#
#     for line in csv_reader:
#         print(line)

# with open('name.csv', 'r') as csv_file:
#     csv_reader = csv.DictReader(csv_file)
#
#     with open('new_name.csv', 'w') as csv_new_file:
#         fieldnames = ['firstname', 'lastname', 'email']
#         csv_writer = csv.DictWriter(csv_new_file, fieldnames=fieldnames)
#
#         csv_writer.writeheader()
#
#         for line in csv_reader:
#             csv_writer.writerow(line)


names = []
html_output = ''

# with open('new_name.csv', 'r') as data_file:
#     csv_data = csv.reader(data_file)
#
#     next(csv_data)
#
#     for line in csv_data:
#         if line[0] == 'No Reward':
#             break
#         names.append(f"{line[0]} {line[1]}")

with open('new_name.csv', 'r') as data_file:
    csv_data = csv.DictReader(data_file)

    for line in csv_data:
        if line['firstname'] == 'No Reward':
            break
        names.append(f"{line['firstname']} {line['lastname']}")

html_output += f'<p>There are currently {len(names)} public contributors. Thank You!</p>'

html_output += '\n<ul>'

for name in names:
    html_output += f'\n\t<li>{name}</li>'

html_output += '\n</ul>'
print(html_output)
