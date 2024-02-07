using System;
using System.ComponentModel;
using System.Data;
using System.Reflection;
using Microsoft.VisualBasic;

namespace TurnCombatGame {
    class Program {
        static void Main(string[] args) {
            int playerHP = 40, enemyHP = 20;
            int playerAttack = 5, enemyAttack = 7;
            int healAmount = 5;

            Random random = new Random();

            while(playerHP > 0 && enemyHP > 0) {
                // Player Turn
                Console.WriteLine("-- Player turn --");
                Console.WriteLine($"Player HP - {playerHP}. Enemy HP - {enemyHP}");
                Console.WriteLine("Enter 'a' to attack or 'h' to heal.");

                string choice = Console.ReadLine();
                switch(choice) {
                    case "a":
                        enemyHP -= playerAttack;
                        Console.WriteLine($"Player attacks enemy and deals {playerAttack} damage!");
                        break;
                    default:
                        playerHP += healAmount;
                        Console.WriteLine($"Player restores {healAmount} health points!");
                        break;
                }

                // Enemy Turn
                if(enemyHP > 0) {
                    Console.WriteLine("-- Enemy turn --");
                    int enemyChoice = random.Next(0, 2);

                    switch(enemyChoice) {
                        case 0:
                            playerHP -= enemyAttack;
                            Console.WriteLine($"Enemy attacks and deals {enemyAttack} damage!");
                            break;
                        default:
                            enemyHP += healAmount;
                            Console.WriteLine($"Enemy restores {healAmount} health points!");
                            break;
                    }
                }
            }

            if(playerHP > 0) {
                Console.WriteLine("Congratulations, YOU WON!");
            } else {
                Console.WriteLine("YOU LOSE!");
            }
        }
    }
}