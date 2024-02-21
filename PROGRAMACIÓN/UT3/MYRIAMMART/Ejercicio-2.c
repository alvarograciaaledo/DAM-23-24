#include <stdio.h> 
#include <string.h>
#define TAM 3

//MYRIAM MARTINEZ MANZANARES:

struct producto{
    char codigo[4]; //Guardo uno para el /0
    float precio;
};

int main(){
    
    int opcion=0,num=0,comprobacion=0,validCod=0;
    struct producto productos[TAM];
    char cod[4];
    do{
        printf("Introduce una opcion: \n1.Insertar\n2.Imprimir\n3.Consultar precio\n4.Salir\n");
        fflush(stdin);
        scanf("%i", &opcion);
        switch (opcion)
        {
            case 1:
                if (num != 3){
                    for (int i = 0; i < 3; i++)
                    {
                        num++;
                        while (comprobacion == 0)
                        {
                            printf("Introduce codigo del producto %d\n",num);
                            fflush(stdin);
                            gets(productos[i].codigo);
                            if (strlen(productos[i].codigo) == 3 && productos[i].codigo[0] == 'E'){
                                comprobacion = 1;
                            }
                        }
                        while (comprobacion == 1)
                        {
                            printf("Introduce precio del producto %d\n",num);
                            fflush(stdin);
                            scanf("%f", &productos[i].precio);
                            if (productos[i].precio > 0){
                                comprobacion = 0;
                            }
                        }
                    }
                    break;
                }else{
                    printf("No se pueden insertar mas productos\n");
                    break;
                }
            
            case 2:
                if (num != 0){
                    for (int i = 0; i < 3; i++)
                    {
                        printf("Codigo: %s, Precio: %f\n",productos[i].codigo,productos[i].precio);
                    }
                    break;
                }else{
                    printf("Todavia no hay productos\n");
                    break;
                }

            case 3:
            validCod = 0;
                if (num != 0){
                    printf("Introduce un codigo:\n");
                    fflush(stdin);
                    gets(cod);
                    for (int i = 0; i < 3; i++)
                    {
                        if (strcmp(cod,productos[i].codigo) == 0){
                            printf("Codigo: %s, Precio: %f\n",productos[i].codigo, productos[i].precio);
                            validCod = 1;
                            i=4;
                        }
                    }
                    if (validCod == 0){
                        printf("El codigo de producto no existe\n");
                    }
                    break;
                }else{
                    printf("No hay productos\n");
                    break;
                }
            case 4:
                printf("FIN\n");
                break;
            default:
                printf("La opcion no existe\n");
                break;
        }
    }while (opcion != 4);
    return 0;
}