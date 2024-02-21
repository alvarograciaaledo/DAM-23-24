#include <stdio.h>
#define semana 7

void main()
{

    float TEMPERATURAS[semana];
    float media = 0;

    printf("\nIndica la temperatura.");
    for (int i = 0; i < semana; i++)
    {
        printf("\nDIA %i: ", i + 1);
        scanf("%f", &TEMPERATURAS[i]);
        media += TEMPERATURAS[i];
    }

    printf("\nMEDIA: %0.2f", media / semana);
}