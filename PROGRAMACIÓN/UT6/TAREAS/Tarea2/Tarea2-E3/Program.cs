/* Dado el siguiente texto que guardarás en un string debes contar el número de
consonantes, vocales a, vocales e, vocales i, vocales o, vocales u.
“La noche se avecina, ahora empieza mi guardia. No terminará hasta el día de mi
muerte. No tomaré esposa, no poseeré tierras, no engendraré hijos. No llevaré
corona, no alcanzaré la gloria. Viviré y moriré en mi puesto. Soy la espada en la
oscuridad. Soy el vigilante del Muro. Soy el fuego que arde contra el frío, la luz que
trae el amanecer, el cuerno que despierta a los durmientes, el escudo que defiende
los reinos de los hombres. Entrego mi vida y mi honor a la Guardia de la Noche,
durante esta noche y todas las que estén por venir.”*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea2_E3
{
    class Program
    {
        static void Main(string[] args)
        {
            string txt = "La noche se avecina, ahora empieza mi guardia. No terminará hasta el día de mi muerte. " +
            "No tomaré esposa, no poseeré tierras, no engendraré hijos. No llevaré corona, no alcanzaré la gloria. " +
            "Viviré y moriré en mi puesto. Soy la espada en la oscuridad. Soy el vigilante del Muro. Soy el fuego " +
            "que arde contra el frío, la luz que trae el amanecer, el cuerno que despierta a los durmientes, el " +
            "escudo que defiende los reinos de los hombres. Entrego mi vida y mi honor a la Guardia de la Noche, " +
            "durante esta noche y todas las que estén por venir.";

            int consonantes = 0;
            int vocalA = 0;
            int vocalE = 0;
            int vocalI = 0;
            int vocalO = 0;
            int vocalU = 0;

            string vocales = "aeiouáéíóúAEIOUÁÉÍÓÚ";

            foreach (char c in txt.ToLower())//Crea la variable char y comprueva valor a valor el string txt.
            {
                if (char.IsLetter(c))//Comprueba el caracter y verifica que es un char, en este caso si no es una letra no pasaria al siguiente if.
                {
                    if (vocales.Contains(c))//Contains, esta comparando la variable vocales con c para verificar que es una vocal y que esta en esa variable.
                    {
                        switch (c)
                        {
                            case 'a':
                                vocalA++;
                                break;
                            case 'e':
                                vocalE++;
                                break;
                            case 'i':
                                vocalI++;
                                break;
                            case 'o':
                                vocalO++;
                                break;
                            case 'u':
                                vocalU++;
                                break;
                            case 'á':
                                vocalA++;
                                break;
                            case 'é':
                                vocalE++;
                                break;
                            case 'í':
                                vocalI++;
                                break;
                            case 'ó':
                                vocalO++;
                                break;
                            case 'ú':
                                vocalU++;
                                break;
                        }
                    }
                    else
                    {
                        consonantes++;
                    }
                }
            }

            Console.WriteLine("Número de consonantes: " + consonantes);
            Console.WriteLine("Número de vocales 'a': " + vocalA);
            Console.WriteLine("Número de vocales 'e': " + vocalE);
            Console.WriteLine("Número de vocales 'i': " + vocalI);
            Console.WriteLine("Número de vocales 'o': " + vocalO);
            Console.WriteLine("Número de vocales 'u': " + vocalU);
        }
    }
}
