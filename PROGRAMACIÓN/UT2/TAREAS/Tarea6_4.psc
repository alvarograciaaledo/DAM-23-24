Proceso sin_titulo
	
	Definir importe, totalArticulos, totalVenta Como Real;
    Definir prod, opcion Como Caracter;
	
	totalArticulos <- 0;
    totalVenta <- 0;
	
	Escribir "----- CAJA REGISTRADORA -----";
	
	Escribir ' -------------';
	Escribir '| 12,78 $     |';
	Escribir ' -------------';
	Escribir '   |  |        ';
	Escribir ' ________________________';
	Escribir '|   _______________      |';
	Escribir '|  | 1 | 2 | 3 | 4 |     |';
	Escribir '|  |---------------|     |';
	Escribir '|  | 5 | 6 | 7 | 8 |     |';
	Escribir '|  |---------------|     |';
	Escribir '|  |_9_|___________|     |';
	Escribir '|________________________|';	
	

	
	Repetir
		
		Repetir
			Escribir ' ';
			Escribir "************************************";
			Escribir "Ingrese el NOMBRE del producto:";
			Escribir "************************************";
			Leer prod;
			Escribir "";
			Escribir "***********************************************************";
			Escribir "Ingrese el IMPORTE del ítem de venta (0 para finalizar):";
			Escribir "***********************************************************";
			Leer importe;
			
			Si importe > 0 Entonces
				totalArticulos <- totalArticulos + 1;
				totalVenta <- totalVenta + importe;
			FinSi
		Hasta Que importe == 0
		
		Escribir "******************************************";
		Escribir "* TOTAL DE ARTICULOS: ", totalArticulos, '.uds';
		Escribir "* IMPORTE TOTAL: ", totalVenta, '$';
		Escribir "******************************************";
		
		Escribir "";
		Escribir "¿Desea comenzar una venta nueva?";
		Escribir "* S) Para nueva venta *";
		Escribir "* N) Para continuar   *";
		Escribir "* X) Para salir       *";
		Leer opcion;
		
		Si opcion = 'S' o opcion = 's' Entonces
			totalArticulos <- 0;
			totalVenta <- 0;
		SiNo
			Si opcion = 'N' o opcion = 'n' Entonces
				Escribir 'Continuar...';
			SiNo
				Si opcion = 'X' o opcion = 'x' Entonces
					Escribir "Saliendo del programa...";
				SiNo
					Escribir "Opción inválida";
				FinSi
			FinSi
		FinSi
		
	Hasta Que opcion == 'X' o opcion = 'x'
FinProceso
