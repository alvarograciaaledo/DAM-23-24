/*Escribe un programa que reciba dos números con decimales introducidos por el
usuario e indique cuál de los dos es mayor. Es posible que los dos números sean
iguales.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void comparaNum(float a, float b, float max, float min)
{
    if (a > b)
    {
        max = a;
        min = b;
        printf("\nEl numero mayor es %0.2lf y el menor %0.2lf", max, min);
    }
    else if (b > a)
    {
        max = b;
        min = a;
        printf("\nEl numero mayor es %0.2lf y el menor %0.2lf", max, min);
    }
    else
    {
        printf("\nSon el mismo numero -> %f", a);
    }
}

void main()
{
    float a, b, may, men; 
    printf("\n----------- NUM MAYOR -----------\n");
    printf("> Dame 2 numeros para ver cual es el mayor.\n");
    printf("> ");
    scanf("%f", &a);
    printf("> ");
    scanf("%f", &b);

    comparaNum(a, b, may, men);
}