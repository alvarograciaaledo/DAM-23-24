/*Escribe un programa que solicite números al usuario todo el tiempo. Cada número
debe ser un número par. En el momento que se introduzca un número que no sea
par se dejará de solicitar números y se imprimirá el siguiente resumen. También el
programa termina y se visualiza el resumen cuando se llega a 6 números pares.
● Total de números pares introducidos. Ten en cuenta que no siempre serán 6,
es posible que el usuario introduzca un número impar y se termine antes.
● Total de números pares negativos.
● Cantidad de números que también son divisibles entre 4.
● La suma de todos los números pares menores que cero.
No puedes utilizar arrays para resolver el problema.
No sabes la cantidad de números que va a introducir el usuario.
Puedes utilizar funciones si quieres, da igual. No lo tengo en cuenta*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea1_E5
{
    class Program
    {
        static void Main(string[] args)
        {
            int par = 0, parN = 0, parCuatro = 0, suma = 0;
            Console.WriteLine("\nIndica 6 numeros pares.");

            do
            {
                Console.Write("> ");
                int n = int.Parse(Console.ReadLine());

                if (n % 2 == 0)
                {
                    par++;

                    if (n < 0)
                    {
                        parN++;
                        suma += n;
                    }
                    if (n % 4 == 0)
                    {
                        parCuatro++;
                    }
                }
                else
                {
                    par = 6;
                }

            } while (par < 6);

            Console.WriteLine("\nPares: {0}", par);
            Console.WriteLine("Pares entre 4: {0}", parCuatro);
            Console.WriteLine("Pares negativos: {0}", parN);
            Console.WriteLine("Suma pares negativos: {0}", suma);
        }
    }
}
