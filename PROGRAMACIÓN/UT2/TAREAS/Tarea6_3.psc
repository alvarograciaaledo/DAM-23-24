Proceso sin_titulo
	
    Definir numero, i, contador Como Entero;
	
    Escribir "Ingrese un n�mero entero mayor que uno: ";
    Leer numero;
	
    contador <- 0;
	
    Si numero > 1 Entonces
        Para i <- 2 Hasta numero/2 Hacer
            Si numero MOD i = 0 Entonces
                contador <- contador + 1;
            FinSi
        FinPara
		
        Si contador = 0 Entonces
            Escribir "El n�mero ", numero, " es primo.";
        Sino
            Escribir "El n�mero ", numero, " no es primo.";
        FinSi
    Sino
        Escribir "Error: el n�mero debe ser mayor que uno.";
    FinSi
	
FinProceso
