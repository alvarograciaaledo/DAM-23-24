#include <stdio.h>

void main()
{

    struct FECHA 
    {
        int dd;
        int mm;
        int aa;
    };

    struct PRODUCTO 
    {
        int codigo;
        char descripcion[41];
        float precio;
        struct FECHA fechavencimiento;
    };

    struct PRODUCTO productos[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nPRODUCTO %i.", i+1);
        printf("\nCODIGO: ");
        scanf("%i", &productos[i].codigo);
        printf("DESCRIPCION: ");
        fflush(stdin);
        gets(productos[i].descripcion);
        printf("PRECIO: ");
        scanf("%f", &productos[i].precio);
        printf("FECHA DE VENCIMIENTO (xx/xx/xx): ");
        printf("\nDIA: ");
        scanf("%i", &productos[i].fechavencimiento.dd);
        printf("MES: ");
        scanf("%i", &productos[i].fechavencimiento.mm);
        printf("ANYO: ");
        scanf("%i", &productos[i].fechavencimiento.aa);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("\nPRODUCTO %i.", i+1);
        printf("\nCODIGO: %i\n", productos[i].codigo);
        printf("DESCRIPCION: %s\n", productos[i].descripcion);
        printf("PRECIO: %0.2f\n", productos[i].precio);
        printf("FECHA DE VENCIMIENTO: %i / %i / %i\n", productos[i].fechavencimiento.dd, productos[i].fechavencimiento.mm, productos[i].fechavencimiento.aa);
    }
}