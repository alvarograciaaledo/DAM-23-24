/*Ejercicio: Modifica el ejercicio anterior. Ahora vamos a tener un array de tipo struct
producto de tamaño 3. Asigna los valores a cada posición del array ayudándote de la
función inicializar(). Para finalizar, recorre el array e imprime todos sus valores.
#include <stdio.h>

struct producto
{
    int codigo;
    char descripcion[40];
    float precio;
};

struct producto inicializar()
{
    struct producto prod;
    printf("\nIngrese el codigo del producto: ");
    scanf("%i", &prod.codigo);
    fflush(stdin);
    printf("\nIngrese la descripcion: ");
    gets(prod.descripcion);
    fflush(stdin);
    printf("\nIngrese el precio del producto: ");
    scanf("%f", &prod.precio);
    fflush(stdin);
};

void main()
{
    struct producto producto; 
    producto = inicializar();
}
*/
#include <stdio.h>

struct producto
{
    int codigo;
    char descripcion[40];
    float precio;
};

struct producto inicializar()
{
    struct producto prod;
    printf("\nIngrese el codigo del producto: ");
    scanf("%i", &prod.codigo);
    fflush(stdin);
    printf("\nIngrese la descripcion: ");
    gets(prod.descripcion);
    fflush(stdin);
    printf("\nIngrese el precio del producto: ");
    scanf("%f", &prod.precio);
    fflush(stdin);
    return prod;
};

void imprime(struct producto productos[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nProducto %i", i+1);
        printf("\nCODIGO: %i", productos[i].codigo);
        printf("\nDESCRIPCION: %s", productos[i].descripcion);
        printf("\nPRECIO: %0.2lf$", productos[i].precio);
    }
}

void main()
{
    struct producto productos[3];
    for (int i = 0; i < 3; i++)
    {
        productos[i] = inicializar();
    }

    imprime(productos);  
}