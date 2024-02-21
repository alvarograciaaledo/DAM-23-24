#include <stdio.h>

//Variables globales 
int d = 0, e = 0;

int miFuncion (int a, int b, int c) 
{ 
    //Variable local de miFuncion 
    int e = 5;

    a++;
    b++;
    c++;

    printf("miFuncion (): a %d\n", a); 
    printf("miFuncion (): b %d\n", b); 
    printf("miFuncion (): c %d\n", c); 
    printf("miFuncion (): d %d\n", d); 
    printf("miFuncion (): e %d\n", e); 
    return b;
}

int main() 
{

    //Variables locales de main
    int a = 2, b = 2, d = 2;

    //¿Podría imprimir c?
    printf("main(): a %d\n", a); 
    printf("main(): b %d\n", b);  
    printf("main(): d %d\n", d); 
    printf("main(): e %d\n", e);

    a = miFuncion (a, 7, b); 
    e++;

    //¿Podría imprimir c?
    printf("main(): a %d\n", a); 
    printf("main(): b %d\n", b);  
    printf("main(): d %d\n", d); 
    printf("main(): e %d\n", e);

    return 0;
}

/*
main(): a 2
main(): b 2
main(): d 2
main(): e 0
miFuncion (): a 3
miFuncion (): b 8
miFuncion (): c 3
miFuncion (): d 0
miFuncion (): e 5
main(): a 8
main(): b 2
main(): d 2
main(): e 1
*/