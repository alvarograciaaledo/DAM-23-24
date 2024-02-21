#include <stdio.h>

void main()
{

    float n1, n2;

    printf("\nIndica los dos valores y te dire el mayor.\n");
    printf("\nValor 1: ");
    scanf("%g", &n1);
    printf("Valor 2: ");
    scanf("%g", &n2);

    if (n1 > n2)
    {
        printf("El numero %g es mayor que %g", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("El numero %g es mayor que %g", n2, n1);
    }
    else
    {
        printf("Son iguales.");
    }

    return 0;

}