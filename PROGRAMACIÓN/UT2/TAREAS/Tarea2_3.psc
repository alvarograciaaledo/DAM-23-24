Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable.
	Definir num Como entero;
	
	//Le pedimos al suario que le de un valor.
	Escribir 'Dale valor al numero: ';
	leer num;
	
	//Creamos nuestra condicion para comprobar cual se cumple
	Si (num > 99 y num < 1000) o (num < -99 y num > -1000) Entonces
		Escribir 'El numero tiene tres digitos.';
	SiNo
		Escribir 'El numero no tiene tres digitos.';
	FinSi
	
FinProceso
