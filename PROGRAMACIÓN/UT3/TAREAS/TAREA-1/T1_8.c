#include <stdio.h>

void main()
{

    char p;
    int n1, n2;

    printf("-------------- MENU ------------");
    printf("\nSUMA)                          +");
    printf("\nRESTA)                         -");
    printf("\nMULTIPLICACION)                *");
    printf("\nDIVISION)                      /");
    printf("\nSALIR)                         )\n");
    printf("\n(Pulse el signo que corresponde)");
    printf("\nOPCION: ");
    scanf("%c", &p);

    switch (p)
    {
    case '+':
        printf("Dame dos valores.\n");
        printf("\nValor 1 --> ");
        scanf("%i", &n1);
        printf("\nValor 2 --> ");
        scanf("%i", &n2);

        int suma = n1 + n2;
        printf("\n> Resultado --> %i", suma);

        break;

    case '-':
        printf("Dame dos valores.\n");
        printf("\nValor 1 --> ");
        scanf("%i", &n1);
        printf("\nValor 2 --> ");
        scanf("%i", &n2);

        int resta = n1 - n2;
        printf("\n> Resultado --> %i", resta);

        break;
    case '*':
        printf("Dame dos valores.\n");
        printf("\nValor 1 --> ");
        scanf("%i", &n1);
        printf("\nValor 2 --> ");
        scanf("%i", &n2);

        int mult = n1 * n2;
        printf("\n> Resultado --> %i", mult);

        break;
    case '/':

        do
        {
            printf("Dame dos valores.\n");
            printf("\nValor 1 --> ");
            scanf("%i", &n1);
            printf("\nValor 2 --> ");
            scanf("%i", &n2);

            if (n1 < n2)
            {
                printf("\nERROR - Datos nol utiles.");
            }
            else
            {
                int div = n1 / n2;
                printf("\n> Resultado --> %i", div);
            }
            
        } while (n2 > n1);
    
        break;
    
    default:
        printf("\nSALIENDO...");
        break;
    }
}