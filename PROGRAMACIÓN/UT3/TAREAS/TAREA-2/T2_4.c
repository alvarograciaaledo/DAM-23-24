#include <stdio.h>

void main()
{

    float kg;
    int contPiezas = 0, piezas = 0, cont1 = 0, cont2 = 0, cont3 = 0;

    printf("\n--- SUMATORIO DE PESOS ---");
    do
    {
        printf("\nINDICA EL PESO (kg)");
        printf("\n> ");
        scanf("%f", &kg);

        if (kg > 0)
        {
            if (kg >= 9.8 && kg <= 10.2)
            {
                cont1++;
            }
            else if (kg > 10.2)
            {
                cont2++;
            }
            else if (kg < 9.8)
            {
                cont3++;
            }
        }
        else if (kg < 0)
        {
            printf("\nERROR - PESO NO VALIDO.");
        }
        
        piezas++;
        contPiezas += kg;
    } while (kg != 0);
    
    printf("\nTOTAL DE PIEZAS: %i", piezas - 1);
    printf("\nMEDIA DE PESO: %0.2f", contPiezas / (float)(piezas - 1));
    printf("\nPIEZA MENOS DE 9.8kg: %i", cont3);
    printf("\nPIEZA ENTRE 9.8 Y 10.2kg: %i", cont1);
    printf("\nPIEZA MAYOR DE 10.2kg: %i", cont2);
}