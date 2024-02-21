/*Dada la siguiente estructura
Crea un programa que solicite los datos de dos productos, tanto su precio como el
descuento. El valor del precioDescuento lo tendrás que calcular tú y devolver cuál es
el producto con mayor descuento. Para ello vas a utilizar las siguientes funciones:
a. LeerProducto(): No tiene parámetros y devuelve una estructura de tipo
producto. La función crea una estructura producto con los datos de nombre,
precio y descuento y devuelve la estructura de producto. Esta función es
llamada dos veces desde el main.
b. CalculaDescuento(): Tiene como parámetros una estructura de producto y no
devuelve nada. La función dada la estructura de producto calcula el valor de
precioDescuento a partir del precio y el descuento. Esta función es llamada
dos veces desde el main.
c. ImprimeProducto(): Tiene como parámetros una estructura y no devuelve
nada. Esta función imprime todos los campos de la estructura producto. Esta
función es llamada dos veces desde el main.
d. DevuelveMayor(): Una función a la que le pasamos dos estructuras y no
devuelve nada. Imprime por pantalla todos los campos de la estructura que
tiene mayor precio con descuento.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct producto
{
    char nombre[50];
    float precio;
    int descuento;
    float precioDescuento;
};

void leeProducto()
{
    struct producto prod;
    printf("\n--- PRODUCTO ---");
    printf("\nNOMBRE: ");
    fflush(stdin);
    gets(prod.nombre);
    printf("\nPRECIO: ");
    fflush(stdin);
    scanf("%f", &prod.precio);
    printf("\nDESCUENTO: ");
    fflush(stdin);
    scanf("%i", prod.descuento);

    return prod;
}

void calculaDescuento(struct producto p)
{
    float calcu = (p.precio * p.descuento)/100;
    p.precioDescuento = p.precio - calcu;

}

void imprimeProducto(struct producto p)
{
    printf("\n--- PRODUCTO ---");
    printf("\nNOMBRE: %s", p.nombre);
    printf("\nPRECIO: %0.2lf", p.precio);
    printf("\nDESCUENTO: %i", p.descuento);
    printf("\nPRECIO CON DESCUENTO: %i", p.precioDescuento);

}

void devuelveMayor(struct producto p1, struct producto p2)
{
    if (p1.precioDescuento > p2.precioDescuento)
    {
        printf("\n--- PRODUCTO MAYOR ---");
        printf("\nNOMBRE: %s", p1.nombre);
        printf("\nPRECIO: %0.2lf", p1.precio);
        printf("\nDESCUENTO: %i", p1.descuento);
        printf("\nPRECIO CON DESCUENTO: %i", p1.precioDescuento);
    }
    else if (p1.precioDescuento < p2.precioDescuento)
    {
        printf("\n--- PRODUCTO MAYOR ---");
        printf("\nNOMBRE: %s", p2.nombre);
        printf("\nPRECIO: %0.2lf", p2.precio);
        printf("\nDESCUENTO: %i", p2.descuento);
        printf("\nPRECIO CON DESCUENTO: %i", p2.precioDescuento);
    }
    else{printf("\nTIENEN EL MISMO PRECIO DE DESCUENTO.");}
}

void main()
{

    struct producto result1;
    struct producto result2;
    leeProducto(result1);
    calculaDescuento(result1);
    imprimeProducto(result1);

    leeProducto(result2);
    calculaDescuento(result2);
    imprimeProducto(result2);
    devuelveMayor(result1, result2);
    
}