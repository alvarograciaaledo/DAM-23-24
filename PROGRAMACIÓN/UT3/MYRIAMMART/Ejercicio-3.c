#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TAM 3

//MYRIAM MARTINEZ MANZANARES:

struct minimo{
	int fila0;
	int fila1;
	int fila2;
};

void inicializaArray(char ar[TAM][TAM]){
    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            ar[i][j] = rand()%6;
        }
        
    }
    
}

void imprimeArray(char ar[TAM][TAM]){
    printf("IMPRIMO ARRAY\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    
}

void calculaMedia(char ar[TAM][TAM],float *med){
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            *med += ar[i][j];
        }
    }
}

struct minimo minimoFila(char ar[TAM][TAM]){
    int menor;
    struct minimo min;
    for (int i = 0; i < TAM; i++)
    {
        menor = ar[i][0];
        for (int j = 1; j < TAM; j++)
        {
            if(ar[i][j] < menor){
                menor = ar[i][j];
            }
        }
        if(i == 0){
            min.fila0 = menor;
        }else if(i == 1){
            min.fila1 = menor;
        }else{
            min.fila2 = menor;
        }
    }
    return min;
}

int main(){
    struct minimo filas;
    char array[3][3];
    float media;
    inicializaArray(array);
    imprimeArray(array);
    calculaMedia(array,&media);
    printf("Media: %f\n",media);
    filas = minimoFila(array);
    printf("Fila 0:%d - Fila 1:%d - Fila 2:%d\n",filas.fila0,filas.fila1,filas.fila2);
    return 0;
}