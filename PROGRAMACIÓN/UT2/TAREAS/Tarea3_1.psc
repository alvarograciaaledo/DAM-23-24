Proceso sin_titulo
	
	Definir num1, num2 Como real;
	Definir aux Como entero;
	
	Escribir '****** MENU ******';
	Escribir '* 1) SUMAR.      *';
	Escribir '* 2) RESTAR.     *';
	Escribir '* 3) SALIR.      *';
	Escribir '******************';
	Escribir 'Selecciona tu opción: ';
	Leer aux;
	
	Si aux == 3 Entonces
		Escribir 'Quieres salir?';
		Escribir '1 - SI   0 - NO';
		Leer aux;
			
		Si aux == 1 Entonces
			Escribir 'ADIOS.';
		SiNo
			Mientras aux <> 3 Hacer
				Escribir '****** MENU ******';
				Escribir '* 1) SUMAR.      *';
				Escribir '* 2) RESTAR.     *';
				Escribir '* 3) SALIR.      *';
				Escribir '******************';
				Escribir 'Selecciona tu opción: ';
				Leer aux;
					
				Segun aux Hacer
					1:
						Escribir '****** SUMA ******';
						Escribir 'VALOR 1:';
						Leer num1;
						Escribir 'VALOR 2:';
						Leer num2;
							
						num1 <- num1 + num2;
							
						Escribir 'TOTAL: ', num1;
					2:
						Escribir '****** RESTA ******';
						Escribir 'VALOR 1:';
						Leer num1;
						Escribir 'VALOR 2:';
						Leer num2;
							
						num1 <- num1 - num2;
							
						Escribir 'TOTAL: ', num1;
					De Otro Modo:
						Si aux == 3 Entonces
							Escribir 'ADIOS.';
						SiNo
							Escribir 'Valor no valido.';
						FinSi
				FinSegun	
			FinMientras	
		FinSi
	SiNo
		Mientras aux <> 3 Hacer	
			Segun aux Hacer
				1:
					Escribir '****** SUMA ******';
					Escribir 'VALOR 1:';
					Leer num1;
					Escribir 'VALOR 2:';
					Leer num2;
						
					num1 <- num1 + num2;
						
					Escribir 'TOTAL: ', num1;
						
				2:
					Escribir '****** RESTA ******';
					Escribir 'VALOR 1:';
					Leer num1;
					Escribir 'VALOR 2:';
					Leer num2;
						
					num1 <- num1 - num2;
						
					Escribir 'TOTAL: ', num1;
				De Otro Modo:
					Si aux == 3 Entonces
						Escribir 'ADIOS.';
					SiNo
						Escribir 'Valor no valido.';
					FinSi
			FinSegun
			
			Escribir '****** MENU ******';
			Escribir '* 1) SUMAR.      *';
			Escribir '* 2) RESTAR.     *';
			Escribir '* 3) SALIR.      *';
			Escribir '******************';
			Escribir 'Selecciona tu opción: ';
			Leer aux;
			
			Si aux == 3 Entonces
				Escribir 'ADIOS.';
			FinSi
			
		FinMientras
	FinSi
	
	
	
FinProceso
