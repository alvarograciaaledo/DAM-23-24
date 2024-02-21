#include <stdio.h>

void main()
{

    char c;
    int contaVocales = 0, i = 0;

    printf("\nIngrese caracteres (Para acabar introduzca una consonante):");

    while (i < 1) 
    {
        fflush(stdin);
        printf("\n> ");
        scanf(" %c", &c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            contaVocales++;
        }
        else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            
        }
        else if (c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú')
        {
            
        }
        else 
        {
            i++;
        }
    }

    printf("VOCALES EN MINUSCULA: %d vocales.\n", contaVocales);
}