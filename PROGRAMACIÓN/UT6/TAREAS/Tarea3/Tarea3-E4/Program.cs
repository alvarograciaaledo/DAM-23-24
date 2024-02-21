/*Crea una aplicación que solicita una cadena por pantalla y devuelve cada letra en
una línea con la mayúsculas o minúsculas intercambiadas. Utiliza un método al que
le pases la cadena dada por el usuario e imprima los datos como se dice en el
enunciado.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea3_E4
{
    class Program
    {
        static void ImprimirLetrasIntercambiadas(string cadena)//Metodo que comprueba la cadena.
        {
            foreach (char letra in cadena)//Bucle que pasa de string a char y comprueba letra a letra.
            {
                if (Char.IsLower(letra))//Comprueba si la letra esta en minuscula.
                {
                    Console.WriteLine(Char.ToUpper(letra));//La pone en mayuscula.
                }
                else if (Char.IsUpper(letra))//Comprueba si la letra esta en mayuscula.
                {
                    Console.WriteLine(Char.ToLower(letra));//La pone en minuscula.
                }
                else//Si no esta en mayus ni minus la imprimimos tal cual.
                {
                    Console.WriteLine(letra);
                }
            }
        }
        static void Main(string[] args)
        {
            Console.Write("Ingrese una cadena:");//Pedimos la cadena al usuario.
            string cadena = Console.ReadLine();//Creamos la variable y la leemos.

            ImprimirLetrasIntercambiadas(cadena);//Llamamos al metodo y le pasamos la cadena.
        }
    }
}
