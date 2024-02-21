/*Crea un programa que solicite al usuario lo que gana por hora y las horas que ha
trabajado. El programa calcula el sueldo del usuario = sueldo por hora * horas
trabajadas.
Utiliza una función que imprima un mensaje de bienvenida al usuario.
Utiliza otra función para calcular el sueldo e imprimirlo por pantalla. Esta función
recibe como parámetros las cantidades introducidas por el usuario (sueldo por hora
y horas trabajadas). No devuelve nada, simplemente imprime el resultado por
pantalla.*/
void welcome()
{
    printf("\nBIENVENIDO AL PROGRAMA!!!");
}
void calcuSueldo(float h, float s)
{
    float total = h * s;
    printf("\nSUELDO DIARIO: %0.2f", total);
}

void main()
{
    float horas, sueldo;

    welcome();
    printf("\nVAMOS A CALCULAR TU SUELDO.");
    printf("\nINDICA LAS HORAS TRABAJADAS: ");
    scanf("%f", &horas);
    printf("\nINDICA EL SUELDO POR HORA: ");
    scanf("%f", &sueldo);

    calcuSueldo(horas, sueldo);

}