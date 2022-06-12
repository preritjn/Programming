name=input("Enter your name : ")
a="Good Afternoon, "
a+=name
print(a)

letter='''Dear, |NAME|
You are selected

Date: |DATE|'''
name=input("Enter your name : ")
date=input("Enter Date : ")
letter=letter.replace("|NAME|",name)
letter=letter.replace("|DATE|",date)
print(letter)
