#include <stdio.h>

void main()
{

    /*Inicializa un array de enteros de tamaño 10 a la vez que los declaras. Recorrelo e
    indica por pantalla:
        a. Cuál es el número mayor y cuantas veces aparece.
        b. Cuál es el número menor y cuantas veces aparece.
        c. Cuál es la media de todos los números del array.*/

    int numeros[10] = {-5, 10, 3, -2, 7, -8, 15, 15, -1, 12};
    int mayor = numeros[0], menor = numeros[0], contMa = 0, contMe = 0;
    float media = 0;

    for (int i = 1; i < 10; i++)
    {
        if (numeros[i] > mayor)
        {
            contMa = 0;
            mayor = numeros[i];
            contMa++;
        }
        else if (numeros[i] == mayor)
        {
            contMa++;
        }

        if (numeros[i] < menor)
        {
            contMe = 0;
            menor = numeros[i];
            contMe++;
        }
        else if (numeros[i] == menor)
        {
            contMe++;
        }

        media += numeros[i];
    }
    
    printf("\nDATOS: ");
    printf("\nMAYOR: %i repetido %i veces.", mayor, contMa);
    printf("\nMENOR: %i repetido %i veces.", menor, contMe);
    printf("\nMEDIA: %0.2f", media / 10);

}