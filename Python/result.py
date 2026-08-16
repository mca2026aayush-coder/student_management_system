class Result:

    def __init__(self, resultId, grade):
        self.resultId = resultId
        self.grade = grade

    def displayResult(self):
        print("Grade: " + self.grade)
