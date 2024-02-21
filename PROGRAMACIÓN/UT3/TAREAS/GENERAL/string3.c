#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{

    char palabra1[100];
    char palabra2[100];

    printf("\nINTRODUCE UNA FRASE > ");
    fflush(stdin);
    gets(palabra1);

    printf("\nINTRODUCE OTRA FRASE > ");
    fflush(stdin);
    gets(palabra2);

    strcmp(palabra1, palabra2);

    if (strcmp(palabra1, palabra2) == 0)
    {
        printf("\nSON LA MISMA PALABRA.");
    }
    else{printf("\nNO SON LA MISMA PALABRA, CADENA ENTERA: %s", strcat(palabra1, palabra2));}
}