#include <stdio.h>

void main()
{

    int hh, mm, ss, i = 0;
    char z;

    printf("\nIndicala hora.(hh/mm/ss)");

    while (i < 1)
    {
        printf("\nHORA: ");
        scanf("%i", &hh);

        if (hh >= 1 && hh <= 12)
        {
            printf("\nMINUTOS: ");
            scanf("%i", &mm);

            if (mm >= 0 && mm <= 59)
            {
                printf("\nSEGUNDOS: ");
                scanf("%i", &ss);

                if (ss >= 0 && ss <= 59)
                {
                    i++;
                }
                else
                {
                    printf("\nERROR - SEGUNDOS NO VALIDOS.");
                }
            }
            else
            {
                printf("\nERROR - MINUTOS NO VALIDOS.");
            }
        }
        else
        {
            printf("ERROR - HORA NO VALIDA.");
        }
    }
    
    printf("\nINDIQUE EL HORARIO.");
    printf("\nPulsa P --> PM");
    printf("\nPulsa A --> AM");
    printf("\n> ");
    fflush(stdin);
    scanf("%c", &z);

    if (z == 'p' || z == 'P')
    {
        hh+=12;
        printf("\nSON LAS %ih : %im : %is HORAS.", hh, mm, ss);
    }
    else if (z == 'a' || z == 'A')
    {
        printf("\nSON LAS %ih : %im : %is HORAS.", hh, mm, ss);
    }
    else
    {
        printf("\nERROR - SELECCIONA HORARIO.");
    }
}