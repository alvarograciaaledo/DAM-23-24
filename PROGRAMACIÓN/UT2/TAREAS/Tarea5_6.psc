Proceso sin_titulo
	
	Definir n1, n2, aux, contador Como Entero;
	
	aux <- 0;
	
	Escribir 'Dame el primer valor.';
	leer n1;
	Escribir 'Dame el segundo valor.';
	leer n2;
	Si n1 < n2 Entonces
		Para contador <- n1 Hasta n2 Con Paso 1 Hacer
			aux <-aux + contador;
			
		FinPara
	SiNo
		Escribir 'ADIOS';
	FinSi
	Escribir 'Total del sumatorio: ', aux; 
FinProceso
