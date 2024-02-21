Proceso sin_titulo
	
	definir n, total como real;
	definir aux como entero;
	definir asg como caracter;
	
	total <- 0;
	aux <- 1;
	
	Escribir 'Indica la asignatura.';
	leer asg;
	Repetir
		Escribir ' Evaluación ', aux;
		Escribir 'Indica la nota: ';
		leer n;
		Si n < 0 o n > 10 Entonces
			Escribir 'ERROR- Nota no valida.';
			Mientras n < 0 o n > 10 Hacer
				Escribir ' ';
				Escribir ' EVALUACIÓN ', aux;
				Escribir 'Indica la nota: ';
				leer n;
			FinMientras
			total <- total + n;
		SiNo
			total <- total + n;
		FinSi
		aux <- aux + 1;
	Hasta Que aux > 3
	total <- total / 3;
	Escribir 'Media de ', asg, ': ', total;
FinProceso
