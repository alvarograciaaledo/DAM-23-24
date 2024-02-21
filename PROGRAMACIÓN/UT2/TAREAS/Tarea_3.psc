Proceso sin_titulo
	
	// **** Información del programador ****
	// NOMBRE: Álvaro Gracia Aledo
	// FECHA: 21/09/2023
	// *************************************
	
	//Definimos la variable
	Definir num1, num2, aux Como entero;
	
	//Pedimos al usuario que de un valor
	Escribir '****** MENU ******';
	Escribir '1. SUMA';
	Escribir '2. RESTA';
	Escribir 'Indica tu opcion.';
	
	leer aux;
	
	Segun aux Hacer
		1:
			Escribir 'Dame el valor 1.';
			Leer num1;
			Escribir 'Dame el valor 2.';
			Leer num2;
			
			aux <- num1 + num2;
			
			Escribir 'TOTAL: ', aux;
		2:
			Escribir 'Dame el valor 1.';
			Leer num1;
			Escribir 'Dame el valor 2.';
			Leer num2;
			
			aux <- num1 - num2;
			
			Escribir 'TOTAL: ', aux;
		De Otro Modo:
			Escribir 'ERROR - Dato no valido';
	FinSegun
FinProceso
