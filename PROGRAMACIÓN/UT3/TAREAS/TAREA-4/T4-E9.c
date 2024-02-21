#include <stdio.h>

void main()
{

    /*Crea un array para guardar una frase con una longitud máxima de 100. La frase
    introducida sólo puede tener caracteres en mayúsculas (sin tildes) y los espacios en
    blanco. Comprueba que todas las palabras están en mayúsculas. Quizás pueda
    serte útil la tabla ASCII.*/

    char frase[100];
    int p = 65;

    printf("ESCRIBE UNA FRASE EN MAYUSCULAS.");
    gets(frase);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (!(frase[i] >= 'A' && frase[i] <= 'Z') && frase[i] != ' ') 
        {
            printf("La frase contiene caracteres no permitidos.\n");
            return 0;
        }
    }

    printf("La frase es valida.\n");
}