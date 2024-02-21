#include <stdio.h>
#include <math.h>
#define PI 3.141592

float r, result = 0;

void main()
{

    printf("\nINDICA EL RADIO DE UN CIRCULO (cm): ");
    scanf("%f", &r);

    result = pow(r, 2) * PI;

    printf("\nREULTACO: %0.3lf cm", result);
}