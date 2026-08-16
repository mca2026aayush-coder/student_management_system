// Author Name: Aayush S. Mahale
// Roll No.:- 2601

using System;

namespace StudentManagementSystem
{
    class MainClass
    {
        static void Main(string[] args)
        {
            // Creating Objects
            GoaBusinessSchool gbs = new GoaBusinessSchool(1, "Goa Business School");
            Program mca = new Program(101, "MCA");
            Course oot = new Course(201, "Object Oriented Technology", 4);
            Faculty faculty = new Faculty(301, "HHR", "hhr@gbs.com");
            Student student = new Student(401, "Hritik", "Goa", "1234567890");
            Exam exam = new Exam("Semester End");
            Result result = new Result(501, "Fail");

            gbs.OfferProgram(mca);
            mca.AddCourse(oot);
            faculty.TeachCourse(oot);

            Console.WriteLine("Student Name: " + student.Name);
            Console.WriteLine("Student Address: " + student.Address);

            student.Name = "Parth";
            Console.WriteLine("Updated Name: " + student.Name);

            student.ShowRole();
            faculty.ShowRole();

            student.Enroll(mca);

            // Object Referencing + Polymorphism
            Person p1 = new Student(501, "Siddhant", "Goa", "9876543210");
            Person p2 = new Faculty(601, "HHR Sir", "hhr@gbs.com");

            p1.ShowRole();
            p2.ShowRole();

            exam.ConductExam();
            result.DisplayResult();
        }
    }
}
