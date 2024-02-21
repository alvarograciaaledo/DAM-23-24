#include <stdio.h>

void main()
{

    int numeros[10];

    printf("\nINDICA 10 VALORES.");
    for (int i = 0; i < 10; i++)
    {
        printf("\nVALOR %i: ", i+1);
        scanf("%i", &numeros[i]);
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado de menor a mayor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d - ", numeros[i]);
    }
    printf("\b\b  ");
}