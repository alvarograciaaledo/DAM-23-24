#include <stdio.h>

void main()
{

    char NOMBRE[50];
    char APELLIDO1[50];
    char APELLIDO2[50];

    printf("\nIndica tu nombre: ");
    fflush(stdin);
    gets(NOMBRE);

    printf("\nIndica tu primer apellido: ");
    fflush(stdin);
    gets(APELLIDO1);

    printf("\nIndica tu segundo apellido: ");
    fflush(stdin);
    gets(APELLIDO2);

    printf("\nNOMBRE COMPLETO: %s %s %s", NOMBRE, APELLIDO1, APELLIDO2);
}