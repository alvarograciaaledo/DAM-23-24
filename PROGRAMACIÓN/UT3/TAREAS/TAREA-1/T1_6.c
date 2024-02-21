#include <stdio.h>

void main()
{

    int a, b, c;

    printf("Indica 3 valores.\n");
    printf("\nValor 1 --> ");
    scanf("%i", &a);
    printf("\nValor 2 --> ");
    scanf("%i", &b);
    printf("\nValor 3 --> ");
    scanf("%i", &c);

    if (a < 10 || b < 10 || c < 10)
    {
        printf("Hay un valor que es menor que 10.");
    }
    else
    {
        printf("Ningun valor es menor de 10");
    }

    return 0;
}