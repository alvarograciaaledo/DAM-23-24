/*Crea un programa que dado un mes del año en número, te devuelve el mes en texto
y el número de días. Informa al usuario si ha introducido un número que no esté
entre 1 y 12. Utiliza un switch. Por ejemplo, dado el 1 devuelve Enero y 31.*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea1_E2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Indica un mes en numero (1 - 12)");
            Console.Write("> ");

            int mes = int.Parse(Console.ReadLine());

            switch (mes)
            {
                case 1:
                    Console.WriteLine("ENERO tiene 31 dias.");
                    break;
                case 2:
                    Console.WriteLine("FEBRERO tiene 28 o 29 dias.");
                    break;
                case 3:
                    Console.WriteLine("MARZO tiene 31 dias.");
                    break;
                case 4:
                    Console.WriteLine("ABRIL tiene 30 dias.");
                    break;
                case 5:
                    Console.WriteLine("MAYO tiene 31 dias.");
                    break;
                case 6:
                    Console.WriteLine("JUNIO tiene 30 dias.");
                    break;
                case 7:
                    Console.WriteLine("JULIO tiene 31 dias.");
                    break;
                case 8:
                    Console.WriteLine("AGOSTO tiene 31 dias.");
                    break;
                case 9:
                    Console.WriteLine("SEPTIEMBRE tiene 30 dias.");
                    break;
                case 10:
                    Console.WriteLine("OCTUBRE tiene 31 dias.");
                    break;
                case 11:
                    Console.WriteLine("NOVIEMBRE tiene 30 dias.");
                    break;
                case 12:
                    Console.WriteLine("DICIEMBBRE tiene 31 dias.");
                    break;
                default:
                    Console.WriteLine("ERROR - Numero del mes no valido.");
                    break;
            }
        }
    }
}
