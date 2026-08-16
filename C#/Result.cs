using System;

namespace StudentManagementSystem
{
    public class Result
    {
        public int resultId;
        public string grade;

        public Result(int resultId, string grade)
        {
            this.resultId = resultId;
            this.grade = grade;
        }

        public void DisplayResult()
        {
            Console.WriteLine("Grade: " + grade);
        }
    }
}
