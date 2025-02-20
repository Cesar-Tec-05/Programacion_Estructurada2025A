// Elaborar una suma de un arreglo con las siguientes características
// Tener máximo 10 espacios
// El usuario final debe elegir cuando entra un valor a cada posición (no es meter todos los datos al mismo tiempo)
// Mostrar lista de valores
// Mostrar sumatoria de todos los elementos
// Borrado y edición de elementos
// Vaciado de arreglo
Algoritmo ACTIVIDAD_DE_PROGRAMACION_8
	Definir opcio Como Cadena
	Definir arreglo Como Entero
	Escribir '-- Programa de sumatoria de un arreglo de 10 elementos --'
	Escribir 'Menu:'
	Escribir '1.Agregar elemento, 2.Mostrar lista, 3.Calcular sumatoria, 4.Editar elemento, 5.Borrar elemento, 6.Vaciar arreglo, 7.Salir'
	Leer opcio
	Mientras Verdadero Hacer
		Mientras opcio<>'1' O opcio<>'1' O opcio<>'2' O opcio<>'3' O opcio<>'4' O opcio<>'5' O opcio<>'6' O opcio<>'7' Hacer
			Escribir 'Opcion invalida. Intente de nuevo: '
		FinMientras
		Según opcio Hacer
			'1':
				Escribir 'Funcion de agregarElemento'
			'2':
				Escribir 'Funcion de mostrarLista'
			'3':
				Escribir 'Funcion de calcularSuma'
			'4':
				Escribir 'Funcion de editarElemento'
			'5':
				Escribir 'Funcion de borrarElemento'
			'6':
				Escribir 'Funcion de vaciarArreglo'
			'7':
				Escribir 'Salir del Programa'
		FinSegún
	FinMientras
FinAlgoritmo
