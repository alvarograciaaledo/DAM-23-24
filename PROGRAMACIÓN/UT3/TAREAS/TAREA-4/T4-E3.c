#include <stdio.h>
#define TAM 20

void main()
{

    /*Solicita una palabra que como máximo tendrá 20 caracteres. Cambia todas las
    vocales (a,e,i,o,u) por un guión (-) e imprímela por pantalla.*/

    char palabra[TAM];

    printf("\nESCRIBE UNA PALABRA: ");
    fflush(stdin);
    gets(palabra);

    printf("\nPALABRA: %s", palabra);

    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] == 'a'||palabra[i] == 'e'||palabra[i] == 'i'||palabra[i] == 'o'||palabra[i] == 'u')
        {
            palabra[i] = '-';
        }
        else if (palabra[i] == 'A'||palabra[i] == 'E'||palabra[i] == 'I'||palabra[i] == 'O'||palabra[i] == 'U')
        {
            palabra[i] = '-';
        }
        
    }

    printf("\nPALABRA: %s", palabra);
    

}