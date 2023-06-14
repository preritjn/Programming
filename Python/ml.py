import pandas
import csv
from sklearn.linear_model import LinearRegression

with open('data.csv',) as data_file:
    csv_reader = csv.reader(data_file)

    for line in csv_reader:
        print(line[2])
