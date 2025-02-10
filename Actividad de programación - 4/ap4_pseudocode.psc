// Elaborar la serie fibonacci utilizando los 3 ciclos básicos (for, while y do-while)
// Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario
// El usuario va a elegir con qué ciclo debe trabajar
// El programa debe salir cuando el usuario lo indique
Algoritmo ACTIVIDAD_DE_PROGRAMACION_4
	Definir temporal, limite, fibonacci, inic Como Real
	Definir ciclo, continuar Como Cadena
	Escribir '-- Programa de Serie Fibonacci con 3 Ciclos Básicos (For, While y Do-while) --'
	Repetir
		fibonacci <- 0
		inic <- 1
		Escribir 'Ingrese el límite de la serie Fibonacci: '
		Leer limite
		Escribir '¿Que ciclo quieres utilizar? (F: For, W: While, D: Do-While): '
		Leer ciclo
		Según ciclo Hacer
			'F':
				Escribir 'Serie Fibonacci con ciclo For: '
				Para fibonacci<-0 Hasta limite Con Paso paso Hacer
					Escribir fibonacci
					temporal <- fibonacci+inic
					fibonacci <- inic
					inic <- temporal
				FinPara
			'W':
				Escribir 'Serie Fibonacci con ciclo While: '
				Mientras fibonacci<=limite Hacer
					Escribir fibonacci
					temporal <- fibonacci+inic
					fibonacci <- inic
					inic <- temporal
				FinMientras
			'D':
				Escribir 'Serie Fibonacci con ciclo Do-While: '
				Repetir
					Escribir fibonacci
					temporal <- fibonacci+inic
					fibonacci <- inic
					inic <- temporal
				Hasta Que fibonacci>=limite
			De Otro Modo:
				Escribir 'Eleccion Invalida'
		FinSegún
		Escribir '¿Desear continuar? (S: Si, N: No):'
		Leer continuar
	Hasta Que continuar=='N'
FinAlgoritmo
