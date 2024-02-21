#include <stdio.h>

void main()
{

    char p;

    do{
        printf("Introduce un caracter: ");
        scanf("%c", &p);
        fflush(stdin);
    } while (p != 'x' && p != 'X');

    printf("SALIENDO...");
    return 0;
}