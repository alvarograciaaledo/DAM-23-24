/*Solicita al usuario un texto que deberás buscar si existe dentro del texto que te doy a
continuación. El usuario además debe indicar si busca coincidencia exacta de
mayúsculas y minúsculas o no. Devuelve el número de ocurrencias del texto
introducido. Si el usuario introduce espacios antes o después de la frase introducida
no los tendremos en cuenta (busca un método en la clase String que pueda ayudarte
para esto).*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea2_E4
{
    class Program
    {
        static void Main(string[] args)
        {
            int ocurrencias = 0;
            string palabra, resp;

            string txt = "La noche se avecina, ahora empieza mi guardia. " +
                "No terminará hasta el día de mi muerte.No tomaré esposa, " +
                "no poseeré tierras, no engendraré hijos.No llevaré corona, " +
                "no alcanzaré la gloria. Viviré y moriré en mi puesto. " +
                "Soy la espada en la oscuridad.Soy el vigilante del Muro." +
                "Soy el fuego que arde contra el frío, la luz que trae el amanecer, " +
                "el cuerno que despierta a los durmientes, el escudo que defiende " +
                "los reinos de los hombres.Entrego mi vida y mi honor a la Guardia de la Noche, " +
                "durante esta noche y todas las que estén por venir.";

            Console.WriteLine("\nIndica la palabra que quieres buscar.");
            Console.Write("> ");
            palabra = Console.ReadLine();

            int longitudPalabra = palabra.Length;//Auxiliar para guardar la longitud de la palabra.
            string palabraAux;//Palabra que guarda el trozo del texto y compara.


            Console.WriteLine("\nQuieres que la busqueda sea exacta? (s - n)");
            Console.Write("> ");
            resp = Console.ReadLine();


            if (resp.ToLower() == "n")
            {
                txt = txt.ToLower();//Ponemos todo el texto en minusculas.

                for (int i = 0; i < (txt.Length - longitudPalabra); i++)//Bucle que recorre todo el texto menos la longitus de la palabra para evitar la excepcion.
                {
                    palabraAux = txt.Substring(i, longitudPalabra);//Recorrecom el texto con la posicion y y vamos a coger el num de caracteres que tiene la palabra del user.
                    if (palabraAux == palabra)//Comparamos el resultado del substring(trozo del texto) y la palabra del user.
                    {
                        ocurrencias++;//Aumenta el contador.
                    }
                }

            }
            else if (resp.ToLower() == "s")
            {

            }
            else
            {
                Console.WriteLine("\nERROR - respuesta no valida. La busqueda no sera exacta.");
            }
        }
    }
}
