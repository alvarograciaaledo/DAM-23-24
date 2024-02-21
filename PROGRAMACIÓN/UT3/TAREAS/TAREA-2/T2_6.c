#include<stdio.h>

void main()
{

    float n1, n2, n3;
    int i = 1;

    printf("\nINTRODUCE LOS VALORES.");
    do
    {
        printf("\nVALOR 1: ");
        scanf("%f", &n1);

        printf("\nVALOR 2: ");
        scanf("%f", &n2);

        if (n1 != n2)
        {
            printf("\nVALOR 3: ");
            scanf("%f", &n3);
            if (n2 != n3 && n1 != n3)
            {
                printf("\nDATOS:");
            }
            else
            {
                printf("\nERROR - ESTA REPETIDO.");
            }
        }
        else
        {
            printf("\nERROR - ESTA REPETIDO.");
        }
    } while (n1 == n2 || n2 == n3 || n1 == n3);
    
    if (n1 < n2 && n1 < n3)
    {
        printf("\nEl menor es %g.", n1);

        if (n2 < n3 && n2 > n1)
        {
            printf("\nEl numero intermedio es %g.", n2);
            printf("\nEl mayor es %g.", n3);
        }
        else
        {
            printf("\nEl numero intermedio es %g.", n3);
            printf("\nEl mayor es %g.", n2);
        }
        
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("\nEl menor es %g.", n2);

        if (n1 < n3 && n1 > n2)
        {
            printf("\nEl numero intermedio es %g.", n1);
            printf("\nEl mayor es %g.", n3);
        }
        else
        {
            printf("\nEl numero intermedio es %g.", n3);
            printf("\nEl mayor es %g.", n1);
        }
    }
    else if (n3 < n1 && n3 < n2)
    {
        printf("\nEl menor es %g.", n3);

        if (n1 < n2 && n1 > n3)
        {
            printf("\nEl numero intermedio es %g.", n1);
            printf("\nEl mayor es %g.", n2);
        }
        else
        {
            printf("\nEl numero intermedio es %g.", n2);
            printf("\nEl mayor es %g.", n1);
        }
    }
    
    
    
    
}