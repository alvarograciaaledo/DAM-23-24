#include <stdio.h>

void main()
{

    /*Repite el ejercicio anterior utilizando registros para guardar los datos de las
    personas. Cada registro tendrá el nombre y la edad.*/

    struct DATOS
    {
        char NOMBRE[50];
        int EDAD;
    }persona1, persona2;

    printf("\nDATOS PERSONA 1");
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(persona1.NOMBRE);
    printf("\nEDAD: ");
    scanf("%i", &persona1.EDAD);

    printf("\nDATOS PERSONA 2");
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(persona2.NOMBRE);
    printf("\nEDAD: ");
    scanf("%i", &persona2.EDAD);

    if (persona1.EDAD > persona2.EDAD)
    {
        printf("\nDATOS PERSONAS MAYOR");
        printf("\nNOMBRE : %s", persona1.NOMBRE);
        printf("\nEDAD : %d", persona1.EDAD);
    }
    else if (persona1.EDAD < persona2.EDAD)
    {
        printf("\nDATOS PERSONAS MAYOR");
        printf("\nNOMBRE : %s", persona2.NOMBRE);
        printf("\nEDAD : %d", persona2.EDAD);
    }
    else
    {
        printf("\nTIENEN LA MISMA EDAD");
        printf("\nNOMBRE : %s", persona1.NOMBRE);
        printf("\nEDAD : %d", persona1.EDAD);
        printf("\nNOMBRE : %s", persona2.NOMBRE);
        printf("\nEDAD : %d", persona2.EDAD);
    }

}