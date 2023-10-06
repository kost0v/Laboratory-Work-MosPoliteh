using System;

namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Car honda = new Car();
            honda.name = "Civic";
            honda.year = 1999;
            Console.WriteLine($"{honda.name} { honda.year}") ;
        }
    }
    class Car
    {
        public string name;
        public int year;
    }
}
