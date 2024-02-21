#include <stdio.h>

void main()
{

    int mes;

    printf("\nINDICA EL NUMERO DEL MES.");
    printf("\n> ");
    scanf("%i", &mes);

    if (mes <= 0 && mes > 12)
    {
        printf("\nERROR - MES JO EXISTENTE.");
    }
    else
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 9 || mes == 11)
        {
            printf("\nEl mes consta de 31 dias.");
        }
        else
        {
            printf("\nEl mes consta de 30 dias.");
            if (mes == 2)
            {
                printf("\nEl mes consta de 28 o 29 dias.");
            }
            
        }
    }
}