/*Crea un programa que solicita al usuario una cadena de caracteres y un carácter. El
programa debe devolver el número de apariciones de ese carácter en la cadena.
Para ello vas a hacer uso de dos funciones:
    ● LeerDatos: Como parámetro tiene el array y el carácter pasado por referencia
    y no devuelve nada. La función solicita una cadena y el carácter al usuario y
    los guarda.
    ● CuentaCaracteres: Como parámetro recibe el array y el carácter introducido
    por el usuario y devuelve el número de apariciones del carácter en la cadena.
    En el main deberás imprimir el resultado devuelto por esta función.*/

//LIBRERIA
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que lee la frase o la palabras.
void LeerDatos(char cadena[200], char *letra) //Variable para la cadena y una variable por referencia para asignar la letra.
{
    printf("\nIndicame una palabra o frase: ");
    fflush(stdin);
    gets(cadena); //Pedimos la cadena.
    printf("\nAhora dime la letra que quieres contar: ");
    fflush(stdin);
    scanf("%c", &*letra); //Pedimos la variable pasada por referencia.
}

//Funcion que cuenta las veces que aparece la letra solicitada anteriormente.
int CuentaCaracteres(char laCadena[200], char *laLetra) //Variable para la cadena y de nuevpo otra pasada por referencia para la letra.
{
    int conta = 0; //Variable que cuenta las veces que aparece la letra.
    for (int i = 0; laCadena[i] != '\0'; i++) //Condicion para que el bucle siga hasta el final.
    {
        if (laCadena[i] == *laLetra) //Condicion de que si la letra coincide con alguna del array se sume uno al contador.
        {
            conta++; //Sumanos 1 al contador.
        }
    }
   return conta; //Devuelve el contador para tener el recuento.
}

void main()
{
    char Cadena[200]; //Variable de la cadena.
    char Letra; //Variable NORMAL de la letra.
    
    LeerDatos(Cadena, &Letra); //Llamamos a la funcion y le pasanos el array y la variable de la letra con el '&' ya que esta pasado por referencia.
    int total = CuentaCaracteres(Cadena, &Letra); //Creamos una variable y le decimos que es el valolr
    printf("\nTOTAL DE VECES QUE APARECE LA LETRA: %i", total);
}