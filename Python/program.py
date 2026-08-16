class Program:

    def __init__(self, id, name):
        self.id = id
        self.name = name

    def addCourse(self, c):
        print(c.name + " added to " + self.name)
