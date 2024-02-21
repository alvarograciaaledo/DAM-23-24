/*Crea un par de métodos dentro de la clase Program.cs.
● Método RestaNumeros: Recibe como parámetros dos números y devuelve la resta.
Utiliza una expresión lambda para implementarlo. Para pasar un char a string puedes
utilizar Char.ToString();
● Método ComparaCadenas: Recibe como parámetros dos cadenas y devuelve si son
iguales. Consideraremos que son iguales aunque las mayúsculas y minúsculas no sean
iguales.
● Método CuentaCaracter: Recibe como parámetro un String y una vocal. Cuenta el
número de apariciones de la vocal en el texto.
En el método main solicita datos al usuario para pasarlos a los métodos.*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace METODOS_1
{
    class Program
    {
        static int RestaNumeros(int n1, int n2) => n1 - n2;

        static bool ComparaCadenas(string p1, string p2)
        {
            return (p1.ToLower() == p2.ToLower());
        }

        static int CuentaCaratcter(string palabra, char letra)
        {
            int contaVocal = 0;
            string laVocal = char.ToString(letra);

            for (int i = 0; i < palabra.Length; i++)
            {
                if (laVocal == palabra.Substring(i, 1))
                {
                    contaVocal++;
                }
            }
            return contaVocal;
        }

        static void Main(string[] args)
        {
            Console.Write("\nDame un numero: ");
            int num1 = int.Parse(Console.ReadLine());
            Console.Write("Dame otro numero: ");
            int num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Resultado: "+ num1 +" - "+ num2 +" = "+RestaNumeros(num1,num2));

            Console.Write("\nDame una cadena: ");
            string p1 = Console.ReadLine();
            Console.Write("Dame otra: ");
            string p2 = Console.ReadLine();
            Console.WriteLine("Resultado: "+ ComparaCadenas(p1, p2));

        }
    }
}
