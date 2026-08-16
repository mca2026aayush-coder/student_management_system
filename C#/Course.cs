using System;

namespace StudentManagementSystem
{
    public class Course
    {
        public int id;
        public string name;
        public int credits;

        public Course(int id, string name, int credits)
        {
            this.id = id;
            this.name = name;
            this.credits = credits;
        }
    }
}
