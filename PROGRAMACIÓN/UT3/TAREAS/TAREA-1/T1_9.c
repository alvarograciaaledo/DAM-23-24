#include <stdio.h>

void main()
{

    int nPresonas, i = 1;
    float altura, media = 0, total = 0;

    printf("Indica cuantas personas se van a medir: ");
    scanf("%i", &nPresonas);

    while (i <= nPresonas)
    {
        printf("\nIndicar la altura en cm.");
        printf("\n---- ALTURAS ----");
        printf("\nPERSONA %i: ", i);
        scanf("%f", &altura);

        total = total + altura;
        i++;
    }
    
    media = total / nPresonas;

    printf("\nMEDIA DE LAS ALTURAS: %0.2f metros", media);


}