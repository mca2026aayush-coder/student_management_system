using System;

namespace StudentManagementSystem
{
    public class Exam
    {
        public string examName;

        public Exam(string examName)
        {
            this.examName = examName;
        }

        public void ConductExam()
        {
            Console.WriteLine(examName + " Exam Conducted");
        }
    }
}
