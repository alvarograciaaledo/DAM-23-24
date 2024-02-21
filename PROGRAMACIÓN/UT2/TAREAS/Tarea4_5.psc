Proceso sin_titulo
	
	Definir n, aux Como Entero;
	
	aux <- 12;
	
	Escribir 'Dame un numero hasta que aciertes.';
	Leer n;
	
	Mientras n <> aux Hacer
		Si n <> aux Entonces
			Escribir 'No has acertado, prueba otra vez.';
			Si n > aux Entonces
				Escribir 'El numero es mas bajo.';
			SiNo
				Escribir 'El numero es mas alto.';
			FinSi
			Escribir '****************';
			Escribir 'Dame un numero hasta que aciertes.';
			Leer n;
		FinSi
	FinMientras
	
	Escribir 'BIEEEEN HAS ACERTADO!!!!';
	
FinProceso
