#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para almacenar los datos de un empleado.
struct Empleado 
{
    int codigo;
    char nombre[51];
    float salario;
    struct Empleado* siguiente;
};

int main() 
{
    struct Empleado* primero = NULL;//Puntero para apuntar al primero.
    struct Empleado* ultimo = NULL;//Puntero para apuntar al ultimo.

    int opcion;//Variable para elegir opcion del menu.

    do 
    {
        //menu
        printf("\n  ____________________________________________________ ");
        printf("\n |                       MENU                         |");
        printf("\n |____________________________________________________|");
        printf("\n | 1. Dar de alta empleado.                           |");
        printf("\n | 2. Dar de baja empleado.                           |");
        printf("\n | 3. Listar empleados.                               |");
        printf("\n | 4. Media de los sueldos.                           |");
        printf("\n | 5. Salir.                                          |");
        printf("\n |____________________________________________________|\n");
        printf("\n - Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) 
        {
            case 1: 
            {
                struct Empleado *nuevoEmpleado = (struct Empleado*)malloc(sizeof(struct Empleado));//Reservamos memoria.
                printf("\nIngrese el codigo del empleado: ");
                scanf("%d", &(nuevoEmpleado->codigo));                                              //Pedimos el codigo

                // Verificar si el codigo ya existe
                struct Empleado *actual = primero;
                while (actual != NULL) 
                {
                    if (actual->codigo == nuevoEmpleado->codigo) 
                    {
                        printf("\nERROR - El codigo de empleado ya existe.\n");
                        free(nuevoEmpleado);
                        nuevoEmpleado = NULL;
                        break;
                    }
                    actual = actual->siguiente;
                }

                if (nuevoEmpleado != NULL) //Si no apunta a null, pedimos los datos restantes y ordenamos.
                {
                    printf("Ingrese el nombre del empleado: ");
                    fflush(stdin);
                    gets(nuevoEmpleado->nombre);
                    printf("Ingrese el salario del empleado: ");
                    fflush(stdin);
                    scanf("%f", &nuevoEmpleado->salario);

                    nuevoEmpleado->siguiente = NULL;

                    // Insertar empleado en orden
                    if (primero == NULL) 
                    {
                        primero = nuevoEmpleado;
                        ultimo = nuevoEmpleado;
                    } 
                    else if (nuevoEmpleado->codigo < primero->codigo) 
                    {
                        nuevoEmpleado->siguiente = primero;
                        primero = nuevoEmpleado;
                    } 
                    else if (nuevoEmpleado->codigo > ultimo->codigo) 
                    {
                        ultimo->siguiente = nuevoEmpleado;
                        ultimo = nuevoEmpleado;
                    } 
                    else //Si ya esta ordenado lo dejamos tal cual.
                    {
                        struct Empleado *anterior = primero;
                        actual = primero->siguiente;
                        while (actual != NULL) 
                        {
                            if (nuevoEmpleado->codigo < actual->codigo) 
                            {
                                nuevoEmpleado->siguiente = actual;
                                anterior->siguiente = nuevoEmpleado;
                                break;
                            }
                            anterior = actual;
                            actual = actual->siguiente;
                        }
                    }

                    printf("\nEmpleado dado de alta exitosamente.\n"); //Aviso.
                }
                break;
            }
            case 2: 
            {
                if (primero == NULL) 
                {
                    printf("\nERROR - No hay empleados registrados.\n");//Si no hay empleados se lo decimos al usuario.
                } 
                else 
                {
                    int codigo;//Variable para buscar el codigo del empleado.

                    printf("\nIngrese el codigo del empleado a dar de baja: ");
                    scanf("%d", &codigo);                                               //Pedimos el codigo del emple a borrar.

                    struct Empleado *anterior = NULL;
                    struct Empleado *actual = primero;

                    while (actual != NULL) 
                    {
                        if (actual->codigo == codigo) 
                        {
                            if (actual == primero) 
                            {
                                primero = actual->siguiente;
                            } else if (actual == ultimo) 
                            {
                                ultimo = anterior;
                                ultimo->siguiente = NULL;
                            } 
                            else 
                            {
                                anterior->siguiente = actual->siguiente;
                            }
                            free(actual);
                            actual = NULL;
                            printf("Empleado dado de baja exitosamente.\n");
                            break;
                        }
                        anterior = actual;
                        actual = actual->siguiente;
                    }

                    if (actual == NULL) 
                    {
                        printf("No se encontró un empleado con ese codigo.\n");
                    }
                }
                break;
            }
            case 3: 
            {
                if (primero == NULL) 
                {
                    printf("\nERROR - No hay empleados registrados.\n");//Si no hay empleados se lo decimos al usuario.
                } 
                else 
                {
                    printf("\nListado de empleados:\n");
                    struct Empleado *actual = primero;
                    while (actual != NULL) 
                    {
                        printf("Codigo: %d, Nombre: %s, Salario: %.2f$\n", actual->codigo, actual->nombre, actual->salario);
                        actual = actual->siguiente;
                    }
                }
                break;
            }
            case 4: 
            {
                if (primero == NULL) //Primero apunta a null.
                {
                    printf("\nERROR - No hay empleados registrados.\n");//Si no hay empleados se lo decimos al usuario.
                } 
                else //Primero no apunta a null.
                {
                    //VARIABLES DE CALCULO
                    float sumaSalarios = 0;
                    int contadorEmpleados = 0;

                    struct Empleado *actual = primero;//Estructura para coger los datos actuales

                    while (actual != NULL) //No apunta a null
                    {
                        sumaSalarios += actual->salario;//Sumamos
                        contadorEmpleados++;            //Aumento el contador
                        actual = actual->siguiente;     //Igualamos
                    }

                    float mediaSalarios = sumaSalarios / contadorEmpleados;//FORMULA

                    printf("\nLa media de los sueldos es: %.2f\n", mediaSalarios);//Mostramos el result.
                }
                break;
            }
            case 5: 
            {
                printf("Saliendo del programa...\n");//Salimos.
                break;
            }
            default: 
            {
                printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");//Aviso de error.
                break;
            }
        }

    } while (opcion != 5); //Bucle para que pare cuando opcion sea 5.

    // Liberar la memoria de los empleados
    struct Empleado *actual = primero;
    while (actual != NULL) 
    {
        struct Empleado *siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }

    return 0;
}

