#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Guarda en un array 10 palabras de 30 caracteres máximo. Imprime las palabras que
tienen una longitud menor. Utiliza la función strlen de string.h.*/

char palabras[10][30];
int longitudMinima = 30;

void main()
{
    printf("\nINTRODUCE 10 PALABRAS.");
    for (int i = 0; i < 10; i++)
    {
        printf("\nPALABRA %i:", i + 1);
        fflush(stdin);
        gets(palabras[i]);
    }

    for (int i = 0; i < 10; i++) {
        int longitud = strlen(palabras[i]);
        if (longitud < longitudMinima) {
            longitudMinima = longitud;
        }
    }

    printf("\nPALABRAS MAS CORTAS.");
    for (int i = 0; i < 10; i++) {
        if (strlen(palabras[i]) == longitudMinima) 
        {
            printf("\n> %s", palabras[i]);
        }
    }
    
}