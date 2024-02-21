/*Crea un programa para jugar con el usuario a adivinar un número. Tendrás que
generar un número aleatorio del 1 al 10. Recuerda que rand genera números
aleatorios del 0 a RAND_MAX piensa cómo podrías limitarlo al rango que te digo. Le
daremos 3 intentos al usuario para que trate de adivinar el número aleatorio.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


void main()
{
    int nUser;
    srand(time(0));
    int num = rand() % 11;

    for (int i = 0; i < 3; i++) 
    {
        printf("\nADIVINA EL NUM ENTRE 0 Y 10");
        printf("\n> ");
        scanf("%i", &nUser);

        if (nUser == num)
        {
            printf("\nFELICIDADES HAS ACERTADO!!!!");
            i = 2;
            break;
        }
        else
        {
            printf("\nHAS FALLADO - PRUEBA DE NUEVO.");
        }
    }

    printf("\nEL NUMERO ERA %i.", num);
    printf("\nTU NUMERO HA SIDO %i.", nUser);
}