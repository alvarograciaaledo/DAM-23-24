/*Genera los números de La Primitiva e imprimimos por pantalla sabiendo que:
    a. Son 6 números del 1 al 49.
    b. El complementario es un número del 1 al 49.
    c. El reintegro es un número del 0 al 9*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea2_E1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.BackgroundColor = ConsoleColor.Yellow;
            Console.ForegroundColor = ConsoleColor.DarkGreen;
            Console.WriteLine("\n                      ONCE                 ");

            Console.BackgroundColor = ConsoleColor.White;
            Console.ForegroundColor = ConsoleColor.Black;

            Random rnd = new Random();
            for (int i = 0; i < 6; i++)
            {
                Console.Write("   ");
                Console.Write(rnd.Next(1, 50));
                if (i < 5)
                {
                    Console.Write(" - ");
                }
            }
            Console.Write(" ");
            Console.Write("\n                                               ");

            Console.WriteLine();
            Console.Write("   Complementario: ");
            Console.Write(rnd.Next(1, 50));
            Console.Write("           Reintegro: ");
            Console.WriteLine (rnd.Next(0, 10));
            Console.Write(" ");
        }
    }
}
