// Identificar los numeros primos de un número dado por el usuario y posteriormente realizar la suma de estos
// ej: el número introducido por el usuario es 10.
// 2 + 3 + 5 + 7 = 17
Algoritmo ACTIVIDAD_DE_PROGRAMACION_7
	Definir suma, i, num Como Entero
	Definir esPrimo Como Lógico
	Definir num_caracter, ele Como Cadena
	Escribir '-- Programa Para Identificar Numeros Primos --'
	Repetir
		suma <- 0
		Escribir 'Ingrese un número entero: '
		Leer num_caracter
		Si num_caracter<>'busque un algoritmo para identificar los caracteres, el cual se realiza un ciclo para validar cada caracter del string :D' Entonces
			num <- ConvertirANumero(num_caracter)
			Si num>=2 Entonces
				Para i<-2 Hasta num Hacer
					esPrimo <- Verdadero
					Para j<-2 Hasta i-1 Hacer
						Si i MOD j=0 Entonces
							esPrimo <- Falso
						FinSi
					FinPara
					Si esPrimo Entonces
						suma <- suma+i
						Escribir i, ' es primo'
					FinSi
				FinPara
				Escribir 'La suma de los números primos es: ', suma
			SiNo
				Escribir 'El número ingresado no es válido para encontrar primos'
			FinSi
		SiNo
			Escribir 'No se aceptan caracteres especiales, Intentelo de nuevo'
		FinSi
		Escribir 'Deseas Finalizar el Programa? (s/n)'
		Leer ele
	Hasta Que ele=='s' O ele=='S'
FinAlgoritmo
