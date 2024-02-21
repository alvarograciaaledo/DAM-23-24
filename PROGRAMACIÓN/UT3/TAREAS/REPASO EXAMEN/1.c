/*Escribe un programa que reciba dos números enteros introducidos por el usuario y
efectúe la suma de ambos, pero únicamente si ambos números son positivos. La
suma debes mostrarla por pantalla. En caso de que alguno de los números sea
negativo, se debe mostrar un mensaje de error y finalizar el programa*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int sumar(int a, int b, int *total)
{
    *total = a + b;
    printf("\nRESULTADO: %i", *total);
}

void main()
{
    int a, b, result;

    printf("\n----------- SUMA -----------\n");
    printf("> Dame 2 numeros para sumar.\n");
    printf("> ");
    scanf("%i", &a);
    printf("> ");
    scanf("%i", &b);

    if (a < 0 || b < 0)
    {
        printf("\nERROR - Valor invalido.\n");
        printf("Saliendo...");
    }
    else
    {
        sumar(a, b, &result);
    }
}

