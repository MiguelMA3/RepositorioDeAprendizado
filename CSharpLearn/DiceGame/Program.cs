using System;

namespace DiceGame {
    class Program {
            static void Main(string[] args) {
                int playerRandomNum, enemyRandomNum;
                int playerPoints = 0, enemyPoints = 0;

                Random random = new Random();

                for (int i = 0; i < 10; i++) {
                    Console.WriteLine("\n= Press any key to roll the dice =");
                    Console.ReadKey();
                    
                    playerRandomNum = random.Next(1, 7);
                    Console.WriteLine($"You rolled a {playerRandomNum}");
                    playerPoints += playerRandomNum;
                    Console.WriteLine("...");
                    System.Threading.Thread.Sleep(1000);

                    enemyRandomNum = random.Next(1, 7);
                    Console.WriteLine($"Enemy AI rolled a {enemyRandomNum}");
                    enemyPoints += enemyRandomNum;
                }

                Console.WriteLine("\n===Points===");
                Console.WriteLine($"Player: {playerPoints}\nEnemy: {enemyPoints}");

                if (playerPoints > enemyPoints) {
                    Console.WriteLine("You WON the Game!");
                } else if (playerPoints < enemyPoints) {
                    Console.WriteLine("You LOSE the Game!");
                } else {
                    Console.WriteLine("DRAW!");
                }
                Console.ReadKey();
            }
    }
}