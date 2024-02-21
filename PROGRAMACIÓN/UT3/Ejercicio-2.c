#include <stdio.h> 
#include <string.h>
#define TAM 3

//NOMBRE Y APELLIDOS: Alvaro Gracia Aledo

struct producto{
    char codigo[4]; //Guardo uno para el /0
    float precio;
};

int main()
{
    
    int opcion = 0, contaUno = 0;
    char buscaUser[4];
    struct producto productos[TAM];


    while (opcion != 4)
    {
        printf("\nIntroduce una opcion: \n1.Insertar\n2.Imprimir\n3.Consultar precio\n4.Salir\n");
        printf("> ");
        fflush(stdin);
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            if (contaUno == 0)
            {
                printf("\nOPCION SELECCIONADA -> INSERTAR.\n");

                for (int i = 0; i < 3; i++)
                {
                    printf("(El codigo debe empezar de forma obligatoria por la letre E en mayuscula.)\n");
                    printf("CODIGO DEL PRODUCTO: ");
                    fflush(stdin);
                    gets(productos[i].codigo);

                    if (productos[i].codigo[0] != 'E')
                    {
                        printf("\nERROR - CODIGO ERRONEO.");
                        i--;
                    }
                    else
                    {
                        printf("\nPRECIO DEL PRODUCTO: ");
                        fflush(stdin);
                        scanf("%f", &productos[i].precio);

                        if (productos[i].precio <= 0)
                        {
                            printf("\nERROR - PRECIO NO VALIDO.\n");
                            i--;
                        }
                    }
                }
                contaUno++;
            }
            else
            {
                printf("\nOPCION YA UTILIZADA, SELECCIONE OTRA.");
            }
            break;

        case 2:
            if (contaUno == 0)
            {
                printf("\nNO HAY PRODUCTOS AUN.\n");
            }
            else
            {
                printf("\n--- PRODUCTOS ---");
                for (int i = 0; i < 3; i++)
                {
                    printf("\nPRODUCTO %i\n", i+1);
                    printf("CODIGO: %s\n", productos[i].codigo);
                    printf("PRECIO: %0.2lf\n", productos[i].precio);
                }
            }
            break;

        case 3:
            if (contaUno == 0)
            {
                printf("\nNO HAY PRODUCTOS AUN.\n");
            }
            else
            {
                printf("\nINDIQUE EL PCODIGO DEL PRODUCTO BUSCADO: ");
                fflush(stdin);
                gets(buscaUser);

                for (int i = 0; i < 3; i++)
                {
                    if (strcmp(buscaUser, productos[i].codigo) == 0)
                    {
                        printf("\nEL PRECIO ES %0.2lf$.\n", productos[i].precio);
                    }
                    else
                    {
                        printf("\nPRODUCTO INEXISTENTE.");
                    }
                }
            }
            break;
        case 4:
            printf("\nSALIENDO...");
            break;
        default:
            printf("\nERROR - OPCION INVALIDA.");
            break;
        }
    }
    return 0;
}