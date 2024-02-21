/*Solicita al usuario una cadena y cuenta el número total de vocales. Vas a utilizar una
función llamada esVocal a la que le pasas un carácter, comprueba si el carácter es
una vocal y devuelve 0 si es falso y 1 si es verdadero. Puedes utilizar strlen de la
librería string.h.*/

//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que guarda las vocales y hace la comprobacion.
int esVocal(char letra)
{
    char vocales[8] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; //Array para guardar las vocales.
    for (int i = 0; i < 8; i++) //Bucle para recorrer el array anterior.
    {
        if (letra == vocales[i]) //Condicion de que si hay alguna coincidencia devuelva 1.
        {
            return 1; //Devuelve 1.
        }
    }
    return 0; //Devuelde 0.
}

void main()
{
    char cadena[100]; //Array de caracteres para guardar la palabra o la frase.
    int conta = 0; //Contador para ver el total de vocales.

    //Solicitamos la palabra / frase.
    printf("\nESCRIBE UNA PALABRA / FRASE.");
    printf("\n> ");
    fflush(stdin);
    gets(cadena);

    //Bucle para recorrer la cadena.
    for (int i = 0; i < cadena[i] != '\0'; i++)
    {
        if (esVocal(cadena[i])) //Condicion que hace que hace que se sume uno al contador.
        {
            conta++; //Contador de vocales.
        }
    }
    printf("\nTOTAL DE VOCALES: %i.", conta); //Imprimimos resultado.
}