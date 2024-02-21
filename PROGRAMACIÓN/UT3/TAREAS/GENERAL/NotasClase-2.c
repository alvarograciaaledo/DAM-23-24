#include <stdio.h>

void main(){

    int nota = 0;

    printf("Indica la nota de tu examen: ");
    scanf("%d", &nota);

    switch(nota)
    {
    case 0:
    case 1:
    case 2:
    case 3:  
    case 4:
        printf("SUSPENSO.\n");
        break;  
    case 5:      
    case 6:
        printf("APROBADO.\n");
        break;   
    case 7:   
    case 8:
        printf("NOTABLE.\n");
        break;  
    case 9:  
    case 10:
        printf("SOBRESALIENTE.\n");
        break;
    default:
        printf("ERROR - Nota no valida.");
    }

    return 0;

}