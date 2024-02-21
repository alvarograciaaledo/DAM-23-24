//LIBRERIAS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//Estructura con los datos.
struct datosComerciales
{
    char nombre[100];
    float comision;
};

//Funcion decorativa para mostrar las opciones.
void menu()
{
    printf("\n ____________________________________________");
    printf("\n|             INDIQUE SU OPCION              |");
    printf("\n|____________________________________________|");
    printf("\n|  1)  INSERTAR COMERCIAL.                   |");
    printf("\n|  2)  MOSTRAR COMERCIAL.                    |");
    printf("\n|  3)  COMERCIAL CON MENOR COMISION.         |");
    printf("\n|  4)  SALIR.                                |");
    printf("\n|____________________________________________|");
    printf("\nSELECCIONE UNA OPCION: ");
}

void main()
{
    //Variables
    struct datosComerciales comerciales[5]; //Array para guardar a los 5 comerciales.
    int contadorComerciales = 0; // Empieza con cero porque no tengo
    int opcion = 0, l = 1;
    int numeroComerciales = 0;
    float comisionMenor = 1000;

    while (opcion != 4) //Bucle para que pare cuando pulse 4.
    {
        menu(); //Llamamos al menu
        fflush(stdin);
        scanf("%i", &opcion); //recogemos la opcion.
        switch (opcion) //Switch con las opciones del menu.
        {
        case 1: //Insertar comercial
            if (numeroComerciales >= 5) //Condicion que limita el numero de comerciales.
            {
                printf("\nLIMITE DE COMERCIALES ALCANZADO."); //Imprime error.
            }
            else
            {
                //Pedimos el nombre
                printf("\n _________________________________________");
                printf("\n| --- INDIQUE LOS DATOS DEL COMERCIAL --- |");
                printf("\n|_________________________________________|");
                printf("\n > Nombre: ");
                fflush(stdin);
                gets(comerciales[contadorComerciales].nombre);

                if (contadorComerciales > 0) //Condicion para ir viendo el numero de comerciales que llevamos.
                {
                    for (int i = 0; i < contadorComerciales; i++)
                    {
                        if (strcmp(comerciales[contadorComerciales].nombre, comerciales[i].nombre) == 0) //Comparamos el nombre que introduce el user con los que tenemos y si existe se lo decimos.
                        {
                            printf("\nERROR - NOMBRE DE COMERCIAL YA ANADIDO."); //Indicamoes error
                            contadorComerciales--; //Retrocedemos el bucle.
                            l = 0; //Buleano
                        }
                    }
                }

                if (l == 1) // Buleano que usamos para seguir pidiendo datos o no.
                {
                    //Pedimos la comision
                    printf("\n > Comision: ");
                    fflush(stdin);
                    scanf("%f", &comerciales[contadorComerciales].comision);

                    if (comerciales[contadorComerciales].comision < 0 || comerciales[contadorComerciales].comision > 1000) //Si las comisiones no cumples las condiciones se lo decimos e indicamos el error.
                    {
                        printf("\nERROR - COMISION NO VALIDA."); //Mostramos el error.
                        contadorComerciales--; //Retrocedemos el contador para que no lo guarde con datos erroneos.
                    }
                }
            }
            //Aumentamos los contadores si todo sale bien
            numeroComerciales++;
            contadorComerciales++;
            break;

        case 2: //Mostrar datos
            if (contadorComerciales == 0) //Si no hay ningun comercial guardado se lo decimos.
            {
                printf("\nNO HAY COMERCIALES AUN."); //Mostramos el mensaje.
            }
            

            for (int i = 0; i < contadorComerciales; i++) //Bucle que muestra todos los datos hasta el momento.
            {
                printf("\n ____________________________________________");
                printf("\n|             DATOS COMERCIALES              |");
                printf("\n|____________________________________________|");
                printf("\n|  COMERCIAL %i                              |", i + 1);
                printf("\n|  - Nombre: %s                              |", comerciales[i].nombre);
                printf("\n|  - Comision: %0.2lf$                       |", comerciales[i].comision);
                printf("\n|____________________________________________|");
            }
            break;

        case 3: //Comerciales con menor comision.
            printf("\n--- COMERCIALES CON MENOR COMISION ---");
            if (contadorComerciales == 0) //Si no hay comerciales se lo decimos.
            {
                printf("\nVacio");
            }
            
            for (int i = 0; i < contadorComerciales; i++) //Bucle en el que asignamos el valor de la comision menor.
            {
                if (comerciales[i].comision < comisionMenor)
                {
                    comisionMenor = comerciales[i].comision;
                }                
            }
            for (int i = 0; i < contadorComerciales; i++) //Una vez sabemos la menor comnision vemos si algun comercial tiene la misma cantidad de comision.
            {
                if (comerciales[i].comision == comisionMenor)
                {
                    printf("\nNOMBRE: %s", comerciales[i].nombre);//Imprimimos.
                }
            }
            break;
        case 4: //Salir
            printf("\nSaliendo..."); //Nos despedimos.
            break;
        default:
            printf("\nERROR - opcion no valida."); //Seleccion errornea
            break;
        }
    }
}