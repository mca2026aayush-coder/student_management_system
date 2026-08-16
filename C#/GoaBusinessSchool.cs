using System;

namespace StudentManagementSystem
{
    public class GoaBusinessSchool
    {
        public int id;
        public string name;

        public GoaBusinessSchool(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        public void OfferProgram(Program p)
        {
            Console.WriteLine(name + " offers " + p.name);
        }
    }
}
