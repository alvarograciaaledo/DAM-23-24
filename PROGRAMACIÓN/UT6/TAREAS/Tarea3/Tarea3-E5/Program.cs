/*Crea una aplicación que solicita una cadena y que devuelve el número de palabras
que terminan en vocal. Crea un método que pasada una cadena devuelva el número
de palabras que terminan en vocal. El número de vocales se imprimirá desde el
main. La cadena introducida por el usuario puede contener comas (,), puntos (.) e
interrogantes (?)*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea3_E5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ingrese una cadena:");//Solicitamos la cadena.
            string cadena = Console.ReadLine();      //Leemos la cadena.

            int numeroVocales = ContaPalabras(cadena);//Hacemos un contador y le asignamos el metodo de contar palabras.

            Console.WriteLine("Número de palabras terminadas en vocal: " + numeroVocales);//Muestra el numero de palabras.
        }

        static int ContaPalabras(string cadena)//Metodo que cuenta las palabras, que recibira una cadena.
        {
            char[] separadores = { ' ', ',', '.', '?' };//Array con los posibles signos que pueden estar en la frase.
            string[] palabras = cadena.Split(separadores, StringSplitOptions.RemoveEmptyEntries);//Cogemos las palabras que llevan algun signo y se lo quitamos.

            int contador = 0;//Contador de palabras.

            foreach (string palabra in palabras)//Bucle que mira palabra por palabra.
            {
                if (palabraFinVocal(palabra))//Si la palabra acaba en vocal suma 1 al contador. 
                {
                    contador++;//Contador + 1.
                }
            }

            return contador;//Devuelve el contador.
        }

        static bool palabraFinVocal(string palabra)//Boleano que comprueba la ultima letra.
        {
            char ultimaLetra = palabra[palabra.Length - 1];//Variable char que guarda la ultima letra de la cadena.
            ultimaLetra = Char.ToLower(ultimaLetra);//Convertimos la letra en minuscula.

            //True si coincide con alguna de las vocales.
            return ultimaLetra == 'a' || ultimaLetra == 'e' || ultimaLetra == 'i' || ultimaLetra == 'o' || ultimaLetra == 'u';
        }
    }
}
