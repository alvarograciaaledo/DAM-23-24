#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{

    char palabra1[40];
    char palabra2[40];

    printf("\nINTRODUCE UNA PALABRA > ");
    fflush(stdin);
    gets(palabra1);

    strcpy(palabra2, palabra1);

    printf("\nPALABRA 2: %s", palabra2);
}