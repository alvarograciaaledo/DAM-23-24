#include <stdio.h>

void main()
{

    int VALORES[5] = {2, -1, 0, 1, -2};

    for (int i = 0; i < 5; i++)
    {
        if (VALORES[i] < 0)
        {
            printf("\nPOSICION %i --> VALOR: %i", i, VALORES[i]);
        }   
    }
}