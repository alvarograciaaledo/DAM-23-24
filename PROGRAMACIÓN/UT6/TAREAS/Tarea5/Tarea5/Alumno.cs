using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tarea5
{
    class Alumno
    {
        private string Nombre;
        private string Apellidos;
        private string DNI;
        private string Grado;
        private DateTime fechaNacimiento;

        public Alumno(string Nombre, string Apellidos, string DNI, string Grado, DateTime fechaNacimiento)
        {
            this.Nombre = Nombre;
            this.Apellidos = Apellidos;
            this.DNI = DNI;
            this.Grado = Grado;
            this.fechaNacimiento = fechaNacimiento;

            if (this.fechaNacimiento > DateTime.Now)
            {
                this.fechaNacimiento = DateTime.Now;
            }
            else
            {
                this.fechaNacimiento = fechaNacimiento;
            }

            if (compruebaDNI)
            {

            }
        }

        public Alumno(string Nombre, string Apellidos, string DNI)
        {
            this.Nombre = Nombre;
            this.Apellidos = Apellidos;
            this.DNI = DNI;
        }

        private bool compruebaDNI(string DNI)
        {

            if (DNI.Length != 10)
            {
                return false;
            }
            else
            {
                String[] parte = DNI.Split('-');

                if (parte.Length != 2)
                {
                    return false;
                }

                string nums = parte[0];
                string letra = parte[1].ToUpper();                

                if (nums.Length != 8)
                {
                    return false;
                }
                else
                {
                    int num = int.Parse(nums);
                    string letraValida = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

                    for (int i = 0; i < 8; i++)
                    {
                        if (nums == parte[i])
                        {

                        }
                    }
                }
            }
        }
    }
}