#include <stdio.h>

void main()
{

    struct FECHA
    {
        int dd;
        int mm;
        int aaaa;
    };

    struct DATOS
    {
        char TITULO[100];
        char ARTISTA[150];
        int CANCIONES;
        float PRECIO;
        struct FECHA fecha;
    };

    struct DATOS listaCD[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\nDATOS CD %i. ", i+1);
        printf("\nTITULO DISCO: ");
        fflush(stdin);
        gets(listaCD[i].TITULO);

        printf("\nARTISTA: ");
        fflush(stdin);
        gets(listaCD[i].ARTISTA);

        printf("\nNUM CANCIONES: ");
        scanf("%d", &listaCD[i].CANCIONES);

        printf("\nPRECIO: ");
        scanf("%f", &listaCD[i].PRECIO);

        printf("\nFECHA DE LANZAMIENTO (xx/xx/xx). ");
        printf("\nDIA: ");
        scanf("%d", &listaCD[i].fecha.dd);

        printf("\nMES: ");
        scanf("%d", &listaCD[i].fecha.mm);

        printf("\nANYO: ");
        scanf("%d", &listaCD[i].fecha.aaaa); 
    }

    for (int x = 0; x < 2; x++)
    {
        printf("\nCD %i. ", x+1);
        printf("\nTITULO DISCO: %s", listaCD[x].TITULO);
        printf("\nARTISTA: %s", listaCD[x].ARTISTA);
        printf("\nCANCIONES: %d", listaCD[x].CANCIONES);
        printf("\nPRECIO: %0.2f", listaCD[x].PRECIO);
        printf("\nFECHA DE LANZAMIENTO: %d/%d/%d\n ", listaCD[x].fecha.dd, listaCD[x].fecha.mm,listaCD[x].fecha.aaaa);
    }
}