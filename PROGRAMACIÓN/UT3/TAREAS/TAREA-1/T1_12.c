#include <stdio.h>

void main()
{

    int n, sum = 0;

    printf("SUMATORIO DE 10 NUM");

    for (int i = 1; i <= 10; i++)
    {
        printf("\nVALOR %i: ", i);
        scanf("%i", &n);

        sum = sum + n;
    }

    printf("\nSUMATORIO: %i", sum);
}