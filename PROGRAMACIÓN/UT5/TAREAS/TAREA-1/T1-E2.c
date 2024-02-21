#include <stdio.h>

void main()
{
    int array[2];
    int *p;
    array[0] = 20;
    array[1] = 30;
    p = array;

    printf("%i\n", *p);
    printf("%i\n", p+1);
    printf("%i\n", p+2);
    printf("%i\n", p+3);
}