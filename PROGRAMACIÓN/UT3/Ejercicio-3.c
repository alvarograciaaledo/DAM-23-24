#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 3

//NOMBRE Y APELLIDOS: Alvaro Gracia Aledo

struct minimo{
	int fila0;
	int fila1;
	int fila2;
};

void inicializaArray(int array[3][3])
{
    srand(time(0));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = rand() % 10;
        }
    }
}

float calculaMedia(int array[3][3], float *media)
{
    *media = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *media = *media + array[i][j];
        }
    }
    *media = *media / 9;
    return *media;
}

void minimoFila()
{

}

void imprimeArray(int array[3][3])
{
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", array[i][j]);
        }
    }
}

int main(){
    //Declaracion de variables
    int array[3][3];
    float media; // Variable que pasarás por referencia.

    inicializaArray(array);
    imprimeArray(array);
    calculaMedia(array, &media);
    printf("\nMEDIA: %0.2f", &media);
    //Llamada funcion minimoFila
    //Imprime la variable de tipo struct minimo

    return 0;
}