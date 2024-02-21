#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crea un array 3x3. Pide al usuario los valores del array, puede introducir valores
negativos. Imprime el array por pantalla una vez hayas introducido todos los valores.
Imprime por cada fila cuál es el valor absoluto mayor de cada fila*/

void main()
{
    int numeros[3][3];
    int maximo[3];
    

    for (int i = 0; i < 3; i++)
    {
        printf("\nINTRODUCE 5 NUM EN EL BLOQUE %i.", i+1);
        printf("\n--- BLOQUE %i ---", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("\nNUM %i: ", j+1);
            scanf("%i", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        maximo[i] = abs(numeros[i][0]);
        for (int j = 0; j < 3; j++)
        {
            int absolut = abs(numeros[i][j]);

            if (absolut > maximo[i])
            {
                maximo[i] = absolut;
            }
            
        }
    }

    printf("\nVALOR ABSOLUTO MAYOR.");
    for (int i = 0; i < 3; i++)
    {
        printf("\n--- BLOQUE %i ---", i+1);
        printf("\n> %i", maximo[i]);
    }
}