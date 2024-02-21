#include<stdio.h>

void main()
{

    int NUMEROS[] = {2, 4, 10, 9, 1};
    int userNUM;
    int CANTIDAD = sizeof NUMEROS / sizeof(int);
    
    enum {FALSO, VERDADERO} ESTADO;
    ESTADO = FALSO;
   
    do
    {
        printf("\nINDICA UN NUMERO (0 - 10): ");
        scanf("%i", &userNUM);

    } while (userNUM < 0 || userNUM > 10);
    
    for (int i = 0; i < CANTIDAD; i++)
    {
        if (userNUM == NUMEROS[i])
        {
            ESTADO = 1;
            break;
        }
        else
        {
            ESTADO = 0;
        }
    }

    if (ESTADO)
    {
        printf("\nCOINCIDE - ESE NUMERO ESTA EN NUESTRA LISTA.");
    }
    else
    {
        printf("\nNO COINCIDE NINGUN NUMERO.");
    }

    printf("\nTAMANO: %i", CANTIDAD);
}