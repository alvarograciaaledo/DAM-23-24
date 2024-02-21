#include <stdio.h>

void imprimeRecursivo(int x)
{
    if (x > 0)
    {
        printf("%i ", x);
        imprimeRecursivo(x - 1);    
    }
}

int main()
{
    imprimeRecursivo(5);
    return 0;
}

void imprime(int x)
{
    for (int i = x; i > 0; i--)
    {
        printf("%i ", i);
    }
}