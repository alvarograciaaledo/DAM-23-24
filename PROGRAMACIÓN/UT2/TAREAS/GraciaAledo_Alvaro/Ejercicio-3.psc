Proceso Ejercicio3
	
	//Definimos las  variables necesarias.
	definir opcion, n, i, fact, opcionAnterior Como Entero;
	definir p Como Caracter;
	
	//Inicializamos las variables para evitar fallos.
	opcionAnterior <- 0; 
	fact <- 1;
	
	//Bucle para que se repita todo el rato el programa hasta que el user seleccione la opcion de salir.
	Repetir
		
		//Mostramos el menu con las opciones.
		Escribir ' _____________________________________ ';
		escribir '|               * MENU *              |';
		Escribir '| ____________________________________|';
		escribir '|                                     |';
		escribir '|   * 1. Factorial.                   |';
		escribir '|                                     |';
		escribir '|   * 2. Imprimir x veces.            |';
		escribir '|                                     |';
		escribir '|   * 3. Ultima opcion.               |';
		escribir '|                                     |';
		escribir '|   * 4. Salir                        |';
		escribir ' _____________________________________ ';
		
		//Le pesimos al usuario que seleccione una opcion.
		Escribir ' > Seleccione uana opcion: ';
		Leer opcion;
		
		//Menu para que se ejecuten las opciones.
		Segun opcion Hacer
			1:
				//Opcion que hace el factorial de un numero
				//Le pedimos al user un num entre 1 y 5.
				escribir 'Indica un numero del 1 al 5: ';
				Leer n;
				
				//Condicion para que el numero este entre 1 y 5.
				Si n >= 1 y n <= 5 Entonces
					
					//Ejecuta la funcion del factorial.
					Para i <- 1 Hasta n Hacer
						fact <- fact * i;
					Fin Para
					
					//Imprimimos el resultado.
					Escribir "El factorial de ", n, " es: ", fact;
					
				SiNo
					
					//Si da un valor erroneo le preguntamos de nuevo repetimos todo 1 vez mas, si da error de nuevo se sale.
					Escribir 'ERROR - DATO NO VALIDO.';
					Escribir '**********************************';
					escribir 'Indica un numero del 1 al 5: ';
					Leer n;		
					
					Si n >= 1 y n <= 5 Entonces
						
						Para i <- 1 Hasta n Hacer
							fact <- fact * i;
						Fin Para
						
						Escribir "El factorial de ", n, " es: ", fact;
					SiNo
						Escribir 'ERROR - no valido.';
					FinSi
					
				FinSi
				opcionAnterior <- 1;
			2:
				//Opcion que imprime una palabra x veces
				//Le pedimos la palabra.
				escribir 'Indica una palabra: ';
				leer p;
				//Le pedimos las veces que lo quiere imprimir.
				Escribir 'Indica las veces que la quieres imprimir: ';
				leer n;
				
				//Condicion para que las veces que lo imprima sea mas de 0.
				Mientras n <= 0 Hacer
					Escribir 'ERROR - DATO NO VALIDO.';
					Escribir '**********************************';
					Escribir 'Indica las veces que la quieres imprimir: ';
					leer n;
				FinMientras
				
				//Repite la palabra las veces que ha dicho el user mediante un PARA.
				Para i <- 1 Hasta n Con Paso 1 Hacer
					Escribir p;
				FinPara
				opcionAnterior <- 2;
			3:
				//Opcion que muestra la opcion anterior.
				//Menu con el que seleccionamos la opcion anterior
				Segun opcionAnterior Hacer
					1:
						escribir 'Factorial de un numero.';
					2:
						escribir 'Imprimir palabra x veces.';
					3:
						escribir 'Pediste saber la opción anterior.';
					0:
						Escribir 'Esta es tu primera opcion.';
					De Otro Modo:
						escribir 'Opcion no valida fue la anterior.';
				FinSegun
				opcionAnterior <- 3;
			4:
				//Opcion para salir.
				//Nos despedimos.
				escribir 'Saliendo del programa... ';
			De Otro Modo:
				//Dato erroneo si la opcion no esta entre 1 y 4.
				Escribir 'ERROR - Opcion no valida.';
		FinSegun
		Escribir ' ';
	Hasta Que opcion == 4
	
FinProceso
