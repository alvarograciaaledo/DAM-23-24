#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Crea una aplicación calculadora. Con suma, resta y raíz cuadrada. Muestra
al usuario un menú con las opciones del programa: 1.Sumar, 2.Restar, 3. Raíz
cuadrada, 4. Salir. El programa no termina hasta que el usuario selecciona la opción
4. Para mostrar el menú utiliza una función llamada muestraMenu().*/

void imprimeMayor(int n1, int n2)
{
    if (n1 > n2)
    {
        printf("\nEl %i es mayor que el %i.", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("\nEl %i es menor que el %i.", n1, n2);
    }
    else
    {
        printf("\nSON EL MISMO NUMERO.");
    }
}

void main()
{
    int num1, num2;

    printf("\nINTRODUCE 2 VALORES.");
    printf("\nVALOS 1: ");
    scanf("%i", &num1);
    printf("\nVALOS 2: ");
    scanf("%i", &num2);

    imprimeMayor(num1, num2);
}