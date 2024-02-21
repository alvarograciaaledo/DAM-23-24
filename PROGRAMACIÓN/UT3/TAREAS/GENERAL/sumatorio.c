#include <stdio.h>

void main(){

    int n, cont, sum = 0, i = 0;

    printf("Indica cuantos numeros vas a introducir: ");
    scanf("%d", &cont);

    while(i < cont)
    {
        printf("Indica el numero %d: ", i+1);
        scanf("%d", &n); 

        sum += n;
        i++;

    }

    printf("Este es el sumatorio de tus numeros: %d", sum);

    return 0;

}