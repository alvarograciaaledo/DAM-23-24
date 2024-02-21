/*Repite el último ejercicio de la tarea-6 pero ahora pasa por referencia las variables
media, máximo y mínimo que deberán estar declaradas en el main. Después de
llamar a la función imprime la media, el máximo y el mínimo.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que calcula el mayor, el menor y hace la media
void Calcu(int n1, int n2, int n3, int *max, int *min, float *media)
{
    if (n1 > n2 && n1 > n3) //Condicion 1.
    {
        *max = n1; //Asignamos el mayor.

        if (n2 > n3)
        {
            *min = n3;
        }
        else if (n3 > n2)
        {
            *min = n2;
        }
    }
    else if (n2 > n1 && n2 > n3) //Condicion 2.
    {
        *max = n2; //Asignamos el mayor.

        if (n1 > n3)
        {
            *min = n3;
        }
        else if (n3 > n1)
        {
            *min = n1;
        }
    }
        if (n3 > n2 && n3 > n1) //Condicion 3.
    {
        *max = n3; //Asignamos el mayor.

        if (n2 > n1)
        {
            *min = n1;
        }
        else if (n1 > n2)
        {
            *min = n2;
        }
    }

    *media = n1 + n2 + n3; //Sumamos los numeros para despues dividirlos y sacar el total.

}

void main()
{
    int num1, num2, num3; //Variables de los 2 numeros pedidos.
    int max, min;
    float media;

    //Pedimos los 2 valores al user.
    printf("\nIntroduce 3 numeros.");
    printf("\nNumero 1: ");
    scanf("%i", &num1);
    printf("\nNumero 2: ");
    scanf("%i", &num2);
    printf("\nNumero 3: ");
    scanf("%i", &num3);

    //Bucle para que los vuelva a preguntar mientras sean iguales.
    while (num1 == num2 || num1 == num3 || num3 == num2)
    {
        printf("\nERROR - VALORES IDENTICOS.\n"); //Mostramos el ERROR.

        //Volvemos a pedir los 2 valores.
        printf("\nIntroduce 2 numeros.");
        printf("\nNumero 1: ");
        scanf("%i", &num1);
        printf("\nNumero 2: ");
        scanf("%i", &num2);
        printf("\nNumero 3: ");
        scanf("%i", &num3);
    }

    Calcu(num1, num2, num3, &max, &min, &media); // Llamamos a la funcion para que muestre los resultados.

    printf("\nNumero mayor -> %i.", max); //Mostramos el mayor.
    printf("\nNumero menor -> %i.", min); //Mostramos el menor.
    printf("\nMedia -> %0.2lf", media/3); //Mostramos la media.
}