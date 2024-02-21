Proceso sin_titulo
	
	Definir n, max, rep, i, conta Como Entero;
	
	Escribir 'Dime cuanto valores vas a introducir.';
	leer conta;
	
	Escribir 'INDICA EL VALOR ', 1, ' : ';
	leer n;
	
	max <- n;
	rep <- 1;
	
	Para i <- 2 Hasta conta Con Paso 1 Hacer
		Escribir 'INDICA EL VALOR ', i, ' : ';
		leer n;
		Si n > max Entonces
			max <- n;
			rep <- 1;
		sino 
			Si n == max Entonces
				rep <- rep + 1;
			FinSi
		FinSi
	FinPara
	
	Escribir 'Numeros mas alto: ', max;
	Escribir 'Numero de veces repetido: ', rep;
	
FinProceso
