#include <stdio.h>

void main()
{
    char opcion;
    int bi = 0, noBi = 0, p = 0;
    
    printf("\nBILINGUE O NO BILINGUE?");
    printf("\nBILINGUE) S");
    printf("\nNO BILINGUE) N");
    printf("\nSALIR) F");

    while (1)    
    {
        printf("\n> ");
        scanf("%c", &opcion);
        fflush(stdin);

        if (opcion == 's' || opcion == 'S')
        {
            bi++;
            p++;
        }
        else if (opcion == 'n' || opcion == 'N')
        {
            noBi++;
            p++;
            
        }
        else if (opcion == 'f' || opcion == 'F')
        {
            printf("SALIENDO...");
            break;
        }
        else
        {
            printf("ERROR - OPCION INCORRECTA");
        }
    }
    
    printf("\nTOTAL DE PERSONAS: %i", p);
    printf("\nPERSONAS BILINGUES: %i", bi);
    printf("\nBILINGUES: %i porciento.", (bi * 100) / p);
    printf("\nPERSONAS NO BILINGUES: %i", noBi);
    printf("\nNO BILINGUES: %i porciento.", (noBi * 100) / p);

}