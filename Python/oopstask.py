class TeamMember:
    def __init__(self, name, mob, city):
        self.name = name
        self.mob = mob
        self.city = city

    def getData(self):
        print("Name: %s \nMob: %s \nCity: %s" % (self.name, self.mob, self.city))

object1 = TeamMember('Prerit',700820,'Jaipur')
object2 = TeamMember('Mohit',700820,'Jaipur')
object3 = TeamMember('Lukcy',700820,'Jaipur')
object4 = TeamMember('Aman',700820,'Jaipur')
object5 = TeamMember('Samrudhhi',700820,'Jaipur')
object1.getData()
print()
object2.getData()
print()
object3.getData()
print()
object4.getData()
print()
object5.getData()