El juego consiste en pasar todos los discos de la varilla ocupada (es decir la que posee la torre) a una de las otras varillas vacantes. Para realizar este objetivo, es necesario seguir tres simples reglas:

-Sólo se puede mover un disco cada vez.
-Un disco de mayor tamaño no puede descansar sobre uno más pequeño que él mismo.
-Sólo puedes desplazar el disco que se encuentre arriba en cada varilla.

Formula matematica: 2 n - 1

Problemas:
- Intuitibo y grafico 
- Algoritmo 
- Lineas de codigo por las impresiones y algoritmo 
- Numero de discos maximos 10
- Sistema de puntaje por medio de 5 estrellas

Pseudocodigo:

	Parte Grafica:
	 
	     |            |         |
	    ===           |         |                  
       =====          |         |                   
      =======         |         |
----------------------------------------------

Utilizar la pagina para lo grafico haski.

	Parte logica:
	- Variable para numero de movimientos
	- Variable para movimientos minimos dependiendo de el, numero de discos
	- Comparar las variables de los movimientos para el sistema de puntajes
	- Identificar los discos por medio de vectores 
	- Cada varilla es un vector para identificar cada disco
	- Tener una condicional para los puntos referente a los movimientos minimos

	Puntos:
	- Sistema de 5 estrellas teniendo en cuenta la condicional

	Puntos a tener en cuenta:
	- Funciones
	- Evitar bucles inesesarios
	- Condicionales y validaciones para bloquear movimientos proibidos
	- Condicionales y validaciones para evitar errores no deseados por el usuario.
	- Darle la opcion al usuario para reiniciar el juego
	- Darle la opcion al usuario para salir del programa y de la partida.		
