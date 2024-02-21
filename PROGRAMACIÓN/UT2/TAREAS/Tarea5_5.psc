Proceso sin_titulo
	
	definir n como real;
	
	Escribir 'Indica la nota y te digo que tal.';
	leer n;
	
	Si n < 0 o n > 10 Entonces
		Escribir 'ERROR - Nota no valida.';
		Repetir
			Escribir ' ';
			Escribir 'Indica la nota.';
			leer n;
			Si n >= 0 y n <= 4.99 Entonces
				Escribir 'SUSPENSO';
			SiNo
				Si n >= 5 y n <= 6.99 Entonces
					Escribir 'APROBADO';
				SiNo
					Si n >= 7 y n <= 8.99 Entonces
						Escribir 'NOTABLE';
					SiNo
						Si n >= 9 y n <= 9.49 Entonces
							Escribir 'SOBRESALIENTE';
						SiNo
							Si n >= 9.50 y n <= 10 Entonces
								Escribir 'MENCION ESPECIAL';
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		Hasta Que n >= 0 y n <= 10
	SiNo
		Si n >= 0 y n <= 4.99 Entonces
			Escribir 'SUSPENSO';
		SiNo
			Si n >= 5 y n <= 6.99 Entonces
				Escribir 'APROBADO';
			SiNo
				Si n >= 7 y n <= 8.99 Entonces
					Escribir 'NOTABLE';
				SiNo
					Si n >= 9 y n <= 9.49 Entonces
						Escribir 'SOBRESALIENTE';
					SiNo
						Si n >= 9.50 y n <= 10 Entonces
							Escribir 'MENCION ESPECIAL';
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinProceso
