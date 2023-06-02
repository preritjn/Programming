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

with open('name.csv', 'r') as csv_file:
    csv_reader = csv.DictReader(csv_file)

    with open('new_name.csv', 'w') as csv_new_file:
        fieldnames = ['firstname', 'lastname', 'email']
        csv_writer = csv.DictWriter(csv_new_file, fieldnames=fieldnames, delimiter='\t')

        csv_writer.writeheader()

        for line in csv_reader:
            csv_writer.writerow(line)
