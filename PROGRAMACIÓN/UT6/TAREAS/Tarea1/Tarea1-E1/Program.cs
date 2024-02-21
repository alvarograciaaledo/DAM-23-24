/* Crea un programa que calcula la gravedad gravitatoria. La gravedad será una
constante con valor 9.8. Solicita al usuario un valor de tiempo que sea mayor que
cero, en caso de que no lo sea se informará al usuario. Calcula la velocidad con la
fórmula velocidad = gravedad * tiempo*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea1_E1
{
    class Program
    {
        static void Main(string[] args)
        {
            const float GV = 9.8f;
            float velocidad = 0f;

            Console.WriteLine("Dame una medida de tiempo (segundos).");
            Console.Write("> ");
            float time = float.Parse(Console.ReadLine());

            if (time <= 0)
            {
                Console.WriteLine("ERROR - Unidad de tiempo invalida.");
            }
            else
            {
                velocidad = GV * time;

            Console.WriteLine("La velocidad es de {0} km/h.", velocidad);
            }
        }
    }
}
