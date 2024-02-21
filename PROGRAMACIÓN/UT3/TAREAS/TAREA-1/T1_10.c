#include <stdio.h>

void main()
{

    int nPresonas, i = 1, may = 0, men = 0, med = 0;
    float sueldo, total = 0;

    printf("Indica cuantas trabajadores hay: ");
    scanf("%i", &nPresonas);

    while (i <= nPresonas)
    {
        printf("\nIndica el sueldo en euros.");
        printf("\n---- SUELDO ----");
        printf("\nPERSONA %i: ", i);
        scanf("%f", &sueldo);

        if (sueldo <= 0)
        {
            printf("\nERROR - SALARIO INCORRECTO.");
        }
        else
        {
            if (sueldo > 3000)
            {
                may += 1;
            }
            else if (sueldo < 700)
            {
                men += 1;
            }
            else
            {
                med += 1;
            }
            
            total = total + sueldo;
            i++;
        }
    }
    
    printf("\nPERSONAS QUE COBRAN MAS DE 3000 EUROS: %i", may);
    printf("\nPERSONAS QUE COBRAN MENOS DE 700 EUROS: %i", men);
    printf("\nPERSONAS QUE COBRAN ENTRE 700 Y 3000 EUROS: %i", med);
    printf("\nGASTOS TOTALES EN SUELDOS: %0.2f euros", total);

}