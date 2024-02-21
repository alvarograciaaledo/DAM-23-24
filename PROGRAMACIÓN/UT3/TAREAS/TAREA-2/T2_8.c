#include <stdio.h>

void main()
{

    int anyo;
    char c;

    while (c == 'S' || c == 's')
    {
        printf("\nINDICA UN ANYO: ");
        scanf("%d", &anyo);

        if (anyo % 4 == 0 && (anyo % 100 != 0 || anyo % 400 == 0)) 
        {
            printf("\nEs un anyo bisiesto.\n");
        } 
        else 
        {
            printf("\nNo es un anyo bisiesto.\n");
        }       
    }
    
}