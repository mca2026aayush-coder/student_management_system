//Author Name: Aayush S. Mahale
//Roll No.:- 2601

#include <iostream>
#include "GoaBusinessSchool.h"
#include "Program.h"
#include "Course.h"
#include "Faculty.h"
#include "Student.h"
#include "Exam.h"
#include "Result.h"

int main() {
    //Creating Objects
    GoaBusinessSchool gbs(1, "Goa Business School");
    Program mca(101, "MCA");
    Course oot(201, "Object Oriented Technology", 4);
    Faculty faculty(301, "HHR", "hhr@gbs.com");
    Student student(401, "Swapnil", "Goa", "1234567890");
    Exam exam("Semester End");
    Result result(501, "Pass");

    gbs.offerProgram(mca);
    mca.addCourse(oot);
    faculty.teachCourse(oot);

    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student Address: " << student.getAddress() << std::endl;

    student.setName("Sarvesh");
    std::cout << "Updated Name: " << student.getName() << std::endl;

    student.showRole();
    faculty.showRole();

    student.enroll(mca);

    // Object Referencing + Polymorphism
    Person* p1 = new Student(501, "Aditya", "Goa", "9876543210");
    Person* p2 = new Faculty(601, "Sv Sir", "sv@gbs.com");

    p1->showRole();
    p2->showRole();

    delete p1;
    delete p2;

    exam.conductExam();
    result.displayResult();

    return 0;
}
