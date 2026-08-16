from person import Person

# Implemented Inheritance

class Faculty(Person):

    def __init__(self, id, name, email):
        super().__init__(id, name)
        self.__email = email

    def showRole(self):
        print(self.getName() + " is a Faculty")

    def teachCourse(self, c):
        print(self.getName() + " teaches " + c.name)
