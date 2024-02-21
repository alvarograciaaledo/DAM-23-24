#include <stdio.h>

void main()
{

    /*Solicitar al usuario los nombres de dos personas y sus edades. Mostrar el nombre
    de la persona que tiene mayor edad. Los nombres de las personas no superan los
    50 caracteres. Utiliza dos arrays para guardar los nombres de las personas.*/

    char nombre1[50], nombre2[50];
    int edad1, edad2;

    printf("\nDATOS PERSONA 1");
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(nombre1);
    printf("\nEDAD: ");
    scanf("%i", &edad1);

    printf("\nDATOS PERSONA 2");
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(nombre2);
    printf("\nEDAD: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
    {
        printf("\nDATOS PERSONAS MAYOR");
        printf("\nNOMBRE : %s", nombre1);
        printf("\nEDAD : %d", edad1);
    }
    else if (edad2 > edad1)
    {
        printf("\nDATOS PERSONAS MAYOR");
        printf("\nNOMBRE : %s", nombre2);
        printf("\nEDAD : %d", edad2);
    }
    else
    {
        printf("\nTIENEN LA MISMA EDAD");
        printf("\nNOMBRE 1: %s", nombre1);
        printf("\nEDAD 1: %d", edad1);
        printf("\nNOMBRE 2: %s", nombre2);
        printf("\nEDAD 2: %d", edad2);
    }
    


}