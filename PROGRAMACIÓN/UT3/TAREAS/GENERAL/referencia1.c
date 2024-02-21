/*Ejercicio: Dado el siguiente ejercicio. Modifica la función calcularSuperficie para que
no devuelva nada e incluya un parámetro superficie pasándolo por referencia.
#include <stdio.h>

int calcularSuperficie(int lado)
{
    int superficie = lado * lado;
    return superficie;
}

void main()
{
    int valor;
    int sup;
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &valor);
    sup = calcularSuperficie(valor);
    printf("La superficie del cuadrado es %i", sup);
}
*/

#include <stdio.h>

int calcularSuperficie(int lado, int *superficie)
{
    *superficie = lado * lado;
}

void main()
{
    int valor;
    int sup;
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &valor);
    calcularSuperficie(valor, &sup);
    printf("La superficie del cuadrado es %i", sup);
}