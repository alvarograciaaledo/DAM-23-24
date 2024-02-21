Proceso sin_titulo
	
	definir num1, num2, aux como entero;
	
	Escribir 'Que tabla quieres ver?';
	leer num1;
	num2 <- 0;
	
	Repetir
		Si num1 >= 0 y num1 <= 10 Entonces
			Escribir 'TABLA DEL ', num1;
			Repetir
				Escribir '******************';
				aux <- num1 * num2;
				Escribir num1, ' x ', num2, ' = ', aux;
				num2 <- num2 + 1;
			Hasta Que num2 > 10
		SiNo
			Escribir 'ERROR -Valor nulo, Establezca un numero entre 0 y 10.';
			Escribir ' ';
			Mientras num1 < 0 o num1 > 10 Hacer
				Escribir 'Que tabla quieres ver?';
				leer num1;
			FinMientras
			Escribir ' ';
			Escribir 'TABLA DEL ', num1;
			Repetir
				Escribir '******************';
				aux <- num1 * num2;
				Escribir num1, ' x ', num2, ' = ', aux;
				num2 <- num2 + 1;
			Hasta Que num2 > 10
		FinSi
	Hasta Que num1 >= 0 y num1 <= 10
	
FinProceso
