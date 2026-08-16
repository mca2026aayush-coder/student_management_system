using System;

namespace StudentManagementSystem
{
    // Implemented Abstraction
    public abstract class Person
    {
        private int id;
        private string name;

        protected Person(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        // Implemented Encapsulation
        public int Id
        {
            get { return id; }
            set { id = value; }
        }

        public string Name
        {
            get { return name; }
            set { name = value; }
        }

        public abstract void ShowRole();
    }
}
