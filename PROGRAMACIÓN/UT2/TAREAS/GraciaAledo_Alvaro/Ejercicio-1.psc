Proceso Ejercicio1
	
	//Definimos todas las variables que vamos za usar para un correcto funcionamiento.
	Definir nAlumnos, x, aprobado, suspenso como entero;
	Definir nExamen, nPracticas, nPositivos, nEvaluacion, totalPracticas, totalExamen, totalPositivos, totalEvaluacion, nMediaPracticas, nMediaFinal Como Real;
	
	//Declaramos las variables necesarias al inicio para evitar fallos del programa.
	totalPracticas <- 0;
	nPracticas <- 0;
	nPositivos <- 0;
	nExamen <- 0;
	totalExamen <- 0;
	totalPositivos <- 0;
	totalEvaluacion <- 0;
	aprobado <- 0;
	suspenso <- 0;
	x <- 0;
	
	//Le solicitamos al usuario que nos diga cuantos alumnos va a introducir, para que el bucle se ejecute ese numero de veces.
	Escribir 'Cuantos alumnos vas a introducir?';
	Leer  nAlumnos;
	
	//Bucle  para que se ejecute el programa tantas veces como alumnos diga el usuario.
	Repetir
		//esta condicion sirve para asegurarnos de que el numero de alumnos es mayor que 0, ya que si no es asi no funcionaria el programa.
		Si nAlumnos > 0 Entonces
			//Solicitamos la nota del examen al usuaio.
			Escribir 'Indica la nota del examen: ';
			Leer nExamen;
			
			//Condicional para comprobar que la nota se encuentra entre 0 y 10. Si se cumple pasa al siguiente punto.
			Si nExamen >= 0 y nExamen <= 10 Entonces
				
				//Solicitamos la nota de elas practicas.
				Escribir 'Indica la nota de la practica: ';
				Leer nPracticas;
				
				//Condicional para comprobar que la nota se encuentra entre 0 y 10. Si se cumple pasa al siguiente punto.
				Si nPracticas >= 0 y nPracticas <= 10 Entonces
					
					//Solicitamos el numero de positivos.
					Escribir 'Indica los positivos: ';
					Leer nPositivos;
					
					//Condicional con el que si el numero de positivos es menor de cero lo dejamos en cero para que no reste nota.
					Si nPositivos < 0 Entonces
						nPositivos <- 0;
					FinSi
				FinSi
				
				//Condicional con el que si la nota de las practicas es menor de cero lo dejamos en cero para que no reste nota y si es mayor de 10 lo deje en 10.
				Si nPracticas < 0 Entonces
					nPracticas <- 0;
				SiNo
					Si nPracticas > 10 Entonces
						nPracticas <- 10;
					FinSi
				FinSi
			FinSi
			
			//Condicional con el que si la nota del examen es menor de cero lo dejamos en cero para que no reste nota y si es mayor de 10 lo deje en 10.
			Si nExamen < 0 Entonces
				nExamen <- 0;
			SiNo
				Si nExamen > 10 Entonces
					nExamen <- 10;
				FinSi
			FinSi
			
			//Estos son los contadores que usamos para hacer la suma de las notas, recuento de positivos, etc.
			totalPracticas <- totalPracticas + nPracticas;
			totalExamen <- totalExamen + nExamen;
			totalPositivos <- totalPositivos + nPositivos;
			
		SiNo
			
			//Segunda condicion, en la que si el usuario introduce un numero de alumnos no validos le repetimos la pregunta hasta que de un valor correcto.
			Escribir 'ERROR - Dato no valido.';
			Escribir '************************************';
			Escribir 'Cuantos alumnos vas a introducir?';
			Leer  nAlumnos;
		FinSi
		
		//Formula con la que hacemos la media del corsa, la cual imprimimos despues para que el usuario la pueda ver.
		nEvaluacion <- (nPracticas * 0.3) + (nExamen * 0.7) + (nPositivos * 0.1);
		Escribir '*************************************';
		Escribir 'NOTA EVALUACION: ', nEvaluacion;
		Escribir '*************************************';
		Escribir ' ';
		
		//Condicional para saber cuantos alumnos estan aprobados y cuales suspensos.
		Si nEvaluacion >= 0 y nEvaluacion < 5 Entonces
			suspenso <- suspenso + 1;
		SiNo
			aprobado <- aprobado + 1;
		FinSi
		
		//Hacemos la suma de todas las notas finales para despues hacer una media de la clase.
		totalEvaluacion <- totalEvaluacion + nEvaluacion;
		
		//Susmamos 1 a x para que el bucle se cumpla.
		x <- x + 1;
	Hasta Que x == nAlumnos
	
	//Formulas para hacer las medias de las practicas y de la clase al completo.
	nMediaPracticas <- totalPracticas / nAlumnos;
	nMediaFinal <- totalEvaluacion / nAlumnos;
	
	//Imprimimos todos los datos para que el usuario los vea.
	Escribir '*************************************';
	Escribir 'MEDIA EVALUACION: ', nMediaFinal;
	Escribir '*************************************';
	Escribir '*************************************';
	Escribir 'MEDIA PRACTICAS: ', nMediaPracticas;
	Escribir '*************************************';
	Escribir '*************************************';
	Escribir 'APROBADOS: ', aprobado;
	Escribir '*************************************';
	Escribir '*************************************';
	Escribir 'SUSPENSOS: ', suspenso;
	Escribir '*************************************';
	
FinProceso
