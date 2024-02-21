Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	//Definimos las variables
	Definir num Como real;
	Definir asig Como Caracter;
	
	//Pedimos al usuario que de un valor y un nombre.
	Escribir 'Indica el nombre de la asignatura.';
	leer asig;
	Escribir 'Indica la nota.';
	leer num;
	
	//Creamos nuestra condicion para comprobar cual se cumple
	Si num >= 5 y num <=10 Entonces
		Escribir 'APROBADO';
	SiNo
		Si num >= 0 y num < 5 Entonces
			Escribir 'SUSPENSO';
		SiNo
			Escribir 'NOTA NO VALIDA.';
		FinSi
	FinSi
	
FinProceso
