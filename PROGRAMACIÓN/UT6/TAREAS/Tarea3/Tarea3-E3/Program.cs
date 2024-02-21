/*Confeccionar un método que muestre los primeros 10 números pares. En caso que
le pasemos un parámetro opcional mostrar tantos pares como indica el parámetro.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea3_E3
{
    class Program
    {
        static void generaPar(ref int cantidad)//Metodo donde mostramos los pares
        {
            for (int i = 1; i <= 10; i++)//bucle que muestra los numeros pares hasta cumplir  la condicion.
            {
                Console.Write((2 * i) + " - ");//Imprime.
            }
            Console.Write("\b\b\b\b");

            Console.Write("\nIndica cuantos pares quiere ver: ");//Despues preguntamos cuantos pares quiere ver.
            cantidad = int.Parse(Console.ReadLine());//Parseamos la variable.

            if (cantidad <= 0)//Si el numero es menor o igual que 0 salimos.
            {
                Console.WriteLine("\nAdios.");
            }
            else//Si el numero es mayor que 0 imprime hasta cierta cantidad.
            {
                for (int i = 1; i <= cantidad; i++)//Bucle que imprime hasta que i sea igual que la cantidad
                {
                    Console.Write((2 * i) + " - ");//Imprime
                }
                Console.Write("\b\b");//Borramos el ultimo signo que sobra.
            }
        }
        static void Main(string[] args)
        {
            int cant = 10;//Cantidad es igual a 10 para el primer bucle, pero luego cambia.
            generaPar(ref cant);//LLamamos el metodo y pasamos la cantidad
        }
    }
}
