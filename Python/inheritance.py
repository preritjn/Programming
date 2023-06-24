class CommonForm:
    name = None
    number = None
    def mycf(self):
        print('i m common form')

class JobForm(CommonForm):
    exp=None
    def myjf(self):
        print('i m job form')
        