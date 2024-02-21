#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Crea una aplicación calculadora. Con suma, resta y raíz cuadrada. Muestra
al usuario un menú con las opciones del programa: 1.Sumar, 2.Restar, 3. Raíz
cuadrada, 4. Salir. El programa no termina hasta que el usuario selecciona la opción
4. Para mostrar el menú utiliza una función llamada muestraMenu().*/

void suma()
{
    int n1, n2, total;

    printf("\nINTRODUZCA 2 NUMEROS PARA SUMAR");
    printf("\nVALOR 1: ");
    scanf("%i", &n1);
    printf("\nVALOR 2: ");
    scanf("%i", &n2);

    total = n1 + n2;

    printf("\nRESULTADO: %i\n", total);
}
void resta()
{
        int n1, n2, total;

    printf("\nINTRODUZCA 2 NUMEROS PARA RESTAR");
    printf("\nVALOR 1: ");
    scanf("%i", &n1);
    printf("\nVALOR 2: ");
    scanf("%i", &n2);

    total = n1 - n2;

    printf("\nRESULTADO: %i\n", total);
}
void raiz()
{
    int n1, total;

    printf("\nINTRODUZCA 1 NUMEROS PARA HACER LA RAIZ CUADRADA");
    printf("\nVALOR 1: ");
    scanf("%i", &n1);


    total = sqrt(n1);

    printf("\nRESULTADO: %i\n", total);
}
void menu()
{
    printf("\n*** CALCULADORA ***");
    printf("\n--- OPCIONES ---\n");
    printf("1) SUMAR\n");
    printf("2) RESTAR\n");
    printf("3) RAIZ CUADRADA\n");
    printf("4) SALIR\n");
    printf("5) VER MENU\n");
}

void main()
{
    int opc;
    while (opc != 4)
    {
        menu();
        printf("\nSELECCIONA UNA OPCION: ");
        scanf("%i", &opc);
        switch (opc)
        {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                raiz();
                break;
            case 4:
                printf("\nADIOS AMIGO!!!");
                break;
            case 5:
                menu();
                break;
            
            default:
                printf("\nERROR - OPCION INVALIDA\n");
                break;
        }
    }
    
   
}