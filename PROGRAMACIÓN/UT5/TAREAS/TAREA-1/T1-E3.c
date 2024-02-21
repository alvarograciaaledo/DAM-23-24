#include <stdio.h>

void main()
{
    int i = 10;
    int *i_ptr;

    printf("Antes de apuntar\n");
    printf("%i\n", &i);    
    printf("%i\n", i_ptr);
    printf("%i\n", *i_ptr);

    i_ptr = &i;

    printf("\nDespues de apuntar\n");
    printf("%i\n", &i);      //La direccion de memoria es X
    printf("%i\n", i_ptr);   //El valor es la direccion de memoria de donde apunta
    printf("%i\n", *i_ptr);  //El valor que guarda la variabla
}