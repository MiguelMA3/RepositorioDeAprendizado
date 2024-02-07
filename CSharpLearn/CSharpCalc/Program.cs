using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, result = 0;
            string answer;

            Console.WriteLine("Welcome!");

            Console.WriteLine("Enter a Number: ");
            num1 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter another Number: ");
            num2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("What type of operation would you like to do?");
            Console.WriteLine("a - addition\ns - subtraction\nm - multiplication\nd - division");

            answer = Console.ReadLine();

            switch (answer)
            {
                case "a":
                    result = num1 + num2;
                    break;
                case "s":
                    result = num1 - num2;
                    break;
                case "m":
                    result = num1 * num2;
                    break;
                case "d":
                    result = num1 / num2;
                    break;
                default:
                    Console.WriteLine("Invalid Option!");
                    break;
            }

            //Console.WriteLine("Result: " + result);
            Console.WriteLine("$Result: {result}");

            Console.ReadKey();
        }
    }
}