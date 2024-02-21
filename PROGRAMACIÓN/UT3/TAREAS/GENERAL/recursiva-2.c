#include <stdio.h>

void recursivo(int x)
{
    if (x>0)
    {
        recursivo(x - 1);
        printf("%i ", x);// 1 2 3 4 5
    }
}

int main()
{
    recursivo(5);
    return 0;
}