#include <stdio.h>

void main()
{
    int a = 10;         //Variable
    int *aPuntero; //Puntero para int.
    aPuntero = &a;

    float b = 10.2;
    float *bPuntero;
    bPuntero = &b;

    char c = 'X';
    char *cPuntero;
    cPuntero = &c;

    printf("\nD. de memoria de la variable: %i\n", &a);
    printf("\nValor de donde apunta: %i\n", aPuntero);
    printf("\nContenido variable: %i\n", *aPuntero);
}