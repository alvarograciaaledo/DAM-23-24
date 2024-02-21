Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable.
	Definir num Como Real;
	
	//Le pedimos al suario que le de un valor.
	Escribir 'Dale valor al numero: ';
	leer num;
	
	//Creamos nuestra condicion para comprobar cual se cumple
	Si num == 0 Entonces
		Escribir 'El numero es igual a cero.';
	SiNo
		Si num >= 100 Entonces
			Escribir 'El numero es mayor o igual que cien.';
		SiNo
			Escribir 'El numero es menor que cien.';
		FinSi
	FinSi
	
FinProceso
