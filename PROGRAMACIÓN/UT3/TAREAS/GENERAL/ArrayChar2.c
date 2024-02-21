#include <stdio.h>
#define TAM 1000

void main()
{

    char PALABRA[TAM];
    int letras = 0, i = 0;

    printf("\nIndica tu nombre: ");
    fflush(stdin);
    gets(PALABRA);

    while (PALABRA[i] != '\0')
    {
        letras++;
        i++;
    }

    printf("\nPALABRA: %s", PALABRA);
    printf("\nNUMERO DE LETRAS: %i", letras);
} 