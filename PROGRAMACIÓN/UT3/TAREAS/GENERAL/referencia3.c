/*Ejercicio: Crea un programa en el que pides el nombre y apellidos de un usuario.
Para leer el nombre y guardarlo en un array vas a crear una función a la que le pasas
un texto a mostrar al usuario y un array, y le asigna el valor que escribe el usuario
por teclado. Date cuenta que a esta función la llamarás dos veces, una para rellenar
el nombre y otra para rellenar los apellidos. Termina el programa con la impresión
por pantalla del nombre y los apellidos.
- A continuación, una posible salida del programa.
    Introduce tu nombre
        Mariajo
    Introduce tus apellidos
        Casalins Pina
    Tu nombre es Mariajo y tus apellidos Casalins Pina.
*/

#include <stdio.h>

/*cadena en este caso se usa para imprimir el mensaje que pide datos
y el aux es utilizado para solicitar el nombre, apellidos, etc.*/
void datos(char cadena[50], char aux [100])
{
    printf("%s\n", cadena); //Se usa para imprimir el printf de abajo.
    fflush(stdin); //Limpiamos
    gets(aux); //Aux lo usamos para el nombre y los apellidos
}

void main()
{
    char nombre[100]; //Array del nombre.
    char apellidos[100]; //Array de los apellidos.
    datos("\nIntroduce tu nombre: ", nombre); //LLamamos la funcion y por medio del aux guardamos el name.
    datos("\nIntroduce tus apellidos: ", apellidos); //LLamamos la funcion y por medio del aux guardamos los apellidos.
    printf("\nTu nombre es %s y tus apellidos %s.", nombre, apellidos); //Imprime el resultado.
}
