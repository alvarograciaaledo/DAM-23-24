Proceso Ejercicio4
	
	//Definimos las variables que vamos a usar.
	definir cant, desc, totalCant como entero;
	definir precio, totalPrec, total, totalTotal como real;
	Definir prod, opc1,opc2, opc3 Como Caracter;
	
	//Inicializamos todas la varibles necesarias para un correcto funcionamiento.
	opc1 <- ' ';
	opc2 <- ' ';
	opc3 <- ' ';
	totalTotal <- 0;
	precio <- 0;
	total <- 0;
	totalPrec <- 0;
	totalCant <- 0;
	
	//Bucle para que se repita hasta que el user lo desee.
	Repetir
		Repetir
			//Decimos que el precio es cero para que no se acumule con el anterior y haya mal recuento.
			total <- 0;
			
			//Le pedimos el producto y la cantidad.
			Escribir '****** PEDIDO ******';
			Escribir 'Indica el producto: ';
			leer prod;
			Escribir 'Indica la cantidad que compras: ';
			Leer cant;
			
			//Condicion de que si la cantidad es menor que cero no sea valido y pregunte de nuevo.
			Si cant > 0 Entonces
				
				//Variable con el que contamos las cantidades totales para asignar el descuento.
				totalCant <- totalCant + cant;
				
				//Preguntas el precio del producto por unidad.
				Escribir 'Indica el precio del producto: ';
				leer precio;
				
				//Condicion para que el precio sea mayor que cero.
				Si precio > 0.00 Entonces
					
					//Sumamos todos los precios para saber a que le debemos hacer el descuento.
					totalPrec <- totalPrec + precio;
					
					//Le preguntamos si quiere añadir algo mas a la cesta.
					Escribir '***************************************';
					Escribir 'Quieres añadir mas productos? (S / N)';
					leer opc1;
					
					//Variables para saber el precio de los productos y el total de todo.
					total <- cant * precio;
					totalTotal <- totalTotal + total;
					
				SiNo
					//Aviso  de que el precio no es valido.
					Escribir 'ERROR - Precio no valido.';
				FinSi
				
			SiNo
				//Aviso  de que la cantidad no es valida.
				Escribir 'ERROR - Cantidad no valida.';
			FinSi
			
			//Condicion para el final del bucle
		Hasta Que opc1 == 'N' o opc1 == 'n'
		
		//Condicion para saber si hay descuento o no, si esta primera se cumple no hay descuento.
		Si totalCant < 10 Entonces
			
			//Muestra el precio y avisa de que no hay descuento.
			Escribir '**********************************************************';
			escribir ' TOTAL: ', totalTotal, '$';
			Escribir '> No recibe ningun descuento. Gracias por sus servicios!';
		SiNo
			
			//Condicion para asignar un descuento del 5%
			Si totalCant >= 10 y totalCant <= 19 Entonces
				
				//Muestra el precio y avisa de que tiene un descuento del 5%.
				Escribir '**********************************************************';
				escribir ' TOTAL: ', totalTotal, '$';
				escribir ' TOTAL CON DESCUENTO: ', totalTotal * 0.95, '$';
				Escribir '> Recibistes un descuento del 5%. Gracias por sus servicios!';
			SiNo
				
				//Condicion para asignar un descuento del 10%
				Si totalCant >= 20 Entonces
					
					//Muestra el precio y avisa de que tiene un descuento del 10%.
					Escribir '******************************************************************';
					escribir ' TOTAL: ', totalTotal, '$';
					escribir ' TOTAL CON DESCUENTO: ', totalTotal * 0.90, '$';
					Escribir '> Recibistes un descuento del 10%. Gracias por sus servicios!';
				FinSi
			FinSi
		FinSi
		
		//Pregunta si quiere reiniciar el programa.
		Escribir 'Quieres empezar de nuevo?(S / N)';
		leer opc2;
		
		//Si se cumple la condicion todos los contadores se reinician y el programa empieza de cero.
		Si opc2 == 's' o opc2 == 'S'  Entonces
			totalTotal <- 0;
			total <- 0;
			totalPrec <- 0;
			totalCant <- 0;
		SiNo
			//Si no se cumple la condicion anterior le pregunta si quiere añadir algo mas.
			Escribir 'Quieres añadir mas productos? (S / N)';
			leer opc3;
			
			//Si el user responde que si se siguen añadiendo productos, si no se cierra todo.
			Si opc3  == 's' o opc3 == 'S' Entonces
				Escribir 'Continuamos.';
			FinSi
		FinSi
		
	Hasta Que opc3 == 'N' o opc3 == 'n'
	
	Escribir 'ADIOS.';
	
FinProceso
