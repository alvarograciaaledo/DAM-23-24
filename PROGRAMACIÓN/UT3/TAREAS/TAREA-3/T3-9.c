#include <stdio.h>

void main()
{

    /*Declarar un registro/estructura que permita almacenar el código, descripción y
    precio de un producto. Define dos variables de tipo producto, solicita los datos al
    usuario e imprime por pantalla el producto con mayor precio.*/

    struct DATOS
    {
        int CODIGO;
        char DESCRIPCION[200];
        float PRECIO;
    }producto1, producto2;
    
    printf("\nPRODUCTO 1.");
    printf("\nCODIGO: ");
    scanf("%i", &producto1.CODIGO);
    printf("DESCRIPCION: ");
    fflush(stdin);
    gets(producto1.DESCRIPCION);
    printf("PRECIO: ");
    scanf("%f", &producto1.PRECIO);

    printf("\nPRODUCTO 2.");
    printf("\nCODIGO: ");
    scanf("%i", &producto2.CODIGO);
    printf("DESCRIPCION: ");
    fflush(stdin);
    gets(producto2.DESCRIPCION);
    printf("PRECIO: ");
    scanf("%f", &producto2.PRECIO);

    if (producto1.PRECIO > producto2.PRECIO)
    {
        printf("\nPRODUCTO CON MAYOR PRECIO.");
        printf("\nCODIGO: %d", producto1.CODIGO);
        printf("\nDESCRIPCION: %s", producto1.DESCRIPCION);
        printf("\nPRECIO: %0.2f", producto1.PRECIO);
    }
    else if (producto2.PRECIO > producto1.PRECIO)
    {
        printf("\nPRODUCTO CON MAYOR PRECIO.");
        printf("\nCODIGO: %i", producto2.CODIGO);
        printf("\nDESCRIPCION: %s", producto2.DESCRIPCION);
        printf("\nPRECIO: %0.2f", producto2.PRECIO);
    }
    else {printf("\nTIENEN EL MISMO PRECIOS.");}
    
    
}