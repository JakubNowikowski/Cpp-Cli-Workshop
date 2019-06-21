using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CliNamespace;

namespace cliWorkshops
{
    class Program
    {
        static void Main(string[] args)
        {
            ManagedClass mc = new CliNamespace.ManagedClass();
            int[] sortedArray = { 4, 3, 8, 5 };

            foreach(int e in sortedArray)
                Console.WriteLine(e);

            Console.WriteLine("*************");

            mc.insertion_sort(sortedArray);

            foreach (int e in sortedArray)
                Console.WriteLine(e);

            Console.ReadKey();
        }
    }
}
