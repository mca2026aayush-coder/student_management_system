using System;

namespace StudentManagementSystem
{
    // Implemented Inheritance
    public class Student : Person
    {
        private string address;
        private string phone;

        public Student(int id, string name, string address, string phone)
            : base(id, name)
        {
            this.address = address;
            this.phone = phone;
        }

        public string Address
        {
            get { return address; }
            set { address = value; }
        }

        public string Phone
        {
            get { return phone; }
            set { phone = value; }
        }

        public override void ShowRole()
        {
            Console.WriteLine(Name + " is a Student");
        }

        public void Enroll(Program p)
        {
            Console.WriteLine(Name + " enrolled in " + p.name);
        }
    }
}
