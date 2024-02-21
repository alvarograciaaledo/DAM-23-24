/*Confeccionar un método que me retorne dos valores aleatorios comprendidos entre
1 y 100 mediante parámetros por referencia. Utiliza out para los parámetros.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea3_E2
{
    class Program
    {
        static void GeneraRand(out int Nr1, out int Nr2)//Metodo en el que generamos los 2 numeros de forma aleatoria.
        {
            Random rnd = new Random();//Creamos el random.
            Nr1 = rnd.Next(1, 101);//Hacemos el random 1.
            Nr2 = rnd.Next(1, 101);//Hacemos el random 2.

            Console.WriteLine("Random 1 = " + Nr1 + "\nRanom 2 = " + Nr2);//Imprimimos los random.
        }
        static void Main(string[] args)
        {
            int n1, n2;//Variables de los dos numeros.
            GeneraRand(out n1, out n2);//Llamamos al metodo pasandole las variables correspondientes
        }
    }
}
