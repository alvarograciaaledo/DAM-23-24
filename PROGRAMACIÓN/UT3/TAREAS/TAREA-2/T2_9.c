#include <stdio.h>

void main()
{
    int n, conta, neg = 0, pos = 0, mult = 0, totalPares = 0;

    printf("\nCunatos valores vas a introducir?");
    printf("\n> ");
    scanf("%i", &conta);

    printf("\nIntroduce un valor: \n");

    for (int i = 1; i <= conta; i++)
    {
        printf("> ");
        scanf("%i", &n);

        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {

        }
        
        if (n % 15 == 0)
        {
            mult++;
        }

        if (n % 2 == 0)
        {
            totalPares += n;
        }
    }
}