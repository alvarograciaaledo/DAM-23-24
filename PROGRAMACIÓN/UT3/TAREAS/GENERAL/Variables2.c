#include <stdio.h>

void main(){
    char a;
    int n;
    float n2;
    double n3;
    char p[100];

    printf("Introduce un entero: ");
    scanf("%p", &n);
    printf("Entero: %d\n", n);

    fflush(stdin);

    printf("\nIntroduce un float: ");
    scanf("%f", &n2);
    printf("Palabra: %f\n", n2);

    fflush(stdin);

    printf("\nIntroduce un double: ");
    scanf("%lf", &n3);
    printf("Palabra: %lf\n", n3);

    fflush(stdin);

    printf("\nIntroduce un caracter: ");
    scanf("%c", &a);
    printf("Palabra: %c\n", a);
        
    fflush(stdin);

    printf("\nIntroduce una palabra: ");
    scanf("%s", &p);
    printf("Palabra: %s\n", p);
    getch();

}