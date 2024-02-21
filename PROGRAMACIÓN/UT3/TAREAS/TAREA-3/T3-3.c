#include <stdio.h>
#define TAM 100

void main()
{

    /*Solicita al usuario una frase. Vamos a crear un array de como máximo 100
    caracteres. Supondremos que la palabra está escrita en minúsculas y sin tildes o
    cualquier otro símbolo. Informa al usuario del número de caracteres a, e, i, o, u que
    tiene la frase.*/

    char PALABRA[TAM];
    int vocales = 0;

    printf("\nIndica una palabra => ");
    fflush(stdin);
    gets(PALABRA);

    for (int i = 0; PALABRA[i] != '\0'; i++)
    {
        if (PALABRA[i] == 'a'||PALABRA[i] == 'e'||PALABRA[i] == 'i'||PALABRA[i] == 'o'||PALABRA[i] == 'u')
        {
            vocales++;
        }
    }

    printf("\nTOTAL DE VOCALES: %i", vocales);
}