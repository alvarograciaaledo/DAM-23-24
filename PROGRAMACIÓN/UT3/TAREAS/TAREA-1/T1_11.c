#include <stdio.h>

void main()
{

    int n = 8;

    while (n <= 500)
    {
        printf(" %i", n);
        printf(" -");
        n += 8;
    }

    printf("\b  ");
}