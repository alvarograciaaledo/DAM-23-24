#include <stdio.h>

void main()
{

    /*Crea un array para guardar una frase con una longitud máxima de 100. Comprueba
    que la frase termina en “.” y además el usuario no ha escrito más de 1 espacio
    seguido.*/

    char frase[100];
    int longitud = 0, valido = 1;
    

    printf("\nIntroduce una frase: ");
    gets(frase); 

    for (int i = 0; i < sizeof(frase); i++) 
    {
        if (frase[i] == '\0') 
        {
            longitud = i;
            break;
        }
    }

    if (frase[longitud - 1] != '.') 
    {
        printf("La frase no termina en punto.\n");
        valido = 0;
    }

    for (int i = 0; i < longitud - 2; i++) 
    {
        if (frase[i] == ' ' && frase[i + 1] == ' ') 
        {
            printf("El usuario ha escrito mas de 1 espacio seguido.\n");
            valido = 0;
        }
        else if (frase[i] == ' ' && frase[i + 1] == '\0')
        {
            valido = 1;
        }
    }

    if (valido == 0)
    {
        printf("La frase no es valida.\n");
    }
    else if (valido == 1)
    {
        printf("La frase es valida.\n");
    }
}