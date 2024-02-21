#include <stdio.h>

void main(){

    int numPreg;
    float pregOk, res;

    printf("\nCuantas preguntas has respondido?\n");
    printf("> ");
    scanf("%i", &numPreg);

    printf("\nCuantas preguntas has respondido bien?\n");
    printf("> ");
    scanf("%g", &pregOk);

    res = (pregOk * 100) / (float)numPreg;

    if (res >= 90)
    {
        printf("\nNIVEL MAXIMO --> %g porciento", res);
    }
    else
    {
        if (res >= 75 && res < 90)
        {
            printf("\nNIVEL MEDIO --> %g porciento", res);
        }
        else if (res >= 50 && res < 75)
        {
            printf("\nNIVEL REGULAR --> %g porciento", res);
        }
        else
        {
            printf("FUERA DE NIVEL --> %g porciento", res);
        }
        
    }

    return 0;
}