#include <stdio.h>

void main()
{
    int a = 5;
    int *b;
    int *c;

    b = &a;  //Puntero que apunta a variable y guarda direccion y valor.
    c = b;   // Puntero que apunta a otro puntero y seguarda lo que guarda.

    printf("%i - %i - %i", a, *b, *c); //5 - 5 - 5
}