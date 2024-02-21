#include <stdio.h>

void main()
{
    char resp;
    float saldo, sum = 0;

    do
    {
        printf("\n-*-*-*-* BANKIA *-*-*-*-");
        printf("\nINTRODUZCA EL SUELDO.\n");
        printf("\n> ");
        scanf("%f", &saldo);

        if (saldo == 0)
        {
            printf("\nSU SALDO ES NULO.");
        }
        else if (saldo < 0)
        {
            printf("\nUSTED TIENE DEUDAS.");
            sum = sum + saldo;
        }
        else
        {
            printf("\nACREEDOR - TIENES DINERO DE SOBRA.");
        }

        printf("\nQUIERE CONTINUAR --> PULSE S");
        printf("\n> ");
        fflush(stdin);
        scanf("%c", &resp);

    } while (resp == 's' || resp == 'S');

    printf("\nTOTAL DE DEUDAS: %g", sum);
    printf("\nADIOS.");
}