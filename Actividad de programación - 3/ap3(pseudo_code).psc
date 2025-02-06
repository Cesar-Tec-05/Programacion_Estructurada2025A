// Elaborar un programa en C++ donde se le pida un número al usuario y que tome en cuenta las siguiente condiciones:
// Si el número es mayor a 0 y menor a 500, subir de 5 en 5, 100 veces.
// Si el número es mayor a 500 y menor a 1000, subir el número de 10 en 10, 50 veces
// Si el número es mayor a 1000, "No se puede calcular el valor".
// Debe hacer un ciclo en donde pregunte si desea terminar el programa.
// Contar con las veces que realizó una operación.
// En todo momento mostrar valores
// Elaborar diagrama de flujo.
Algoritmo ACTIVIDAD_PROGRAMACION_3
	usuario_valor <- entero
	continuar <- caracter
	operaciones <- entero
	ciclo <- entero
	operaciones <- 0
	Escribir '-- Programa de multiplicador de valores --'
	Repetir
		operaciones <- operaciones+1
		Escribir 'Ingrese un valor entero:'
		Leer usuario_valor
		Si usuario_valor>=0 Entonces
			Si usuario_valor<=500 Entonces
				ciclo <- 0
				Mientras ciclo<100 Hacer
					ciclo <- ciclo+1
					usuario_valor <- usuario_valor+5
					Escribir 'Se subio 5 - ', ciclo, ' veces: ', usuario_valor
				FinMientras
			SiNo
				Si usuario_valor<=1000 Entonces
					ciclo <- 0
					Mientras ciclo<50 Hacer
						ciclo <- ciclo+1
						usuario_valor <- usuario_valor+5
						Escribir 'Se subio 10 - ', ciclo, ' veces: ', usuario_valor
					FinMientras
				SiNo
					Escribir 'No se puede calcular el valor'
				FinSi
			FinSi
		SiNo
			Escribir 'No se aceptan numeros negativos'
		FinSi
		Escribir 'Deseas continuar (Si = S / No = N):'
		Leer continuar
	Hasta Que continuar=='N'
	Escribir 'Operaciones realizadas: ', operaciones
FinAlgoritmo
