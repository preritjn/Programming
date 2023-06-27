class CommonForm:
    name = None
    mob = None

    def my(self):
        print("I am a parent class")

class JobForm(CommonForm):
    exp = None

class StudentForm(CommonForm):
    query = None
    def __init__(self,query,name,mob,city) : 
        self.query = query
        self.name = name
        self.mob = mob
        self.city = city

Prerit = StudentForm("QC Course","Prerit Kumar Jain",7008205939,"Balangir")

print(Prerit.__dict__)