#include <stdio.h>

void main(){

    int n, i;

    printf("Dime el divisor: ");
    scanf("%d", &n);

    for ( i = 1; i <= 20; i++)
    {

        if (i % n == 0)
        {
            printf("El numero %d es divisible entre %d.\n", i, n);
        }
        else
        {
            printf("El numero %d no es divisible entre %d.\n", i, n);

        }

    }

    printf("FIN.");
    return 0;
}