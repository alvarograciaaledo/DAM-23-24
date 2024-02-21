Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable
	Definir num Como entero;
	
	//Pedimos al usuario que de un valor
	Escribir 'Indica el valor del num.';
	leer num;
	
	//Creamos nuestra condicion para comprobar cual se cumple
	Si num == 0 Entonces
		Escribir 'El numero es cero';
	SiNo
		Si num == 2 Entonces
			Escribir 'Resultado: ', num * 3;
		SiNo
			Escribir 'NO ES NI 0 NI 2';
		FinSi
	FinSi
	
FinProceso
