Proceso sin_titulo
	
    Definir n, factorial, i Como Entero;
	
    Escribir "Ingrese un número entero mayor que cero: ";
    Leer n;
	
    factorial <- 1;
	
    Si n > 0 Entonces
        Para i <- 1 Hasta n Hacer
            factorial <- factorial * i;
        FinPara
        Escribir "El factorial de ", n, " es: ", factorial;
    Sino
        Escribir "Error: el número debe ser mayor que cero.";
    FinSi
	
FinProceso
