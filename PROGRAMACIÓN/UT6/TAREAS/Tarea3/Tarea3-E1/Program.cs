/*Confeccionar un método que reciba por referencia (ref) tres enteros y nos los retorne
en forma ordenada de menor a mayor. Para comprobarlo, imprime los parámetros
antes y después de llamar al método.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea3_E1
{
    class Program
    {
        //Metodo con los 3 numeros pasados por referencia.
        static void DevuelveNum(ref int num1, ref int num2, ref int num3)
        {
            //Solicitamos los tres numeros a los usuarios.
            Console.WriteLine("Dame 3 numeros:");
            Console.Write("Num 1 > ");
            num1 = int.Parse(Console.ReadLine());
            Console.Write("Num 2 > ");
            num2 = int.Parse(Console.ReadLine());
            Console.Write("Num 3 > ");
            num3 = int.Parse(Console.ReadLine());

            //Conprobacion 1
            if (num1 > num2 && num1 > num3)//Miramos si el Num1 es el mayor d elos 3 numeros.
            {
                if (num2 > num3)//Comprobamos cual es el mediano y el menor.
                {
                    //Imprimimos los numeros en orden
                    Console.WriteLine("\nResultado: " + num1 + " > " + num2 + " > " + num3);
                }
                else if (num2 < num3)
                {
                    Console.WriteLine("\nResultado: " + num1 + " > " + num3 + " > " + num2);
                }
            }
            // Conprobacion 2
            else if (num2 > num1 && num2 > num3)
            {
                if (num1 > num3)
                {
                    Console.WriteLine("\nResultado: " + num2 + " > " + num1 + " > " + num3);
                }
                else if (num1 < num3)
                {
                    Console.WriteLine("\nResultado: " + num2 + " > " + num3 + " > " + num1);
                }
            }
            //Conprobacion 3
            else if (num3 > num1 && num3 > num2)
            {
                if (num1 > num2)
                {
                    Console.WriteLine("\nResultado: " + num3 + " > " + num1 + " > " + num2);
                }
                else if (num1 < num2)
                {
                    Console.WriteLine("\nResultado: " + num3 + " > " + num2 + " > " + num1);
                }
            }
            //Conprobacion 4 -> Miramos si los 3 numero son iguales.
            else
            {
                Console.WriteLine("\nSon el mismo numero.");
            }
        }
        static void Main(string[] args)
        {
            ///Conprobacion 1ariable d elos 3 numero que estan pasados por referencia.
            int n1 = 0, n2 = 0, n3 = 0;
            DevuelveNum(ref n1, ref n2, ref n3);//Llamamos al metodo y pasamos las variables necesarias.
        }
    }
}
