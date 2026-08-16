# Author Name: Aayush S. Mahale
# Roll No.: 2601

from goa_business_school import GoaBusinessSchool
from program import Program
from course import Course
from faculty import Faculty
from student import Student
from exam import Exam
from result import Result
from person import Person

# Creating Objects
gbs = GoaBusinessSchool(1, "Goa Business School")
mca = Program(101, "Msc DS")
oot = Course(201, "Object Oriented Technology", 4)
faculty = Faculty(301, "HHR", "hhr@gbs.com")
student = Student(401, "Vihaan", "Goa", "1234567890")
exam = Exam("Semester End")
result = Result(501, "Pass")

gbs.offerProgram(mca)
mca.addCourse(oot)
faculty.teachCourse(oot)

print("Student Name: " + student.getName())
print("Student Address: " + student.getAddress())

student.setName("Mayank")
print("Updated Name: " + student.getName())

student.showRole()
faculty.showRole()

student.enroll(mca)

# Object Referencing + Polymorphism
p1 = Student(501, "Sanket", "Goa", "9876543210")
p2 = Faculty(601, "HHR Sir", "hhr@gbs.com")

p1.showRole()
p2.showRole()

exam.conductExam()
result.displayResult()
