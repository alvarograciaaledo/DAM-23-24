//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Array en el que se guardan las palabras.
char palabras[10][50] = {"pantalla", "raton", "teclado", "ordenador", "ssd", "pendrive", "impresora", "router", "webcam", "microfono"};

// Funcion en la que se genera la palabra y donde se la pedimos al usuario.
void pedirPalabra()
{
    //Variables.
    int intentos = 0, i = 1;
    char palabraUser[50]; //Array que guarda la palabra del user.

    //Se asigna de forma aleatoria una posicion del array para que se seleccione la palabra del juego.
    srand(time(0));
    int n = rand() % 10; //Asignamos el numero.
    
    while (intentos != 3) //Bucle para contar los intentos ya que solo hay 3.
    {   
        printf("\n--- INTENTO %i ---", i); //Indica los intentos que llevas.
        printf("\nIndica una palabra > "); //Pedimos la palabra al user.
        fflush(stdin);
        gets(palabraUser);

        if (strcmp(palabraUser, palabras[n]) == 0) //Condicion que compara la palabra asignada con la de usuario para ver si acerto.
        {
            //Indicamos que ha ganado y fin del programa.
            printf("\nENHORABUENA HAS ADIVINADO LA PALABRA!!!!");
            printf("\nFIN DE LA PARTIDA.");
            break;
        }
        else
        {
            //Si no cumple la condicion se lo decimos y le damos otro intento.
            printf("\nHAS FALLADO - PRUEBA DE NUEVO.\n");
            intentos++; //Aumento de contador de intentos.
            i++;
        }
    }
    if (intentos == 3) //Si llega a 3 intentos se acaba y muestra la palabra que era.
    {
        printf("\nFIN DE PARTIDA, NO HAS ACERTADO ;(\n");
        printf("LA PALABRA ERA: %s", palabras[n]);
    }
    
}

//Funcion decorativa donde damos las posibles opciones y la tematica del juego
void menu()
{
    printf("\n ____________________________________________");
    printf("\n|             ADIVINA LA PALABRA             |");
    printf("\n|             Tema: informatica              |");
    printf("\n|____________________________________________|");
    printf("\n| Palabras:                                  |\n");
    for (int i = 0; i < 4; i++)
    {
        printf("| %s -", palabras[i]);
        
    }
    printf("|\n");

    for (int i = 4; i < 8; i++)
    {
        printf("| %s -", palabras[i]);
        
    }
    printf("   |\n");

    for (int i = 8; i < 10; i++)
    {
        printf("| %s -", palabras[i]);
        printf("\b\b  ");
    }
    printf("                      |");
    printf("\n|____________________________________________|");
}

void main()
{
    //Llamamos la funciones.
    menu();
    pedirPalabra();
}