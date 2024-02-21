#include <stdio.h>
#define TAM 50

void main()
{

    //Solicita al usuario una palabra. Vamos a crear un array de como máximo 50
    //caracteres. Imprime por pantalla la longitud de la palabra introducida.

    char PALABRA[TAM];
    int i = 0, letras = 0;

    printf("\nIndica una palabra => ");
    fflush(stdin);
    gets(PALABRA);

    while (PALABRA[i] != '\0')
    {
        letras++;
        i++;
    }
    

    printf("\nLA PALABRA ES: %s", PALABRA);
    printf("\nNUMERO DE LETRAS: %i", letras);
}