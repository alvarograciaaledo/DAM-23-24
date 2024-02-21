Proceso sin_titulo
	
    Definir numero, i, contador Como Entero;
	
    Escribir "Ingrese un número entero mayor que uno: ";
    Leer numero;
	
    contador <- 0;
	
    Si numero > 1 Entonces
        Para i <- 2 Hasta numero/2 Hacer
            Si numero MOD i = 0 Entonces
                contador <- contador + 1;
            FinSi
        FinPara
		
        Si contador = 0 Entonces
            Escribir "El número ", numero, " es primo.";
        Sino
            Escribir "El número ", numero, " no es primo.";
        FinSi
    Sino
        Escribir "Error: el número debe ser mayor que uno.";
    FinSi
	
FinProceso
