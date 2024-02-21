Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable
	Definir var Como caracter;
	
	//Pedimos al usuario que de un valor
	Escribir 'Indica el caracter.';
	leer var;
	
	//Creamos nuestra condicion para comprobar cual se cumple
	Si var == 'A' o var == 'a' Entonces
		Escribir 'El caracter es A';
	SiNo
		Si var == 'B' o var == 'b' Entonces
			Escribir 'El caracter No es A.';
		SiNo
			Escribir 'El caracter no es ni A ni B.';
		FinSi
	FinSi
	
FinProceso
