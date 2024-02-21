#include <stdio.h>

void main()
{

   int dosD[3][4];
   int NUM[3] = {0, 0, 0};

    printf("\nIngrese 4 numeros.");
   for (int i = 0; i < 3; i++)
   {
        printf("\nBLOQUE %i: ", i+1);
        for (int j = 0; j < 4; j++)
        {
            printf("\nNumeros %i: ", j+1);
            scanf("%i", &dosD[i][j]);
        }
   }

    for (int i = 0; i < 3; i++)
    {        
        for (int j = 0; j < 4; j++)
        {
            NUM[i] += dosD[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n VALOR BLOQUE %i: %i", i+1, NUM[i]);
    }
}