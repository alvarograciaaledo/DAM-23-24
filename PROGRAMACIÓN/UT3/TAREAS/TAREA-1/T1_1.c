#include <stdio.h>

void main()
{

    int n1, n2, sum = 0;

    printf("\nIndica los dos valores.\n");
    printf("\nValor 1: ");
    scanf("%i", &n1);
    printf("Valor 2: ");
    scanf("%i", &n2);

    if (n1 > 0 && n2 > 0)
    {
        sum = n1 + n2;
        printf("Valor de la suma: %i", sum);
    }
    else
    {
        printf("ERROR - SALIENDO...");
    }

    return 0;
}