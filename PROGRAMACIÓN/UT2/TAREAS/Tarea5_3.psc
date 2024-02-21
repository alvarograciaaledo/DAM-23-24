Proceso sin_titulo
	
	Definir n, aux como entero;
	
	aux <- 0;
	
	Repetir
		Escribir 'Indica valores enteros:';
		leer n;
		Si n <> 9999 Entonces
			aux <- aux + n;
		SiNo
			Escribir 'Total: ', aux;
		FinSi
	Hasta Que n == 9999
	
FinProceso
