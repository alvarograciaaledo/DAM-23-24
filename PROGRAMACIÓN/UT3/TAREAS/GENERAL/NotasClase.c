#include <stdio.h>

void main(){

    float nota = 0;

    printf("Indica la nota de tu examen: ");
    scanf("%f", &nota);

    if(nota >= 0 && nota <= 4.9)
    {

        printf("Has suspendido, no te rindas.\n");

    }
    else if(nota > 4.9 && nota <= 6.9)
    {

        printf("Has aprobado, pero por los pelos.\n");

    }
    else
    {
        if(nota > 6.9 && nota <= 8.9)
        {

            printf("Has sacado un notable, muy bien.\n");

        }
        else if(nota > 8.9 && nota <= 10)
        {

            printf("Sobresaliente, menudo coco.\n");

        }
    }

    return 0;
}