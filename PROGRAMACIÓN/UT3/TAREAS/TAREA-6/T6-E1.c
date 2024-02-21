/*Crea un programa con menú con las siguientes opciones 
    1.Perímetro del cuadrado
    2. Superficie del cuadrado 
    3. Salir. 
    El programa tiene las siguientes funciones:
        a. menu: No tiene parámetros pero devuelve un entero. Imprime el menú con
        las opciones, lee la opción del usuario y devuelve el entero con la opción
        seleccionada por el usuario.
        b. calculaSuperficie: Parámetro un float. Se le pasa el lado del cuadrado dado
        por el usuario e imprime la superficie. La función no devuelve nada.
        c. calculaPerimetro: Parámetro un float. Se le pasa el lado del cuadrado dado
        por el usuario e imprime el perímetro. La función no devuelve nada.*/

//LIBRERIAS.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que se encaga de realizar la operacion de la superficie (No devuelve nada).
void calculaSuperficie(float lado)
{
    float P = lado * lado; //Variable que hace el calulo.
    printf("\nPERIMETRO: %0.2lfcm\n", P); //Imprime el valor total.
}

//Funcion que se encaga de realizar la operacion del perimetro (No devuelve nada).
void calculaPerimetro(float lado)
{
    float S = lado * 4; //Variable que hace el calulo.
    printf("\nSUPERFICIE: %0.2lfcm\n", S); //Imprime el valor total.
}

//Funcion que se encaga de mostrar el menu y pedir la opcion.
int menu()
{
   int n;
   printf("\n----- MENU -----");
   printf("\n1) PERIMETRO.");
   printf("\n2) SUPERFICIE.");
   printf("\n3) SALIR.");

   printf("\nSeleccione una opcion: ");
   scanf("%i", &n);

   return n;
}

void main()
{
    //Variables de el lado, el numero que vendria siendo la opcion en la funcion de menu y la opcion que se usa en el switch. 
    int opcion, num;
    float L;
    

    while (opcion != 3) //Bucle para que lo repita hasta que no pulse 3 que es salir.
    {
        opcion = menu(num); //Lamamos la funcion para ver las opciones y elegir una.

        switch (opcion)
        {
            case 1: //Opcion de la superficie.
                printf("\nCALCULAR SUPERFICIE. ");
                printf("\nLado: ");
                scanf("%f", &L);  //Solicitamos al user la longitud de un lado del ■.

                calculaSuperficie(L); //Llamamos la funcion para que nos de el resultado. 
                break;

            case 2:
                printf("\nCALCULAR PERIMETRO. ");
                printf("\nLado: ");
                scanf("%f", &L); //Solicitamos al user la longitud de un lado del ■.

                calculaPerimetro(L); //Llamamos la funcion para que nos de el resultado.
                break;

            case 3:
                printf("\nADIOS!!!"); //Decide salir y nos despedimos.
                break;
            
            default:
                printf("\nERROR - OPCION NO VALIDA.\n"); //Error que muestra cuando selecciona una opcion distinta.
                break;
        }
    }
}