#include <stdio.h>
#define TAM 10

void main()
{

    struct DATOS
    {
        char NOMBRE[50];
        int EDAD;
    };

    struct DATOS personas[TAM];
    int edadUser;

    printf("\nDIME LA EDAD LIMITE: ");
    scanf("%i", &edadUser);

    for (int i = 0; i < TAM; i++)
    {
        printf("\nDATOS PERSONA %i.", i + 1);
        printf("\nNOMBRE: ");
        fflush(stdin);
        gets(personas[i].NOMBRE);
        printf("\nEDAD: ");
        scanf("%i", &personas[i].EDAD);
    }

    printf("\nNOMBRES CON EDAD USER.");
    for (int i = 0; i < TAM; i++)
    {
        if (personas[i].EDAD >= edadUser)
        {
            printf("\n> %s", personas[i].NOMBRE);
        }
    }
}