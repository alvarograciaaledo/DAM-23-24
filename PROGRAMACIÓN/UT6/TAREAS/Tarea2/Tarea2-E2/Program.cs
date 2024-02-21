/*Genera un número aleatorio por pantalla. Dale 3 oportunidades al usuario para
acertarlo. En caso de fallo, informa al usuario si el número es mayor o menor.*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea2_E2
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();
            int x = rnd.Next(11);

            int vidas = 3;
            int n, i = 1;

            Console.WriteLine("\n--- ADIVINA EL NUMERO ---");
            Console.WriteLine("Numeros del 1 al 10.");

            while (vidas != 0)
            {
                Console.WriteLine("\nVIDAS: " + vidas);
                Console.Write("Intento {0}: ", i);
                n = int.Parse(Console.ReadLine());

                if (n == x)
                {
                    Console.WriteLine("\nFelicidades lo has acertado!!!\n El numero era {0}", x);
                    break;
                }
                else
                {
                    Console.WriteLine("\nFallo!!!", i);
                    vidas--;
                    i++;
                }
            }

            if (vidas == 0)
            {
                Console.Write("> No lo has adivinado, el numero era " + x);
                Console.WriteLine(" :(");
            }
        }
    }
}
