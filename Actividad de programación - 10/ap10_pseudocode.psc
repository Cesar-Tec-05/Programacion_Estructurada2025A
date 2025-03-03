// Principal

INICIO

ESCRIBIR "-- Programa de Operaciones Básicas de Conjuntos --"

MIENTRAS VERDADERO HACER
    DECLARAR A COMO VECTOR DE CADENAS
    DECLARAR B COMO VECTOR DE CADENAS
    DECLARAR opcion COMO ENTERO
    DECLARAR reiniciar COMO BOOLEANO <- VERDADERO
    
    MIENTRAS reiniciar = VERDADERO HACER
        opcion <- menu() // Mostrar menú y guardar opción seleccionada
        
        SEGÚN opcion HACER
            CASO 1:
                LIMPIAR CONSOLA
                LLAMAR insertarElementoSeleccionado(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 2:
                LIMPIAR CONSOLA
                LLAMAR borrarElementoSeleccionado(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 3:
                LIMPIAR CONSOLA
                LLAMAR editarElementoSeleccionado(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 4:
                LIMPIAR CONSOLA
                LLAMAR vaciarSeleccion(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 5:
                LIMPIAR CONSOLA
                ESCRIBIR "A: "
                LLAMAR mostrarConjunto(A)
                ESCRIBIR "B: "
                LLAMAR mostrarConjunto(B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 6:
                LIMPIAR CONSOLA
                ESCRIBIR "A: "
                LLAMAR mostrarConjunto(A)
                ESCRIBIR "B: "
                LLAMAR mostrarConjunto(B)
                ESCRIBIR "Resultado:"
                ESCRIBIR "A U B: "
                LLAMAR mostrarConjunto(unionConjuntos(A, B))
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 7:
                LIMPIAR CONSOLA
                ESCRIBIR "A: "
                LLAMAR mostrarConjunto(A)
                ESCRIBIR "B: "
                LLAMAR mostrarConjunto(B)
                ESCRIBIR "Resultado:"
                ESCRIBIR "A ^ B: "
                LLAMAR mostrarConjunto(interseccionConjuntos(A, B))
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 8:
                LIMPIAR CONSOLA
                LLAMAR diferenciaSeleccionado(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 9:
                LIMPIAR CONSOLA
                LLAMAR complementoSeleccionado(A, B)
                LLAMAR pausar_programa()
                LIMPIAR CONSOLA
            CASO 10:
                LIMPIAR CONSOLA
                reiniciar <- reiniciar_programa()
                LIMPIAR CONSOLA
            DEFECTO:
                LIMPIAR CONSOLA
                ESCRIBIR "Presione cualquier tecla para salir."
                ESPERAR TECLA
                ESCRIBIR "Saliendo..."
                TERMINAR PROGRAMA
        FIN SEGÚN
    FIN MIENTRAS
FIN MIENTRAS

FIN

// Funciones
INICIO

FUNCIÓN menu()
    MOSTRAR "Menu de Opciones"
    MOSTRAR lista de opciones (1 a 11)
    LEER opcion_fun
    MIENTRAS opcion_fun < 1 O opcion_fun > 11
        MOSTRAR "Opción inválida, inténtelo de nuevo"
        LEER opcion_fun
    FIN MIENTRAS
    RETORNAR opcion_fun
FIN FUNCIÓN

FUNCIÓN validarElemento(conjunto, valor)
    SI valor EN conjunto
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
FIN FUNCIÓN

FUNCIÓN mostrarConjunto(conjunto)
    MOSTRAR "{"
    PARA CADA elem EN conjunto
        MOSTRAR elem
    FIN PARA
    MOSTRAR "}"
FIN FUNCIÓN

FUNCIÓN insertarElemento(conjunto)
    MOSTRAR "Ingrese un elemento:"
    LEER valor
    AGREGAR valor A conjunto
FIN FUNCIÓN

FUNCIÓN borrarElemento(conjunto)
    MOSTRAR "Elemento a borrar:"
    LEER valor
    SI validarElemento(conjunto, valor) == VERDADERO
        BORRAR valor DE conjunto
    SINO
        MOSTRAR "Elemento no encontrado"
    FIN SI
FIN FUNCIÓN

FUNCIÓN editarElemento(conjunto)
    MOSTRAR "Elemento a editar:"
    LEER viejo
    SI validarElemento(conjunto, viejo) == VERDADERO
        MOSTRAR "Nuevo valor:"
        LEER nuevo
        REEMPLAZAR viejo POR nuevo EN conjunto
    SINO
        MOSTRAR "Elemento no encontrado"
    FIN SI
FIN FUNCIÓN

FUNCIÓN unionConjuntos(A, B)
    resultado ← A
    AGREGAR elementos de B A resultado
    ELIMINAR duplicados de resultado
    RETORNAR resultado
FIN FUNCIÓN

FUNCIÓN interseccionConjuntos(A, B)
    resultado ← []
    PARA CADA elem EN A
        SI elem EN B
            AGREGAR elem A resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCIÓN

FUNCIÓN diferenciaConjuntos(A, B)
    resultado ← []
    PARA CADA elem EN A
        SI elem NO EN B
            AGREGAR elem A resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCIÓN

FUNCIÓN complementoConjunto(A, B)
    resultado ← []
    PARA CADA elem EN A
        SI elem NO EN B
            AGREGAR elem A resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCIÓN

FIN

