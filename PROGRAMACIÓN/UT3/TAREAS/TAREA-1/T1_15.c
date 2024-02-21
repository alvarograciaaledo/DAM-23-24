#include <stdio.h>

void main()
{

    int n, sum = 0;

    printf("\n---- SUMATORIO ----");

    do
    {
        printf("\nVALOR: ");
        scanf("%i", &n);

        if (n != 9999)
        {
            sum = sum + n;
        }
        else
        {
            printf("\nFIN");
        }
    
    } while (n != 9999);

    printf("\nTOTAL: %i", sum);
}