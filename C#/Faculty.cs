using System;

namespace StudentManagementSystem
{
    // Implemented Inheritance
    public class Faculty : Person
    {
        private string email;

        public Faculty(int id, string name, string email)
            : base(id, name)
        {
            this.email = email;
        }

        public override void ShowRole()
        {
            Console.WriteLine(Name + " is a Faculty");
        }

        public void TeachCourse(Course c)
        {
            Console.WriteLine(Name + " teaches " + c.name);
        }
    }
}
