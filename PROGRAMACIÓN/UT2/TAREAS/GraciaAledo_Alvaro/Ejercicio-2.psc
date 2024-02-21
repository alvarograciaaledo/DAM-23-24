Proceso Ejercicio
	
	//Definimos todas las variables que vamos za usar para un correcto funcionamiento.
	definir n, cont, i, contaCero, contaPar, contaImpar Como Entero;
	
	//Declaramos las variables necesarias al inicio para evitar fallos del programa.
	contaImpar <- 0;
	contaCero <- 0;
	contaPar <- 0;
	i <- 0;
	
	//Le preguntamos al usuario cuantos datos va a introducir.
	Escribir 'Cuantos numeros vas a dar?';
	leer cont;
	
	//Bucle para que se repita mientras el usuario de un valor no valido en la pregunta anterior.
	Mientras cont < 0 Hacer
		
		//Le indicamos el error y le volvemos a hacer la pregunta.
		Escribir 'ERROR - Dato no valido.';
		Escribir '************************';
		Escribir 'Cuantos numeros vas a dar?';
		leer cont;
	FinMientras
	
	//Bucle que se repetira hasta que la variable i coincida con cel numero de datos que nos dijo el user anteriormente.
	Para i <- 1 Hasta cont Con Paso 1 Hacer
		
		//Le pedimos al user que nos de un valor, asi hasta que se cumpla el bucle.
		Escribir '************************';
		Escribir 'Indica el valor ', i;
		leer n;
		
		//Si el usuaio introduce un valor menor que cero le mostramos un error y le repetimos la pregunta, asi hasta que lo haga bien.
		Mientras n < 0 Hacer
			
			//Le indicamos el error y le volvemos a hacer la pregunta.
			Escribir 'ERROR - Dato no valido.';
			Escribir '************************';
			Escribir 'Indica el valor ', i;
			leer n;
		FinMientras
		
		//Si el numero es 0 sumamos 1 al contador de ceros.
		Si n == 0 Entonces
			
			//Contador que nos dira al final cuantos ceros hay.
			contaCero <- contaCero + 1;
		SiNo
			//Si el numero que introduce lo dividimos entre 2 y da cero sumamos uno al contador de pares.
			Si n mod 2 = 0 Entonces
				//Contador que nos dice cuantos pares hay.
				contaPar <- contaPar + n;
			SiNo
				//Si no se cumple la condicion anterior sumamos 1 a los impares.
				Si n mod 2 <> 0 Entonces
					//Contador que nos dice cuantos impares hay.
					contaImpar <- contaImpar + n;
				FinSi
			FinSi
		FinSi
		
	FinPara
	
	//Imprimimos los datos se los contadores.
	Escribir 'TOTAL DE CEROS: ', contaCero;
	Escribir 'SUMA DE PARES: ', contaPar;
	Escribir 'SUMA DE IMPARES: ', contaImpar;
	
FinProceso
