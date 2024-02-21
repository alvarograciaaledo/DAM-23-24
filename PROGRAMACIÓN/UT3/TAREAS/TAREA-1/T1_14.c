#include <stdio.h>

void main()
{

    int edad, mManana = 0, mTarde = 0, mNoche = 0, x = 1;

    for (int i = 0; i <= 1; i++)
    {
        printf("\nTURNO DE MANANA");
        while (x <= 5)
        {

            printf("\nEDAD %i: ", x);
            scanf("%i", &edad);

            if (edad > 0)
            {
                mManana = mManana + edad;
                x++;
            }
            else
            {
                printf("\nERROR - EDAD NO VALIDA.");
                printf("\nINTRODUCELA DE NUEVO: ");
            }
        }

        x = 1;
        printf("\nTURNO DE TARDE");
        while (x <= 6)
        {

            printf("\nEDAD %i: ", x);
            scanf("%i", &edad);

            if (edad > 0)
            {
                mTarde = mTarde + edad;
                x++;
            }
            else
            {
                printf("\nERROR - EDAD NO VALIDA.");
                printf("\nINTRODUCELA DE NUEVO: ");
            }
        }

        x = 1;
        printf("\nTURNO DE NOCHE");
        while (x <= 10)
        {

            printf("\nEDAD %i: ", x);
            scanf("%i", &edad);

            if (edad > 0)
            {
                mNoche = mNoche + edad;
                x++;
            }
            else
            {
                printf("\nERROR - EDAD NO VALIDA.");
                printf("\nINTRODUCELA DE NUEVO: ");
            }
        }
        i++;
    }

    printf("\n---- MEDIAS ----");
    printf("\nTurno de MANANA: %i", mManana / 5);
    printf("\nTurno de TARDE: %i", mTarde / 6 );
    printf("\nTurno de NOCHE: %i", mNoche / 10);
}