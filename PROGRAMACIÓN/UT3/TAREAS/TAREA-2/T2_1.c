#include <stdio.h>

void main()
{
    for (int codigo = 0; codigo <= 255; codigo++) {
        printf("Codigo ASCII: %d, Caracter: %c\n", codigo, codigo);
    }
    
    return 0;
}