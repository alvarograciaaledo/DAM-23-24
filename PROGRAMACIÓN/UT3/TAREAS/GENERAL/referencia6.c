/*Ejercicio: Modifica el ejercicio que hiciste del array de struct producto. Crea una
función para imprimir los valores de una estructura producto. Esta función no
devuelve nada sólo imprime los valores de la estructura producto.*/
#include <stdio.h>

struct producto
{
    int codigo;
    char descripcion[40];
    float precio;
};

void inicializar(struct producto *prod)
{
    printf("\nIngrese el codigo del producto: ");
    scanf("%i", &prod->codigo);
    fflush(stdin);
    printf("\nIngrese la descripcion: ");
    gets(prod->descripcion);
    fflush(stdin);
    printf("\nIngrese el precio del producto: ");
    scanf("%f", &prod->precio);
    fflush(stdin);
}

void imprimeStructProducto(struct producto p, int i){
    printf("\n--- Producto %i --- ", i+1);
        printf("\nCODIGO: %i", p.codigo);
        printf("\nDESCRIPCION: %s", p.descripcion);
        printf("\nPRECIO: %0.2lf$\n", p.precio);       
}

void main()
{
    struct producto productos[3];
    for (int i = 0; i < 3; i++)
    {
        inicializar(&productos[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        imprimeStructProducto(productos[i],i);
    }
}