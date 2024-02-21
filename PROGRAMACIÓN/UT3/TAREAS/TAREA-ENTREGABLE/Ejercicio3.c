//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Funcion que imprime todods los codigos.
void impCod(char codigos[][6], int numCod)
{
    for (int i = 0; i < numCod; i++) //Bucle para recorrer el array.
    {
        printf("\nCODIGO %i: %s", i, codigos[i]); //Imprime el codigo y los enumera.
    }
}

//Funcion que comprueba que el codigo cumplia con todos los requisitos.
int valCod(char codigo[])
{
    if (strlen(codigo) == 5) //Condicion para ver que el codigo tiene el numero de caracteres correcto.
    {
        if ((codigo[0] >= '0' && codigo[0] <= '9') && (codigo[1] >= '0' && codigo[1] <= '9')) //Condicion que comprueba que los dos primeros numeros estan entre el 0 y el 9.
        {
            if (codigo[2] == '-') //Comprueba que el tercer caracter es un guion.
            {
                if (codigo[3] == 'X' || codigo[3] == 'Z') //Condicion que mira si el 4 caracter es o una X o una Z y que estan en mayusculas.
                {
                    if (codigo[4] >= '0' && codigo[4] <= '9') //Comprueba que el ultimo caracter vuelve a ser un  numero.
                    {
                        return 1; //Devuelve 1.
                    }
                    else
                    {
                        printf("\nERROR - Caracter invalido."); //Notifica el error y devuelve 0.
                        return 0;
                    }
                }
                else
                {
                    printf("\nERROR - Caracter invalido."); //Notifica el error y devuelve 0.
                    return 0;
                }
            }
            else
            {
                printf("\nERROR - Caracter invalido."); //Notifica el error y devuelve 0.
                return 0;    
            }
        }
        else
        {
            printf("\nERROR - Caracter invalido."); //Notifica el error y devuelve 0.
            return 0;
        }
    }
    else
    {
        printf("\nLongitud erronea"); //Notifica el error y devuelve 0.
        return 0;
    }
}

//Main del programa.
int main()
{
    //Variables.
    char codigos[4][6];
    char Cod [6];
    int totalCod = 0, existe = 0;

    //Explicacion de las condiciones del codigo.
    printf("\n __________________________________________________________________________");
    printf("\n|                    --- CONDICIONES DEL CODIGO ---                        |");
    printf("\n|__________________________________________________________________________|");
    printf("\n| > Los dos primeros digitos deben estar compuestos por numeros del 0 al 9.|");
    printf("\n| > El tercer caracter debe ser un guion -> (-)                            |");
    printf("\n| > El cuarto caracter debe ser una 'X' o una 'Z' -> (MAYUSCULAS)          |");
    printf("\n| > Y el ultimo caracter un numero del 0 al 9.                             |");
    printf("\n|__________________________________________________________________________|\n");
            
    printf("\n _________________________________________");
    printf("\n|     $$$ 1ND1QU3 SU C0D1G0 H4CK3R $$$    |");
    printf("\n|_________________________________________|");

    //Bucle para que se ejecute todo hasta que haya 4 codigos.
    while (totalCod < 4)
    {
        if (totalCod >= 4) //Condicion que indica el maximo de codigos.
        {
            printf("\nMAXIMO DE CODIGOS ALCANZADOS."); //Muestra el error.
        }
        else
        {
            //Pedimos el codigo al user.
            printf("\n > Cod: ");
            fflush(stdin);
            gets(Cod);
            
            if (valCod(Cod)) //Si se cumple la funcion de valCod entra en el bucle.
            {
                for (int i = 0; i < totalCod; i++) //Bucle para ver todos los codigos.
                {
                    if (strcmp(codigos[i], Cod)==0) //Compara 1 codigo con todos los demas.
                    {
                        existe = 1; //Si esta repetido cambiamos esta variable.
                        break;
                    }
                }

                if (!existe) //En funcion del valor de la variable existe si se cumple se ejecuta y si no salta un error.
                {
                    strcpy(codigos[totalCod], Cod); //Guarda el codigo ya que es correcto.
                    totalCod++; //Aumenta el contador de codigos.
                }
                else
                {
                    printf("\nCODIGO EXISTENTE."); //Error.
                    existe = 0; //Reiniciamos variable.
                }
            }
            else 
            {
                printf("\nEl codigo no cumple con el formato adecuado.\n"); //Si no se cumple valCod nos indica el error.
            }
        } 
    }
    //Imprimimos los codigos.
    printf("--- LOS CODIGOS ---");
    impCod(codigos, totalCod);
    return 0;
}