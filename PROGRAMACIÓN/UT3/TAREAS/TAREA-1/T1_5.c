#include <stdio.h>

void main(){

    int dd, mm, aaaa;

    do
    {
        printf("\nIntroduce una fecha (dd/mm/aaaa)\n");
        printf("Dia --> ");
        scanf("%i", &dd);
        printf("Mes --> ");
        scanf("%i", &mm);
        printf("Anyo --> ");
        scanf("%i", &aaaa);

        printf("\nHas introducido la fecha: %i/%i/%i\n", dd, mm, aaaa);

        if (dd > 0 && dd <= 31)
        {
            if (mm > 0 && mm <= 12)
            {
                if (dd == 25 && mm == 12)
                {
                    printf("\n> La fecha corresponde con Nochebuena.");
                    printf("\n> Felices Fiestas!!!!");
                }
                else
                {
                    printf("\nLa fecha no corresponde con Nochebuena.");
                }
            }
            else
            {
                printf("\n!!! ERROR - Mes no valido !!!\n");
            }
        }
        else
        {
            printf("\n!!! ERROR - Dia no valido !!!\n");
        }

    } while (dd < 0 || dd > 31 || mm < 1 || mm > 12 );

    return 0;
}