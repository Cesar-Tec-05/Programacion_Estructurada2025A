Mostrar menú principal
Pedir al usuario el **tamaño de las matrices**
Crear matriz **A** y matriz **B** con valores inicializados en 0
Reiniciar = Verdadero

Mientras (Reiniciar == Verdadero)
    Mostrar menú de opciones
    Leer opción del usuario

    Seguir caso según opción:

    Caso 1: Llenado Manual
        Preguntar cuál matriz llenar (A o B)
        Si matriz = A
            Llamar a función llenarManual(A)
            Mostrar Matriz A
        Si no
            Llamar a función llenarManual(B)
            Mostrar Matriz B
        Fin Si
        Pausar programa
    Fin Caso

    Caso 2: Llenado Aleatorio
        Llamar a función llenarAleatorio(A)
        Llamar a función llenarAleatorio(B)
        Mostrar ambas matrices
        Pausar programa
    Fin Caso

    Caso 3: Editar Elemento
        Preguntar cuál matriz editar (A o B)
        Si matriz = A
            Llamar a función editarElemento(A)
            Mostrar Matriz A
        Si no
            Llamar a función editarElemento(B)
            Mostrar Matriz B
        Fin Si
        Pausar programa
    Fin Caso

    Caso 4: Vaciar Matrices
        Llamar a función vaciarMatriz(A)
        Llamar a función vaciarMatriz(B)
        Mostrar mensaje "Matrices vaciadas"
        Pausar programa
    Fin Caso

    Caso 5: Sumar Matrices
        Llamar a función sumarMatrices(A, B)
        Mostrar resultado
        Pausar programa
    Fin Caso

    Caso 6: Restar Matrices
        Llamar a función restarMatrices(A, B)
        Mostrar resultado
        Pausar programa
    Fin Caso

    Caso 7: Multiplicar Matrices
        Llamar a función multiplicarMatrices(A, B)
        Mostrar resultado
        Pausar programa
    Fin Caso

    Caso 8: Mostrar Matrices
        Mostrar matriz A
        Mostrar matriz B
        Pausar programa
    Fin Caso

    Caso 9: Reiniciar Tamaño de Matrices
        Preguntar si desea reiniciar
        Si sí, reiniciar tamaño y regresar al menú principal
        Si no, continuar con el menú actual
    Fin Caso

    Caso por Defecto: Salir del Programa
        Mostrar mensaje de despedida
        Terminar programa
    Fin Caso

Fin Mientras