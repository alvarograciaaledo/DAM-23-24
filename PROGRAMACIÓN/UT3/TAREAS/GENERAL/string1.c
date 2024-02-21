#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{

    char palabra[50];

    printf("\nINTRODUCE UNA PALABRA > ");
    fflush(stdin);
    gets(palabra);

    int letras = strlen(palabra);

    printf("\nLA PALABRA '%s' TIENE %i LETRAS.", palabra, letras);
}