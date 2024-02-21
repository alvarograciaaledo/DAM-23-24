#include <stdio.h>
#define TAM 5

/*Crea una estructura alumno con nombre y nota. Crea un array con la estructura
creada de 5 alumnos. Solicita los datos. Imprime el nombre de todos los alumnos
que han sacado 10, si no hay ninguno tendrás que informarlo. Calcula la media de
todos los alumnos.*/

void main()
{

    struct DATOS
    {
        char nombre[50];
        float nota;
    };

    struct DATOS alumnos[TAM];
    int diez = 0;
    float media = 0;
    
    printf("\nDATOS ALUMNOS.");
    for (int i = 0; i < TAM; i++)
    {
        printf("\nNOMBRE ALUMNO %i: ", i+1);
        fflush(stdin);
        gets(alumnos[i].nombre);
        printf("NOTA ALUMNO %i: ", i+1);
        scanf("%f", &alumnos[i].nota); 
        if (alumnos[i].nota < 0 || alumnos[i].nota > 10)
        {
            printf("\nERROR - Nota no valida.\n");
            printf("\nNOTA ALUMNO %i: ", i+1);
            scanf("%f", &alumnos[i].nota); 
        }
        media += alumnos[i].nota;  
    }

    for (int i = 0; i < TAM; i++)
    {
        if (alumnos[i].nota == 10)
        {
            printf("\nALUMNOS CON 10.");
            printf("\nNOMBRE: %s", alumnos[i].nombre);
            diez++;
        }
    }

    if (diez == 0)
    {
        printf("\nNINGUN ALUMNO TIENE UN 10.");
    }
    
    printf("\nMEDIA CLASE: %0.2f", media / TAM);

}