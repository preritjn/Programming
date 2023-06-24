class VisitorForm:
    name = None
    number = None
    remarks = None
    # def setName(self,n):
    #     self.name = n
    # def setPhone(self,m):
    #     self.number = m
    # def my(self):
    #     print('this is me')
    def __init__(self,name,number,remarks):
        self.name = name
        self.number = number
        self.remarks = remarks
        print('init method')


prerit = VisitorForm('Prerit Kumar',7008205939,"all good")
# prerit.setPhone(1234567890)
# print(prerit.my())
print(prerit.__dict__)