Proceso sin_titulo
	
	Definir n Como Entero;
	
	Escribir 'Dale un valor al numero.';
	Leer n;
	
	Si n == 0 Entonces
		Repetir
			Escribir 'ERROR - valor no valido.';
			Escribir 'Dale un valor al numero.';
			Leer n;
		Hasta Que n <> 0
		Si n < 0 Entonces
			Mientras n <= 0 Hacer
				Escribir 'VALOR: ', n;
				Escribir '*******************';
				n <- n +1;
			FinMientras
		SiNo
			Mientras n >= 0 Hacer
				Escribir 'VALOR: ', n;
				Escribir '*******************';
				n <- n -1;
			FinMientras
		FinSi
	SiNo
		Si n < 0 Entonces
			Mientras n <= 0 Hacer
				Escribir 'VALOR: ', n;
				Escribir '*******************';
				n <- n +1;
			FinMientras
		SiNo
			Mientras n >= 0 Hacer
				Escribir 'VALOR: ', n;
				Escribir '*******************';
				n <- n -1;
			FinMientras
		FinSi
	FinSi
	

	
FinProceso
