#include <stdio.h>

void main()
{

    struct cesta
    {
        float IVA;
        float PRECIO;
    }producto1, producto2;

    printf("PRODUCTO 1.");
    printf("\nIntroduzca el precio: ");
    scanf("%f", &producto1.PRECIO);
    printf("\nIntroduzca el IVA: ");
    scanf("%f", &producto1.IVA);

    printf("PRODUCTO 2.");
    printf("\nIntroduzca el precio: ");
    scanf("%f", &producto2.PRECIO);
    printf("\nIntroduzca el IVA: ");
    scanf("%f", &producto2.IVA);



    printf("\nPRODUCTO 1 --> PRECIO SIN IVA: %0.2f", producto1.PRECIO);
    printf("\nPRODUCTO 1 --> PRECIO CON IVA: %0.2f", producto1.PRECIO + (producto1.PRECIO * (producto1.IVA / 100)));
    printf("\nPRODUCTO 1 --> PRECIO SIN IVA: %0.2f", producto2.PRECIO);
    printf("\nPRODUCTO 1 --> PRECIO CON IVA: %0.2f", producto2.PRECIO + (producto2.PRECIO * (producto2.IVA / 100)));
}