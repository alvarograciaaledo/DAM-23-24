/*Repite el ejercicio anterior pero ahora la función CargarDatos() no devuelve nada y
se le pasa la estructura para rellenarla con los datos introducidos por el usuario.*/

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

void cargarDatos(struct PAIS *p)
{
    printf("\nDIME EL NOMBRE DEL PAIS: ");
    fflush(stdin);
    gets(p -> name);

    printf("\nDIME EL NUMERO DE HABITANTES: ");
    fflush(stdin);
    scanf("%i", &p -> people);
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
    cargarDatos(&result);
    Imprimir(result);
}