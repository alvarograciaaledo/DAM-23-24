#include <stdio.h>
#define TAM 50

void main()
{

    /*Solicita al usuario una palabra. Vamos a crear un array de como máximo 50
    caracteres. Supondremos que la palabra está escrita en minúsculas y sin tildes o
    cualquier otro símbolo. Indica si la palabra empieza por vocal.*/

    char PALABRA[TAM];
    int i = 0;
    char inicial = 0;

    printf("\nIndica una palabra => ");
    fflush(stdin);
    gets(PALABRA);

    if (PALABRA[0] == 'a'||PALABRA[0] == 'e'||PALABRA[0] == 'i'||PALABRA[0] == 'o'||PALABRA[0] == 'u')
    {
        printf("\nLA PALABRA ES: %s", PALABRA);
        printf("\nEMPIEZA POR VOCAL: SI");
    }
    else
    {
        printf("\nLA PALABRA ES: %s", PALABRA);
        printf("\nEMPIEZA POR VOCAL: NO");
    }
}