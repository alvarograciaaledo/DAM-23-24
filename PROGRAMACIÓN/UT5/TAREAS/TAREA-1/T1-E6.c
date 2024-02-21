#include <stdio.h>

void main()
{
    int y = 5; //y vale 5
    int z = 3; //z vale 3
    int *nptr; //Puntero
    int *mptr; //Puntero
    nptr = &y; //nptr apunta a y
    z = *nptr; //Z coge el valor de nptr, que es 5 por que apunta a Y
    *nptr = 7; //Donde apunta nptr vale 7
    mptr = nptr; //mptr copia los valores de nptr
    mptr = &z; //mptr apunta a z que vale 5
    *mptr = *nptr; //mptr copia la direccion de memoria
    y = (*nptr) + 1; //Vale lo que apunta nptr + 1

    printf("%i\n", y);
    printf("%i\n", z); 
    printf("%i\n", nptr);   
    printf("%i\n", *nptr); 
    printf("%i\n", mptr);   
    printf("%i\n", *mptr);  
}