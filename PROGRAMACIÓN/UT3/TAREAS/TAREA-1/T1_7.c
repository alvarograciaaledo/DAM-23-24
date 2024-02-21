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
    
    if (a == b && a == c && b == c)
    {
        printf("\nLos tres valores son iguales.");
    }
    else
    {
        if (a == b)
        {
            printf("\nEl valor 1 y 2 son iguales.");
        }
        else if (a == c)
        {
            printf("\nEl valor 1 y 3 son iguales.");
        }
        else if (b == c)
        {
            printf("\nEl valor 2 y 3 son iguales.");
        }
    }
    
    if (a <= 10 && b <= 10 && c <= 10)
    {
        printf("\nLos tres valores son menores o iguales que 10.\n");
    }
    else
    {
        if (a <= 10)
        {
            printf("\nEl valor 1 es menor o igual que 10.");
        }
        else if (b <= 10)
        {
            printf("\nEl valor 2 es menor po igual que 10.");
        }
        else if (c <= 10)
        {
            printf("\nEl valor 3 es menor o igual que 10.");
        }
    }

    if (a > 10 && b > 10 && c > 10)
    {
        printf("\nLos tres valores son mayores que 10.");
    }

    printf("\nValores:");
    printf("\nValor 1 --> %i", a);
    printf("\nValor 2 --> %i", b);
    printf("\nValor 3 --> %i", c);

    return 0;

}