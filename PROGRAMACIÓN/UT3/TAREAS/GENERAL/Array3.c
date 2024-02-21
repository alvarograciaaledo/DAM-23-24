#include <stdio.h>
#define CIEN 100

void main()
{

    int cienPRIMEROS[CIEN];
    
    for (int i = 0; i < CIEN; i++)
    {
        cienPRIMEROS[i] = i + 1;
        printf("%i - ", cienPRIMEROS[i]);
        
    }
    printf("\b\b \n\n");

    for (int i = CIEN - 1; i >= 0; i--)
    {
        printf("%i - ", cienPRIMEROS[i]);
        
    }
    printf("\b\b ");
}