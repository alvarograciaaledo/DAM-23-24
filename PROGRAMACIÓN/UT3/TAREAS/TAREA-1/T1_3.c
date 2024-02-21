#include <stdio.h>

void main(){

    int x = 1;

    printf("x > 1 --> %d\n", x > 1);
    x = 1;
    printf("x++ > 10 --> %d\n", x++ < 10);
    printf("x --> %d\n", x);

    x = 1;
    printf("(x > 1) && (x++ < 10) --> %d\n", (x > 1) && (x++ < 10));
    printf("x --> %d\n", x);

    x = 1;
    printf("(1 > x) && !(1 > x++) --> %D\n", (1 > x) && !(1 > x++));
    printf("x --> %d\n", x);

    x = 1;
    printf("(1 == x) || (10 > x++) --> %D\n", (1 == x) || (10 > x++));
    printf("x --> %d\n", x);

    x = 1;
    printf("!(1 == x) || (10 > x++) --> %d\n", !(1 == x) || (10 >
    x++));
    printf("x --> %d\n", x); //¿Era lo esperado?

    x = 1;
    printf("(++x) + x --> %d\n", (++x) + x);
    printf("x --> %d\n", x);
    
    x = 1;
    printf("x + (++x) --> %d\n", x + (++x));
    printf("x --> %d\n", x);
    return 0;
}