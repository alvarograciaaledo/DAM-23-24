/*Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente
información: cantidad total de preguntas que se le realizaron y la cantidad de
preguntas que contestó correctamente. Se pide confeccionar un programa que
ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de
respuestas correctas que ha obtenido, y sabiendo que:
a. Nivel máximo: Porcentaje>=90%.
b. Nivel medio: Porcentaje>=75% y <90%.
c. Nivel regular: Porcentaje>=50% y <75%.
d. Fuera de nivel: Porcentaje<50%*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void calcuPorcentaje(int p, int a)
{
    float porcentaje;
    porcentaje = (float) (a / p) * 100;

    if (porcentaje >= 90)
    {
        printf("\nNIVEL MAXIMO.");
    }
    else if (porcentaje >= 75 && porcentaje < 90)
    {
        printf("\nNIVEL MEDIO.");
    }
    else if (porcentaje >= 50 && porcentaje < 75)
    {
        printf("\nNIVEL REGULAR.");
    }
    else if (porcentaje < 50)
    {
        printf("\nFUERA DE NIVEL.");
    }
    else
    {
        printf("\nERROR. Saliendo...");
    }
}

void main()
{
    int preguntas, aciertos;
    float porcentaje;

    printf("\n--- PORCENTAJE DE IQ ---\n");
    printf("> Cuantas preguntas tenia el examen.\n");
    printf("> ");
    scanf("%i", &preguntas);
    printf("> Cuantas preguntas has tenido bien.\n");
    printf("> ");
    scanf("%i", &aciertos);
    calcuPorcentaje(preguntas, aciertos);


}