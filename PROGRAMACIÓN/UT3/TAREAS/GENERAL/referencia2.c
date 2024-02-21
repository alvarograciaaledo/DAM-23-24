/*Una función puede recibir como parámetros arrays. Si modificamos el parámetro de
tipo array dentro de la función se modifica la variable definida en la función main o
donde se haya definido.*/

#include <stdio.h>

void inicializar(int vec[5])
{
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("\nIngrese elemento: ");
        scanf("%i", &vec[i]);
    } 
}

void main ()
{
    int vector[5];
    inicializar(vector);
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", vector[i]);
    }
}