#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Solicita a un usuario su nombre y apellidos. Guarda en una tercera cadena el
nombre completo. Deberás concatenar el nombre y el apellido añadiendo un espacio
en medio. Utiliza la función strcat de string.h.*/

struct DATOS
{
    char nombre[150];
    char apellidos[150];
};

int Npersonas;

void main()
{

    printf("\nCUANTAS PERSONAS VAS A ANADIR?");
    printf("\n> ");
    scanf("%i", &Npersonas);

    struct DATOS personas[Npersonas];
    char NombreCompleto[Npersonas][250];

    printf("\n--- DATOS ---");
    for (int i = 0; i < Npersonas; i++)
    {
        printf("\nPERSONA %i.", i + 1);
        printf("\nNOMBRE: ");
        fflush(stdin);
        gets(personas[i].nombre);
                
        printf("\nAPELLIDOS: ");
        fflush(stdin);
        gets(personas[i].apellidos);

        strcat(personas[i].nombre, " ");
        strcpy(NombreCompleto[i], personas[i].nombre);

        strcat(personas[i].nombre, personas[i].apellidos);
        strcpy(NombreCompleto[i], personas[i].nombre);

        printf("\nNOMBRE COMPLETO: %s", NombreCompleto[i]);
    }
}