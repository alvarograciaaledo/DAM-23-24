#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/*Solicita al usuario dos números enteros. Crea una función que dados dos
números devuelva el mayor de ellos. Es el mismo ejercicio que hiciste con una
función de tipo void. Ahora no imprimas nada en la función, devuelve el número e
impríme el número en el main.*/

int max(int n1, int n2)
{
    int mayor;

    if(n1 > n2)
    {
        mayor = n1;
    }
    else if(n1 < n2)
    {
        mayor = n2;
    }
    else{mayor = n1;}
}

void main()
{
    int num1, num2;

    printf("\nDIME 2 NUMEROS Y TE DIGO EL MAYOR.");
    printf("\nNUMERO 1: ");
    scanf("%i", &num1);
    printf("\nNUMERO 2: ");
    scanf("%i", &num2);

    int Nmayor = max(num1, num2);
    printf("\nNUMERO MAYOR: %i", Nmayor);
}