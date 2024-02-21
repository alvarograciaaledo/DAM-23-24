/*Crea una estructura llamada pais que guarde el nombre y la cantidad de habitantes
del país (piensa que en esta variable puedes guardar un número muy grande).
Declara una variable en el main del tipo la estructura que has creado. Desde el main
vas a llamar dos funciones:
● CargarDatos(): No tiene parámetros y devuelve una estructura.
● Imprimir(): Dada una estructura imprime los datos de la estructura.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct PAIS
{
    char name[100];
    int people;
};

struct PAIS cargarDatos()
{
    struct PAIS p;

    printf("\nDIME EL NOMBRE DEL PAIS: ");
    fflush(stdin);
    gets(p.name);

    printf("\nDIME EL NUMERO DE HABITANTES: ");
    fflush(stdin);
    scanf("%i", &p.people);

    return p;
}

void Imprimir(struct PAIS elPais)
{
    printf("\n--- DATOS DEL PAIS ---");
    printf("\nNOMBRE: %s", elPais.name);
    printf("\nNUMERO DE HABITANTES: %i personas", elPais.people);
}

void main()
{
    struct PAIS result;
    result = cargarDatos();
    Imprimir(result);
}