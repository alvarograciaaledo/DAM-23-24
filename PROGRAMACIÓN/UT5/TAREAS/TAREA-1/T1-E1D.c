#include <stdio.h>

void main()
{
    int vec[5] = {10, 20, 30, 40, 50};
    int *pe;
    pe = vec;

    printf("%i\n", *pe); //Imprime a la primera posicion del vector que vale 10
    pe++;                //Avanza 1 en el vector usando el puntero
    printf("%i\n", *pe); //Imprime la segunda posicion del vector que vale 20
    pe++;                //Avanza 1 en el vector usando el puntero
    printf("%i\n", *pe); //Imprime la tercera posicion del vector que vale 30
    pe--;                //Retrocede 1 en el vector usando el puntero
    printf("%i\n", *pe); //Imprime la segunda posicion del vector que vale 20
}