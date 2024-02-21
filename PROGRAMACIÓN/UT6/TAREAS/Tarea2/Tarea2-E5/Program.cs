/*Informa al usuario de si hoy hay sorteo de La Primitiva o no y en caso negativo, le
informe de la fecha del próximo sorteo. Los días de sorteo son los lunes, jueves y
sábado.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea2_E5
{
    class Program
    {
        static void Main()
        {
            DateTime today = DateTime.Today;
            DayOfWeek dayOfWeek = today.DayOfWeek;

            if (dayOfWeek == DayOfWeek.Monday || dayOfWeek == DayOfWeek.Thursday || dayOfWeek == DayOfWeek.Saturday)
            {
                Console.WriteLine("Hoy dia " +DateTime.Today.ToString("d")+ "hay sorteo de La Primitiva.");
            }
            else
            {
                DayOfWeek diaSorteo = ProximoSorteo(dayOfWeek);
                Console.WriteLine($"Hoy no hay sorteo de La Primitiva. El próximo sorteo será el {diaSorteo.ToString("d")}.");
            }
        }

        static DayOfWeek ProximoSorteo(DayOfWeek currentDay)
        {
            if (currentDay == DayOfWeek.Saturday)
            {
                return DayOfWeek.Monday;
            }
            else if (currentDay == DayOfWeek.Monday)
            {
                return DayOfWeek.Thursday;
            }
            else
            {
                return DayOfWeek.Saturday;
            }
        }
    }
}
