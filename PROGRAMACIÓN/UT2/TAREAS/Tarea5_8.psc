Proceso sin_titulo
	
	Definir n, pos, neg, cer, i, conta Como Entero;
	
	pos <- 0;
	neg <- 0;
	cer <- 0;
	
	Escribir 'Dime cuanto valores vas a introducir.';
	leer conta;
	
	Para i <- 1 Hasta conta Con Paso 1 Hacer
		Escribir 'INDICA EL VALOR ', i, ' : ';
		leer n;
		Si n = 0 Entonces
			cer <- cer + 1;
		SiNo
			Si n > 0 Entonces
				pos <- pos + 1;
			SiNo
				neg <- neg + 1;
			FinSi
		FinSi
	FinPara
	
	Escribir 'Ceros: ', cer;
	Escribir 'Numeros positivos: ', pos;
	Escribir 'Numeros negativos: ', neg;

FinProceso
