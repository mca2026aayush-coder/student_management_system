using System;

namespace StudentManagementSystem
{
    public class Program
    {
        public int id;
        public string name;

        public Program(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        public void AddCourse(Course c)
        {
            Console.WriteLine(c.name + " added to " + name);
        }
    }
}