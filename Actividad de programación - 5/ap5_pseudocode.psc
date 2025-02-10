// Realizar la siguiente actividad de programación:
// El usuario final proporcion a un número entre 0 y 1000, es decir, no debe haber residuos
// El programa debe encontrar todos los múltiplos de 3 y 5 
// El programa debe mostrar cuántos multiplos de 3, cuantos de 5 y realizar total de aquellos que fueron encontrados para cada elemento.
Algoritmo ACTIVIDAD_DE_PROGRAMACION_5
	Definir num, contador3, contador5, suma3, suma5, i Como Entero
	Escribir '-- Programa Para Detectar Multiplos de 3 y 5 --'
	Escribir 'Ingrese un número entero entre 0 y 1000: '
	Leer num
	Si num<0 O num>1000 Entonces
		Escribir 'Número fuera de rango'
	SiNo
		contador3 <- 0
		contador5 <- 0
		suma3 <- 0
		suma5 <- 0
		Escribir 'Múltiplos de 3: '
		Para i<-1 Hasta num Hacer
			Si i MOD 3==0 Entonces
				Escribir i
				contador3 <- contador3+1
				suma3 <- suma3+i
			FinSi
		FinPara
		Escribir 'Cantidad de múltiplos de 3: ', contador3
		Escribir 'Suma de múltiplos de 3: ', suma3
		Escribir ' '
		Escribir 'Múltiplos de 5:'
		Para i<-1 Hasta num Hacer
			Si i MOD 5==0 Entonces
				Escribir i
				contador5 <- contador5+1
				suma5 <- suma5+i
			FinSi
		FinPara
		Escribir 'Cantidad de múltiplos de 5: ', contador5
		Escribir 'Suma de múltiplos de 5: ', suma5
	FinSi
FinAlgoritmo
