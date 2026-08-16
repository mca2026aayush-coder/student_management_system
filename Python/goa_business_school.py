class GoaBusinessSchool:

    def __init__(self, id, name):
        self.id = id
        self.name = name

    def offerProgram(self, p):
        print(self.name + " offers " + p.name)
