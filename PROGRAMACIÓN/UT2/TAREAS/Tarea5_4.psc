Proceso sin_titulo
	
	definir n1, n2, aux como real;
	definir cont como entero;
	
	aux <- 0;
	cont <- 0;
	
	Mientras cont <> 6 Hacer
		Escribir ' ';
		escribir '****** CALCULADORA ******';
		escribir '* 1) SUMA               *';
		escribir '* 2) RESTA              *';
		escribir '* 3) DIVIDIR            *';
		escribir '* 4) MULTIPLICAR        *';
		escribir '* 5) RESTO              *';
		escribir '* 6) SALIR              *';
		escribir '*************************';
		Escribir 'Selecciona una opcion: ';
		leer cont;
		
		Segun cont Hacer
			1:
				escribir '****** SUMA ******';
				escribir 'Indica el valor 1:';
				leer n1;
				escribir 'Indica el valor 2:';
				leer n2;
				aux <- n1 + n2;
				escribir 'TOTAL: ', aux;
			2:
				escribir '****** RESTA ******';
				escribir 'Indica el valor 1:';
				leer n1;
				escribir 'Indica el valor 2:';
				leer n2;
				aux <- n1 - n2;
				escribir 'TOTAL: ', aux;
			3:
				escribir '****** DIVISION ******';
				escribir 'Indica el valor 1:';
				leer n1;
				escribir 'Indica el valor 2:';
				leer n2;
				Si n2 == 0 Entonces
					Escribir 'ERROR - Valor nulo.';
					Repetir
						escribir 'Indica el valor 2:';
						leer n2;
					Hasta Que n2 <> 0
				SiNo
					aux <- n1 / n2;
				FinSi
				aux <- n1 / n2;
				escribir 'TOTAL: ', aux;
			4:
				escribir '****** MULTIPLICACIÓN ******';
				escribir 'Indica el valor 1:';
				leer n1;
				escribir 'Indica el valor 2:';
				leer n2;
				aux <- n1 * n2;
				escribir 'TOTAL: ', aux;		
			5:
				escribir '****** RESTO ******';
				escribir 'Indica el valor 1:';
				leer n1;
				escribir 'Indica el valor 2:';
				leer n2;
				aux <- n1 mod n2;
				escribir 'TOTAL: ', aux;
			6:
				escribir '****** SALIR ******';
				
			De Otro Modo:
				Escribir 'ERROR - Opcion incorrecta.';
				Escribir ' ';
				Repetir
					escribir '****** CALCULADORA ******';
					escribir '* 1) SUMA               *';
					escribir '* 2) RESTA              *';
					escribir '* 3) DIVIDIR            *';
					escribir '* 4) MULTIPLICAR        *';
					escribir '* 5) RESTO              *';
					escribir '* 6) SALIR              *';
					escribir '*************************';
					Escribir 'Selecciona una opcion: ';
					leer cont;
					
					Segun cont Hacer
						1:
							escribir '****** SUMA ******';
							escribir 'Indica el valor 1:';
							leer n1;
							escribir 'Indica el valor 2:';
							leer n2;
							aux <- n1 + n2;
							escribir 'TOTAL: ', aux;
						2:
							escribir '****** RESTA ******';
							escribir 'Indica el valor 1:';
							leer n1;
							escribir 'Indica el valor 2:';
							leer n2;
							aux <- n1 - n2;
							escribir 'TOTAL: ', aux;
						3:
							escribir '****** DIVISION ******';
							escribir 'Indica el valor 1:';
							leer n1;
							escribir 'Indica el valor 2:';
							leer n2;
							Si n2 == 0 Entonces
								Escribir 'ERROR - Valor nulo.';
								Repetir
									escribir 'Indica el valor 2:';
									leer n2;
								Hasta Que n2 <> 0
							SiNo
								aux <- n1 / n2;
							FinSi
							aux <- n1 / n2;
							escribir 'TOTAL: ', aux;
						4:
							escribir '****** MULTIPLICACIÓN ******';
							escribir 'Indica el valor 1:';
							leer n1;
							escribir 'Indica el valor 2:';
							leer n2;
							aux <- n1 * n2;
							escribir 'TOTAL: ', aux;		
						5:
							escribir '****** RESTO ******';
							escribir 'Indica el valor 1:';
							leer n1;
							escribir 'Indica el valor 2:';
							leer n2;
							aux <- n1 mod n2;
							escribir 'TOTAL: ', aux;
						6:
							escribir '****** SALIR ******';
					FinSegun
				Hasta Que cont >= 1 y cont <= 6
		FinSegun
	FinMientras
FinProceso
