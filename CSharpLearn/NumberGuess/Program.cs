using System;

namespace NumberGuess
{
    class Program
    {
        static void Main(string[] args)
        {
            bool isCorrectGuess = false;
            Random random = new Random();

            int randomNum = random.Next(1, 10);

            Console.WriteLine("Number Guessing Game");
            Console.WriteLine("A number between 1 and 10 will be generated.");

            while (!isCorrectGuess)
            {
                Console.WriteLine("Please enter your guess.");
                int guess = Convert.ToInt32(Console.ReadLine());

                if (guess > randomNum)
                {
                    Console.WriteLine("Too high.");
                }
                else if (guess < randomNum)
                {
                    Console.WriteLine("Too low");
                }
                else
                {
                    Console.WriteLine("Correct!");
                    isCorrectGuess = true;
                }
            }

            Console.WriteLine("Congratulations, you have won the game!");
            Console.ReadKey();
        }
    }
}