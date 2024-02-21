/*Solicita un número entero “x” al usuario. Imprime por pantalla los “x” primeros
números de la sucesión de Fibonacci. La sucesión de Fibonacci es una sucesión de
números que empieza por 0 y 1, cada nuevo número es la suma de los dos
anteriores.
Es decir, la sucesión de números empieza así 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Los dos
primeros números son siempre 0 y 1. Los siguientes son calculados sumando los
anteriores números.*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea1_E4
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 0, y = 1, aux, F = 0;

            Console.Write("Ingrese un número entero: ");
            int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                F = x + y;

                Console.Write("{0} + {1} = {2}\n", x, y, F);
                x = y;
                y = F;
            }
       
        }
    }
}
