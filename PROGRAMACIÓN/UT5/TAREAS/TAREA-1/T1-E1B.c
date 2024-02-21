#include <stdio.h>

void main()
{
    //VARIABLES
    int f;
    int *pe;
    pe = &f;

    for (*pe = 1; *pe <= 10; *pe = *pe + 1) // Donde apinta vale 1; Hace bucle hasta 10; 
    {                                       // Donde apunta vale eso mas 1;
    
        printf("%i\n", f);          // Imprime del 1 hasta el 10.
    }
}