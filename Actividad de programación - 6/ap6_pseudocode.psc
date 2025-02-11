// Realizar un el diagrama de flujo o pseudocódigo y el programa que resuelva la siguiente problemática
// Determinar la suma de los cuadrados de una secuencia de números dada por un usuario:
// ej: el usuario coloca el número 5, por lo tanto se debe deternar lo siguiente
// 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = ?
// 1+4+9+16+25 = 55
// El programa de enviar un error si el valor que se somete es menor a 0 y tambien si es mayor a un determinado valor, es decir, 
// el valor introducido por el usuario NO. debe ser mauyor a lo que te permita el tipo de datos long.		
// Entregar en la plataforma el código fuente y en un documento en PDF copia de código fuente; capturas de la ejecución del programa, 
// además, anexar evidencia de que se encuentra en GITHUB y, envía el Diagrama de Flujo por separado en formato PDF.
Algoritmo ACTIVIDAD_DE_PROGRAMACION_6
	Definir val_usu, i, suma, cuadrado Como Real
	Definir salir Como Cadena
	Escribir '-- Programa de suma de Cuadrados --'
	Repetir
		Escribir 'Escribe un valor entero (mayor a 0 y menor o igual a 2,300): '
		Leer val_usu
		Si val_usu<=0 O val_usu>2300 Entonces
			Escribir 'El valor ingresado no es valido, intenta de nuevo.'
		SiNo
			Para i<-0 Hasta val_usu Con Paso 1 Hacer
				cuadrado <- i^2
				suma <- suma+cuadrado
				Escribir i, '^2 = ', cuadrado
			FinPara
			Escribir 'La suma de los cuadrados de los numeros del 0 al ', val_usu, ' es ', suma, s
		FinSi
		Escribir 'Deseas salir del programa? (s/n): '
		Leer salir
	Hasta Que salir=='S' O salir=='s'
FinAlgoritmo
