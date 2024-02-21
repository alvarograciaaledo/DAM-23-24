/*Crea una estructura para guardar un login y contraseña de usuarios. Crea un array
de 3 usuarios. Ahora simularemos una pantalla de login, solicita al usuario que
introduzca login y password. Deberás comprobar si el usuario y password coincide
con alguno de los que tienes en el array de usuarios. Cómo máximo tiene 3 intentos
para hacer login en tu aplicación. Una vez haya entrado dale la bienvenida. Utiliza la
función strcmp de string.h para hacer las comparaciones.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct DATOS
{
    char name[100];
    char pass[100];
};

struct DATOS user[3];

void main()
{
    int intentos = 0;
    char login[100];
    char password[100];

    printf("\nREGISTRO DE USUARIO.");
    for (int i = 0; i < 3; i++)
    {
        printf("\nUSUARIO %i:", i + 1);
        printf("\nNOMBRE DE USUARIO: ");
        fflush(stdin);
        gets(user[i].name);
        printf("\nCONTRASENA (Usar mayus, minus y numeros) ");
        printf("\n> ");
        fflush(stdin);
        gets(user[i].pass);
    }

    printf("\n|       _____   ______  _____ ||     |");
    printf("\n|      |     | |      |   |   | |    |");
    printf("\n|      |     | |          |   |  |   |");
    printf("\n|      |     | |  ____    |   |   |  |");
    printf("\n|      |     | |      |   |   |    | |");
    printf("\n|_____ |_____| |______| __|__ |     ||");

    do
    {
        printf("\nNOMBRE DE USUARIO: ");
        fflush(stdin);
        gets(login);
        printf("\nCONTRASENA (Usar mayus, minus y numeros) ");
        printf("\n> ");
        fflush(stdin);
        gets(password);

        for (int i = 0; i < 3; i++)
        {
            if (strcmp(login, user[i].name) == 0 || strcmp(password, user[i].pass) == 0)
            {
                printf("\nBIENVENIDO %s.", login);
            }

            if (strcmp(login, user[i].name) == 1 || strcmp(password, user[i].pass) == 1)
            {
                printf("\nERROR - USUARIO NO VALIDO.");
                intentos++;
            }
        }
    } while (intentos < 3);
    
    if (intentos == 3)
    {
        printf("\nLIMITE DE INTENTOS AGOTADO (Vuelva a intentarlo mas tarde.)");
    }
}