#include <stdio.h>
#include <string.h>

struct Usuario {
    char login[20];
    char password[20];
};

int main() {
    struct Usuario usuarios[3];
    
    // Solicitar al usuario que ingrese los datos de los usuarios
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el login del usuario %d: ", i+1);
        scanf("%s", usuarios[i].login);
        
        printf("Ingrese la contraseña del usuario %d: ", i+1);
        scanf("%s", usuarios[i].password);
    }
    
    // Simulación de pantalla de login
    char login[20];
    char password[20];
    int intentos = 0;
    
    while (intentos < 3) {
        printf("Introduce tu login: ");
        scanf("%s", login);
        
        printf("Introduce tu password: ");
        scanf("%s", password);
        
        // Comprobar si el usuario y contraseña coinciden
        for (int i = 0; i < 3; i++) {
            if (strcmp(login, usuarios[i].login) == 0 && strcmp(password, usuarios[i].password) == 0) {
                printf("Bienvenido, %s!\n", usuarios[i].login);
                return 0;
            }
        }
        
        printf("Usuario o contraseña incorrectos. Por favor, intenta de nuevo.\n");
        intentos++;
    }
    
    printf("Has excedido el número máximo de intentos de inicio de sesión. La aplicación se cerrará.\n");
    return 0;
}