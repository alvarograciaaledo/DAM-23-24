/* Modifica el programa calculadora que hiciste anteriormente. Añade una
nueva opción para la división. La división la hará una función que recibirá por
parámetros los dos números leídos, comprobará si el segundo es 0 e imprimirá un
error, en caso contrario imprimirá por pantalla el valor de la división*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
void resta(){
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
void division(float n1, float n2)
{
    float total = n1 / n2;
    printf("\nTOTAL: %0.2f", total);
}
void menu()
{
    printf("\n*** CALCULADORA ***");
    printf("\n--- OPCIONES ---\n");
    printf("1) SUMAR\n");
    printf("2) RESTAR\n");
    printf("3) RAIZ CUADRADA\n");
    printf("4) DIVISION\n");
    printf("5) SALIR\n");
    printf("6) VER MENU\n");
}

void main()
{
    int opc;
    float valor1, valor2;
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

                printf("\nVAMOS A DIVIDIR.");
                printf("\nINDICA EL VALOR 1: ");
                scanf("%f", &valor1);
                printf("\nVAMOS A DIVIDIR.");
                printf("\nINDICA EL VALOR 2: ");
                scanf("%f", &valor2);

                if (valor2 == 0)
                {
                    printf("\nERROR - VALOR NULO.");
                    main();
                }
                else{division(valor1, valor2);}
                break;
            case 5:
                printf("\nADIOS AMIGO!!!");
                break;
            case 6:
                menu();
                break;
            
            default:
                printf("\nERROR - OPCION INVALIDA\n");
                break;
        }
    }
    
   
}