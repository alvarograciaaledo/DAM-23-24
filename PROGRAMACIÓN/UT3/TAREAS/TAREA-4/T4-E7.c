#include <stdio.h>

void main()
{

    int numeros[10] = {5, 10, 15, 20, 25, 30, 35 ,40 ,45, 50};
    int orden = 1;

    for (int i = 0; i < 9; i++)
    {
        if (numeros[i] > numeros[i + 1])
        {
            orden = 0;
        }
    }
    
    if (orden) 
    {
        printf("\nLos numeros estan ordenados de menor a mayor.\n");
    } 
    else 
    {
        printf("\nLos numeros estan ordenados de mayor a menor.\n");
    }

}