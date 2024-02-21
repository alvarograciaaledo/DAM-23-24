#include <stdio.h>
#define TAM 4

void main()
{

    /* Realizar un programa que pida la carga de dos arrays de enteros de 4 elementos.
    Obtener la suma de los dos arrays, dicho resultado guardarlo en un tercer array del
    mismo tamaño que después imprimirás por pantalla.*/

    int A[TAM];
    int B[TAM];
    int SUMA[TAM];

    printf("\nIngrese 4 numeros.");

    for (int i = 0; i < TAM; i++)
    {
        printf("\nNumero %i: ", i+1);
        scanf("%i", &A[i]);
    }
    
    printf("\nIngrese 4 numeros de nuevo.");

    for (int i = 0; i < TAM; i++)
    {
        printf("\nNumero %i: ", i+1);
        scanf("%i", &B[i]);
    }

    for (int i = 0; i < TAM; i++)
    {        
        SUMA[i] = A[i] + B[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\n VALOR BLOQUE %i: %i", i+1, SUMA[i]);
    }

}