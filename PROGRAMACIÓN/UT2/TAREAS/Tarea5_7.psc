Proceso sin_titulo
	
	Definir numero, mayor, menor, suma, i Como Entero;
	
	mayor <- 0;
	menor <- 0;
	suma <- 0;
	
	Para i <- 1 Hasta 5 Hacer
		Escribir "Introduce el número ", i, ": ";
		Leer numero;
		
		Si i = 1 Entonces
			mayor <- numero;
			menor <- numero;
		Sino
			Si numero > mayor Entonces
				mayor <- numero;
			FinSi
			
			Si numero < menor Entonces
				menor <- numero;
			FinSi
		FinSi
		
		suma <- suma + numero;
	FinPara
	
	Escribir "El número mayor es: ", mayor;
	Escribir "El número menor es: ", menor;
	Escribir "La suma de todos los números introducidos es: ", suma;
	
FinProceso
