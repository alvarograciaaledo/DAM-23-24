#include <stdio.h>

void main()
{
    //VARIABLES
    char c1 = 'A';
    char c2 = 'B';
    char *pc;

    pc = &c1;           //Apunta a c1
    printf("%c\n", c1); // Valor de c1 = A
    *pc = 'a';          // Donde apunta vale a
    printf("%c\n", c1); // Valor de c1 = a
    *pc = 'Z';          // Donde apunta vale Z
    printf("%c\n", *pc);// Imprime el valor de lo que apunta que es Z
    pc = &c2;           // Apunta a c2
    printf("%c\n", *pc);// Imprime el valor de lo que apunta que es c2 y vale B

}