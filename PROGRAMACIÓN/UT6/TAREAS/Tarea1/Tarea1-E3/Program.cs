/*Vas a programar un programa que calcule la nota de un alumno en el módulo de
Programación. Para el cálculo de la nota del módulo se utilizará la siguiente fórmula:
nota_final = (nota_prácticas*0,3) + (nota_examen*0,7) + (positivos*0,1)
En primer lugar, el programa pedirá el número de alumnos a los que queremos
calcularles la nota e irá pidiendo para cada uno de ellos la nota de prácticas, la nota
del examen y el número de positivos ganados en clase.
Una vez finalices la introducción de datos muestra:
● Nota media de las prácticas de todos los alumnos (media aritmética).
● Nota media final de todos los alumnos (media aritmética de las notas).
● El número de alumnos con nota de evaluación suspenso (<5.0) o
aprobado(>=5.0).
Las notas pueden tener decimales.
Comprueba además que las notas están entre 0 y 10, en el momento que una nota
no tenga el valor correcto no le preguntes por el resto.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea1_E3
{
    class Program
    {
        static void Main(string[] args)
        {
            float nota_final = 0, nota_practicas = 0, nota_examen = 0, mediaIndi = 0;
            float contaPracticas = 0;
            int positivos = 0, nAlumnos, aprobado = 0, suspenso = 0;

            do
            {
                Console.WriteLine("Cuantos alumnos hay en clase?");
                Console.Write("> ");
                nAlumnos = int.Parse(Console.ReadLine());

                if (nAlumnos <= 0)
                {
                    Console.WriteLine("\n!!! ERROR - Numero de alumnos invalido !!!\n");
                }
            } while (nAlumnos <= 0);

            for (int i = 0; i < nAlumnos; i++)
            {
                Console.WriteLine("\nALUMNO {0}", i + 1);
                Console.Write("> Nota de los examenes: ");
                nota_examen = float.Parse(Console.ReadLine());

                if (nota_examen >= 0 && nota_examen <= 10)
                {
                    Console.Write("> Nota de las practicas: ");
                    nota_practicas = float.Parse(Console.ReadLine());

                    if (nota_practicas >= 0 && nota_practicas <= 10)
                    {
                        contaPracticas = contaPracticas + nota_practicas;

                        Console.Write("> Numero de positivos: ");
                        positivos = int.Parse(Console.ReadLine());

                        if (positivos < 0)
                        {
                            Console.WriteLine("\n!!! ERROR - Numero no valido !!!\n");
                            positivos = 0;
                        }                       
                    }
                    else
                    {
                        Console.WriteLine("\n!!! ERROR - Nota no valida !!!\n");
                        nota_practicas = 0;
                    }
                }
                else
                {
                    Console.WriteLine("\n!!! ERROR - Nota no valida !!!\n");
                    nota_examen = 0;
                }

                mediaIndi = (float)(nota_examen * 0.7) + (float)(nota_practicas * 0.3) + (float)(positivos * 0.1);
                Console.WriteLine("\nMedia Individual: {0}", mediaIndi);

                nota_final = nota_final + mediaIndi;

                if (mediaIndi < 5.0)
                {
                    suspenso++;
                }
                else { aprobado++; }
            }

            Console.WriteLine("\nRESUMEN");
            Console.WriteLine("Media de clase: {0}", nota_final / nAlumnos);
            Console.WriteLine("Media de las practicas: {0}",  contaPracticas / nAlumnos);
            Console.WriteLine("Aprobados: {0}", aprobado);
            Console.WriteLine("Suspensos: {0}", suspenso);

        }
    }
}
