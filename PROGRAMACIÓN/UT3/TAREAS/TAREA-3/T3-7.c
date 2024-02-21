#include <stdio.h>
#define fila 10
#define colum 50

void main()
{

    char NOMBRES[fila][colum];

    for (int f = 0; f < fila; f++)
    {
        printf("Ingrese el nombre de la persona %d: ", f+1);
        fflush(stdin);
        gets(NOMBRES[f]);
    }

    int maximo = 0;
    
    printf("Nombres de personas con longitud mayor:\n");
    for (int f = 0; f < fila; f++) 
    {
        int longitud = 0;
        while (NOMBRES[f][longitud] != '\0') 
        {
            longitud++;
        }
        if (longitud > maximo) 
        {
            maximo = longitud;
        }
    }

    printf("\nPALABRAS MAS LARGAS.");
    for (int f = 0; f < fila; f++)
    {
        int longitud = 0;
        while (NOMBRES[f][longitud] != '\0') 
        {
            longitud++;
        }
        if (longitud == maximo) 
        {
            printf("\nPALABRA: %s", NOMBRES[f]);
        }
    }
    

}