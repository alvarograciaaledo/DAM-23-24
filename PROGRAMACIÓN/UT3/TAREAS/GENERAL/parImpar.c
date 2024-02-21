#include <stdio.h>

void main(){

    int n;

    printf("Indica el valor de un numero: ");
    scanf ("%d", &n);

    if(n%2 == 0)
    {
        printf("El numero es par.");
    }
    else
    {
        printf("El numero es impar.");
    }
    return 0;
}