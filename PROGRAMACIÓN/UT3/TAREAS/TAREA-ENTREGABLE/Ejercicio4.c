#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct datosTaxis
{
    int nTaxi;
    int x;
    int y;
};

struct datosTaxis generaTaxi(int n)
{
    struct datosTaxis coche;

    coche.nTaxi = n;
    coche.x = rand() % 101;
    coche.y = rand() % 101;
    return coche; 
}

void calculaDistancia(int x1, int y1, int x2, int y2, float *distancia) 
{
    *distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void main()
{
    srand(time(0));
    struct datosTaxis taxis[10];
    
    for (int i = 0; i < 10; i++) {
        taxis[i] = generaTaxi(i + 1);
    }

    printf(" ______________________________\n");
    printf("|    -----  ----   | /  ___    |\n");
    printf("|      |   |____|   /    |     |\n");
    printf("|      |   |    |  / |  _|_    |\n");
    printf("|                              |\n");
    printf("|           CARTAGENA          |\n");
    printf("|______________________________|\n");

    for (int i = 0; i < 10; i++)
    {
        printf("> Taxi %d - Coordenadas: (%d, %d)\n", taxis[i].nTaxi, taxis[i].x, taxis[i].y);
    }
    
    int x, y;
    printf("\nIngrese las coordenadas (x, y).\n");
    printf("Eje X: ");
    scanf("%d", &x);
    printf("Eje Y: ");
    scanf("%d", &x);

    float distanciaMinima = -1;
    int taxiMasCercano = -1;

    for (int i = 0; i < 10; i++) 
    {
        float distancia;

        calculaDistancia(x, y, taxis[i].x, taxis[i].y, &distancia);

        printf("> Taxi %d - Distancia: %f\n", taxis[i].nTaxi, distancia);

        if (distanciaMinima == -1 || distancia < distanciaMinima) 
        {
            distanciaMinima = distancia;
            taxiMasCercano = taxis[i].nTaxi;
        }
    }
    
    printf("\nEl taxi mas cercano es el %d\n", taxiMasCercano);
    printf("Coordenadas: (%d, %d)\n", taxis[taxiMasCercano - 1].x, taxis[taxiMasCercano - 1].y);

}