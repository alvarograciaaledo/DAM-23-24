/*Solicita al usuario 3 números y devuelve qué número es el mayor. Vas a utilizar una
función a la que le pasas los 3 números y devuelve el número mayor. El valor
devuelto por la función lo imprimirás en el main. En el aula virtual tienes resuelto el
ejercicio del menor de 3 números.*/

//LIBRERIAS.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que se encarga de mirar cual de los 3 numeros es el mayor.
void mayor(int n1, int n2, int n3) //Nombre mas los parametros usados.
{
    if (n1 > n2 && n1 > n3) //Primera condicion.
    {
        printf("\nEl mayor es %i.", n1); //Imprime resultado.
    }
    else if (n2 > n1 && n2 > n3) //Segunda condicion.
    {
        printf("\nEl mayor es %i.", n2); //Imprime resultado.
    }
    else if (n3 > n1 && n3 > n2) //Tercera condicion.
    {
        printf("\nEl mayor es %i.", n3); //Imprime resultado.   
    }
    else{printf("\nSon el mismo numero.");} //Condicion para cuando son el mismo numero.
}

void main()
{
    int num1, num2, num3; //Variables para preguntarle al user.

    //Le pedimos los tres valores.
    printf("\nDame 3 numeros.");
    printf("\nNumero 1: ");
    scanf("%i", &num1);         //Pedimos el valor 1.
    printf("\nNumero 2: ");
    scanf("%i", &num2);         //Pedimos el valor 2.
    printf("\nNumero 3: ");
    scanf("%i", &num3);         //Pedimos el valor 3.
    
    mayor(num1, num2, num3); //Llamamos a la funcion y le decimos que se ejecute con esas variables.
}