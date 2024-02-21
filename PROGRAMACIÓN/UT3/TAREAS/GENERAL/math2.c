#include <stdio.h>
#include <math.h>


float r;

void main()
{

    printf("\nINDICA UN NUMERO DECIMAL: ");
    scanf("%f", &r);


    printf("\nREDONDEO ALZA: %0.2lf", ceil(r));
    printf("\nREDONDEO BAJA: %0.2lf", floor(r));
}