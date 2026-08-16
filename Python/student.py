from person import Person

# Implemented Inheritance

class Student(Person):

    def __init__(self, id, name, address, phone):
        super().__init__(id, name)
        self.__address = address
        self.__phone = phone

    def getAddress(self):
        return self.__address

    def getPhone(self):
        return self.__phone

    def setAddress(self, address):
        self.__address = address

    def setPhone(self, phone):
        self.__phone = phone

    def showRole(self):
        print(self.getName() + " is a Student")

    def enroll(self, p):
        print(self.getName() + " enrolled in " + p.name)
