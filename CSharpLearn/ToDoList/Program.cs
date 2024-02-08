using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ToDoList
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Welcome to your To Do List.");
            List<string> taskList = new List<string>();
            string option = "";

            while (option != "e")
            {
                Console.WriteLine("What would you like to do?");
                Console.WriteLine("Enter 1 to add a task to the list.");
                Console.WriteLine("Enter 2 to remove a task from the list.");
                Console.WriteLine("Enter 3 to view the list.");
                Console.WriteLine("Enter 'e' to exit.");
                option = Console.ReadLine();
                if (option == "1")
                {
                    Console.WriteLine("Please enter the task name you wanna add to the list.");
                    string task = Console.ReadLine();
                    taskList.Add(task);
                    Console.WriteLine("Task added to the list.");
                }
                else if (option == "2" | option == "3")
                {
                    Console.WriteLine("Current tasks in the list :");
                    for (int i = 0; i < taskList.Count; i++)
                    {
                        Console.WriteLine(i + " : " + taskList[i]);
                    }
                    if (option == "2")
                    {
                        Console.WriteLine("Please enter the number of the task to remove.");
                        int taskNumber = Convert.ToInt32(Console.ReadLine());
                        taskList.RemoveAt(taskNumber);
                        Console.WriteLine("Task removed.");
                    }
                }
                else if (option == "e")
                {
                    Console.WriteLine("Exiting...");
                }
                else
                {
                    Console.WriteLine("Invalid Option, please try again");
                }
                Console.ReadKey();
            }
        }
    }
}