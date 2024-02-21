#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cliente                                      //Estructura donde guardamos los datos de los clientes.
{
    char nombre[50];                                        //Array para guardar el nombre del cliente.
    float totalCarrito;                                     //Float para el precio de la compra.
    struct Cliente *siguiente;                              //Puntero que usamos para apuntar al siguiente struct cliente.
} Cliente;

Cliente *primero = NULL;                                   //Puntero que apunta al primero.
Cliente *ultimo = NULL;                                    //Puntero que apunta al ultimo.

int main() 
{
    int opcion;                                            //Variable con la que elegimos la opcion del menu.

    do 
    {
        //MENU que muestra las opciones
        printf("\n----- MENU -----\n");
        printf("1) Entrar en la cola\n");
        printf("2) Salir de la cola\n");
        printf("3) Salir\n");
        printf("-------------------");
        printf("\nSeleccion: ");
        fflush(stdin);
        scanf("%i", &opcion);                              //Pedimos que indique la opcion.

        switch (opcion) 
        {
            case 1: 
            {
                Cliente *nuevoCliente = (Cliente *) malloc (sizeof(Cliente));//Reservamos memoria del tipo struct cliente.
                printf("\nIngrese el nombre del cliente: ");
                scanf("%s", nuevoCliente->nombre);                           //Pedimos el nombre del usuario.
                printf("Ingrese el total del carrito de compra: ");
                scanf("%f", &(nuevoCliente->totalCarrito));                  //Pedimos el total de la compra.

                if (nuevoCliente->totalCarrito > 0)                          //Comprobamos que el precio no es menor o igual que 0.
                {
                    nuevoCliente->siguiente = NULL;                         //El siguiente lo ponemos a nullo.

                    if (primero == NULL)                                    //Si primero es null.
                    {
                        primero = nuevoCliente;                             //Primero es igual que el nuevo cliente.
                        ultimo = nuevoCliente;                              //Y ultimo en igual a nuevocliente.
                    } 
                    else                                                    //Si primero no es null.
                    {
                        ultimo->siguiente = nuevoCliente;                   //ultimo.siguiente es igual al nuevo cliente.
                        ultimo = nuevoCliente;                              //Y ultimo es igual al nuevo cliente.
                    }

                    printf("\nCliente agregado a la cola.\n");              //Indicamos que el cliente se guarda bien.

                    Cliente *actual = primero;                              //El cliente actual es igual al struct primero.
                    printf("\nCola de clientes:\n");                        //TITULO

                    while (actual != NULL)                                  //Bucle que muestra todos los clientes hasta que uno de ellos apunte a null.
                    {
                        printf("Nombre: %s, Total del carrito: %.2f\n", actual->nombre, actual->totalCarrito);      //Imprime nombre y precio total.
                        actual = actual->siguiente;                         //actual apunta al actual siguiente.
                    }
                }
                else
                {
                    printf("\nERROR - Saldo no valido.");                   //Si el saldo es invalido.
                }
                break;
            }
            case 2: 
            {
                if (primero == NULL)                                        //Si el puntero primero apunta a null indicamos que la lista esta vacia.
                {
                    printf("\nLa cola esta vacia.\n");                      //Indicamos que a lista esta vacia.
                } 
                else 
                {
                    Cliente *clienteSaliente = primero;                     //Hacemos el puntero para el que sale.
                    primero = primero->siguiente;                           //El puntero primero apunta al siguiente.

                    printf("\nCliente saliente: %s\n", clienteSaliente->nombre);    //Mostramos los datos del cliente que sale.
                    free(clienteSaliente);                                          //Hacemos un free para liberar espacio.

                    if (primero == NULL)                                            //Condicion de Si primero apunta a null.
                    {
                        ultimo = NULL;                                              //Ultimo lo ponemos a null.
                        printf("La cola se ha quedado vacía.\n");                   //Indicamos que ya esta vacia la lista.
                    }

                    Cliente *actual = primero;                                      //Puntero de actual que es igual al puntero primero.
                    printf("\nCola de clientes:\n");

                    while (actual != NULL)                                          //Bucle que muestra todos los clientes hasta que uno de ellos apunte a null.
                    {
                        printf("Nombre: %s, Total del carrito: %.2f\n", actual->nombre, actual->totalCarrito);  //Imprime nombre y precio total.
                        actual = actual->siguiente;                                 //actual apunta al actual siguiente.
                    }
                }
                break;
            }
            case 3:
                printf("\nSaliendo del programa.\n");                               //Indicamos la salida del programa.
                break;
            default:
                printf("\nERROR - Opcion invalida.\nIntente nuevamente.\n");        //Indicamos que es una opcion invalida.
                break;
        }
    } while (opcion != 3);                                                          //Bucle que se repite hasta que la opcion del menu sea la 3.
    

    return 0;
}
