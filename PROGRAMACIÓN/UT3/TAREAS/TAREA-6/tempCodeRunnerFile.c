/*
 * Crea un juego interactivo por terminal en el que tendrás que adivinar 
 * el resultado de diferentes
 * operaciones matemáticas aleatorias (suma, resta, multiplicación 
 * o división de dos números enteros).
 * - Tendrás 3 segundos para responder correctamente.
 * - El juego finaliza si no se logra responder en ese tiempo.
 * - Al finalizar el juego debes mostrar cuántos cálculos has acertado.
 * - Cada 5 aciertos debes aumentar en uno el posible número de cifras 
 *   de la operación (cada vez en un operando):
 *   - Preguntas 1 a 5: X (entre 0 y 9) operación Y (entre 0 y 9)
 *   - Preguntas 6 a 10: XX (entre 0 y 99) operación Y (entre 0 y 9)
 *   - Preguntas 11 a 15: XX operación YY
 *   - Preguntas 16 a 20: XXX (entre 0 y 999) operación YY
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int realizarOperacion(int num1, int num2, char operador) {
    float resultado;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
    }
    return resultado;
}

int main() {
    srand(time(NULL));

    int aciertos = 0;
    int cifrasOperando = 1;
    int tiempoLimite = 3;

    printf("¡Bienvenido al juego de adivinar operaciones matemáticas!\n");

    while (1) {
        int num1 = generarNumeroAleatorio(0, 9 * cifrasOperando);
        int num2 = generarNumeroAleatorio(0, 9);
        char operadores[4] = {'+', '-', '*', '/'};
        char operador = operadores[rand() % 4];
        int resultado = realizarOperacion(num1, num2, operador);

        printf("Calcula: %d %c %d\n", num1, operador, num2);
        sleep(tiempoLimite);

        int respuesta;
        printf("¡Tiempo terminado! Ingresa tu respuesta: ");
        scanf("%d", &respuesta);

        if (respuesta == resultado) {
            printf("¡Respuesta correcta!\n");
            aciertos++;
            if (aciertos % 5 == 0) {
                cifrasOperando++;
            }
        } else {
            printf("¡Respuesta incorrecta! El resultado era: %d\n", resultado);
            break;
        }
    }

    printf("Has acertado %d cálculos.\n", aciertos);

    return 0;
}