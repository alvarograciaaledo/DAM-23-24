Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable
	Definir num Como entero;
	
	//Pedimos al usuario que de un valor
	Escribir 'Dale un valor al numero.';
	leer num;
	
	//Creamos la condicion para combrobar cual se cumple.
	Si num == 0 Entonces
		Escribir 'El numero es igual a cero.';
	SiNo
		Si num > 0 Entonces
			Escribir 'El numero es positivo.';
		SiNo
			Escribir 'El numero es negativo.';
		FinSi
	FinSi
	
FinProceso
