#include <stdio.h>

void main()
{

    float l1, l2, l3;
    int iso = 0, equi = 0, esca = 0, menosCant = 0, nTriangulos;

    printf("\nIndica el numero de triangulos que vas a introducir: ");
    scanf("%i", &nTriangulos);

    if (nTriangulos <= 0)
    {
        printf("\nERROR - DATO NO VALIDO");
    }
    else
    {
    

        for (int i = 1; i <= nTriangulos; i++)
        {

            printf("\n---- TRIANGULO %i ----", i);
            printf("\nLADO 1: ");
            scanf("%f", &l1);
            printf("\nLADO 2: ");
            scanf("%f", &l2);
            printf("\nLADO 3: ");
            scanf("%f", &l3);

            if (l1 > 0 && l2 > 0 && l3 > 0)
            {                 
                if (l1 == l2 && l2 == l3)
                {
                    printf("\nESTE ES UN TRIANGULO EQUILATERO.");
                    equi++;
                }
                else if (l1 == l2 || l1 == l3 || l2 == l3)
                {
                    printf("\nESTE ES UN TRIANGULO ISOSCELES.");
                    iso++;
                }
                else
                {
                    printf("\nESTE ES UN TRIANGULO ESCALENO.");
                    esca++;
                }
            } 
            else
            {
                printf("ERROR - MEDIDA NO VALIDA.");
                i--;
            }          
        }
    
        printf("\n---- CANTIDADES ----");
        printf("\nTRIANGULOS EQUILATEROS: %i", equi);
        printf("\nTRIANGULOS ISOSCELES: %i", iso);
        printf("\nTRIANGULOS ESCALENO: %i", esca);

        if (iso == esca && esca == equi)
        {
            printf("\nESTA LA MISMA CANTIDAD DE TRIANGULOS.");
        }
        else
        {
            if (equi < iso && equi < esca)
            {
                printf("\nHAY MENOS TRIANGULOS EQUILATERO.");
            }
            else if (iso < equi && iso < esca)
            {
                printf("\nHAY MENOS TRIANGULOS ISOSCELES.");
            }
            else
            {
                printf("\nHAY MENOS TRIANGULOS ESCALENO.");
            }
        }
    }
}