INICIO

    MOSTRAR "Centro de Aplicaciones del Semestre"
    continuar ← VERDADERO

    MIENTRAS continuar SEA VERDADERO HACER
        caso ← LLAMAR A general_menu()

        SEGÚN caso HACER
            CASO 1:
                LIMPIAR PANTALLA
                LLAMAR A fun_hola_mundo()
                LIMPIAR PANTALLA

            CASO 2:
                LIMPIAR PANTALLA
                LLAMAR A fun_datos()
                LIMPIAR PANTALLA

            CASO 3:
                LIMPIAR PANTALLA
                LLAMAR A fun_caracteres_y_cadenas()
                LIMPIAR PANTALLA

            CASO 4:
                LIMPIAR PANTALLA
                LLAMAR A fun_multiplicador()
                LIMPIAR PANTALLA

            CASO 5:
                LIMPIAR PANTALLA
                LLAMAR A fun_fibonacci()
                LIMPIAR PANTALLA

            CASO 6:
                LIMPIAR PANTALLA
                LLAMAR A fun_detectar_multiplos_3_5()
                LIMPIAR PANTALLA

            CASO 7:
                LIMPIAR PANTALLA
                LLAMAR A fun_suma_cuadrados()
                LIMPIAR PANTALLA

            CASO 8:
                LIMPIAR PANTALLA
                LLAMAR A fun_detectar_no_primos()
                LIMPIAR PANTALLA

            CASO 9:
                LIMPIAR PANTALLA
                LLAMAR A fun_suma_arreglos()
                LIMPIAR PANTALLA

            CASO 10:
                LIMPIAR PANTALLA
                LLAMAR A fun_operaciones_matrices()
                LIMPIAR PANTALLA

            CASO 11:
                LIMPIAR PANTALLA
                LLAMAR A fun_operaciones_conjuntos()
                LIMPIAR PANTALLA

            CASO 12:
                LIMPIAR PANTALLA
                LLAMAR A fun_secuencia_numeros()
                LIMPIAR PANTALLA

            CASO 13:
                LIMPIAR PANTALLA
                LLAMAR A fun_identificar_palindromo()
                LIMPIAR PANTALLA

            CASO 14:
                LIMPIAR PANTALLA
                LLAMAR A fun_juego_ahorcado()
                LIMPIAR PANTALLA

            CASO 15:
                LIMPIAR PANTALLA
                LLAMAR A fun_juego_torres_hanoi()
                LIMPIAR PANTALLA

            CUALQUIER OTRO CASO:
                continuar ← FALSO
                LIMPIAR PANTALLA
                MOSTRAR "Presione cualquier tecla para salir..."
                ESPERAR TECLA
                MOSTRAR "Saliendo del programa..."

        FIN SEGÚN
    FIN MIENTRAS

FIN
