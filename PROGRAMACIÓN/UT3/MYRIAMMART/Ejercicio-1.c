#include <stdio.h> 

//MYRIAM MARTINEZ MANZNARES:

int main(){
    
    int menor=0,num,salir=0,totalNum=0,totalMayor=0,totalPares=0,sumPares=0;
    printf("Dime un numero: ");
    fflush(stdin);
    scanf("%d", &menor);
    printf("\n");
    totalNum++;
    if(menor != 0 && menor%2 == 0){
        totalPares++;
        sumPares += menor;
    }
    if(menor > 0){
        totalMayor++;
    }
    do
    {
        printf("Dime un numero: ");
        fflush(stdin);
        scanf("%d", &num);
        printf("\n");
        if (num < menor || num == menor){
            salir = 1;
        }else{
            menor = num;
            totalNum++;
            if(num != 0 && num%2 == 0){
                totalPares++;
                sumPares += num;
            }
            if(num > 0){
                totalMayor++;
            }
        }
    }while (salir == 0);
    printf("RESUMEN\nTotal de numeros introducidos: %d\nTotal de numeros mayores que 0: %d\nTotal de numeros pares: %d\nSuma de valores pares: %d\n",totalNum,totalMayor,totalPares,sumPares);
    return 0;
}