#include <stdio.h> 

//NOMBRE Y APELLIDOS: Alvaro Gracia Aledo

int main(){
    
    int contaNum = 0, maxCero = 0, pares = 0, sumPar = 0; //CONTADORES Y FUNCIONES.
    int n, aux, salir = 0; //Datos user

    printf("\nDime un numero: ");
    scanf("%i", &aux);
    contaNum++;

    if (aux != 0 && aux % 2 == 0)
    {
        pares++;
        sumPar += aux;
    }
    if (aux > 0)
    {
        maxCero++;
    }
    
    do
    {
        printf("\nDime un numero: ");
        scanf("%i", &n);

        if (n < aux || n == aux)
        {
            salir = 1;
        }
        else
        {
            aux = n;
            contaNum++;
            if (aux != 0 && aux % 2 == 0)
            {
                pares++;
                sumPar += aux;
            }
            if (aux > 0)
            {
                maxCero++;
            }
        }
    } while (salir == 0);
    
    printf("\nTOTAL NUM: %i\n", contaNum);
    printf("\nTOTAL NUM > 0: %i\n", maxCero);
    printf("\nTOTAL PARES: %i\n", pares);
    printf("\nTOTAL SUMA PARES: %i\n", sumPar);

    return 0;
}