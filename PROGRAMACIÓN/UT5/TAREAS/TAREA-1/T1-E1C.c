#include <stdio.h>

void main()
{
    //VARIABLES
    float z1, z2;
    float *pf;

    pf = &z1;      //Apunta a z1
    *pf = 10.20;   //Le da valor a z1, por que le esta apuntando
    pf = &z2;      //Apunta a z2
    *pf = 20.90;   //Le da valor a z2 por que le apunta.

    printf("%0.2f - %0.2f", z1, z2); //Imprime el valor de z1 y z2
}