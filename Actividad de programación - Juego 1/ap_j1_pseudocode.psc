// PROGRAMA: ahorcado_pseudocodigo
// Programa de las funciones del juego del ahorcado

INICIO

    DEFINIR CLASE Ahorcado
        PRIVADO:
            VECTOR palabras = ["computadora", "programacion", "teclado", "raton", "monitor", "codigo", "ahorcado", 
                               "desarrollo", "ingenieria", "software", "hardware", "tecnologia", "sistema", "digital", 
                               "redes", "algoritmo", "estructura", "logica", "matematicas", "seguridad"]
            STRING palabraSecreta
            STRING palabraOculta
            ENTERO intentos
            ENTERO intentosTotales
            STRING letrasUsadas

        PUBLICO:
            PROCEDIMIENTO Constructor (palabra OPCIONAL)
                SI palabra ES VACIA ENTONCES
                    palabraSecreta ← palabraAleatoria(palabras)
                SINO
                    palabraSecreta ← palabra
                FIN SI
                palabraOculta ← "_" * longitud(palabraSecreta)
                intentos ← 10
                intentosTotales ← 0
            FIN PROCEDIMIENTO

            PROCEDIMIENTO mostrarEstado()
                MOSTRAR "Palabra: ", palabraOculta
                MOSTRAR "Intentos restantes: ", intentos
                MOSTRAR "Intentos realizados: ", intentosTotales
                MOSTRAR "Letras usadas: ", letrasUsadas
            FIN PROCEDIMIENTO

            FUNCION verificarLetra(letra)
                SI letra EN letrasUsadas ENTONCES
                    MOSTRAR "Ya has usado esta letra."
                    RETORNAR FALSO
                FIN SI

                SI letra NO ES ENTRE 'a' Y 'z' ENTONCES
                    MOSTRAR "Elección inválida."
                    RETORNAR FALSO
                FIN SI

                intentosTotales ← intentosTotales + 1
                letrasUsadas ← letrasUsadas + letra

                SI esVocal(letra) ENTONCES
                    intentos ← intentos - 1
                    MOSTRAR "Es una vocal, pierdes un intento."
                FIN SI

                encontrada ← FALSO
                PARA i ← 0 HASTA longitud(palabraSecreta) - 1 HACER
                    SI palabraSecreta[i] = letra ENTONCES
                        palabraOculta[i] ← letra
                        encontrada ← VERDADERO
                    FIN SI
                FIN PARA

                SI NO encontrada ENTONCES
                    MOSTRAR "Letra incorrecta, pierdes un intento."
                    intentos ← intentos - 1
                FIN SI

                RETORNAR encontrada
            FIN FUNCION

            FUNCION esVocal(letra)
                RETORNAR letra EN ['a', 'e', 'i', 'o', 'u']
            FIN FUNCION

            FUNCION juegoTerminado()
                RETORNAR intentos ≤ 0 O palabraOculta = palabraSecreta
            FIN FUNCION

            FUNCION jugadorGana()
                RETORNAR palabraOculta = palabraSecreta
            FIN FUNCION

            FUNCION getPalabraSecreta()
                RETORNAR palabraSecreta
            FIN FUNCION

            FUNCION getIntentosTotales()
                RETORNAR intentosTotales
            FIN FUNCION
    FIN CLASE

    PROCEDIMIENTO jugarContraComputadora()
        DEFINIR juego COMO Ahorcado
        DEFINIR letra COMO CARÁCTER

        MIENTRAS NO juego.juegoTerminado() HACER
            juego.mostrarEstado()
            MOSTRAR "Ingresa una letra: "
            LEER letra
            letra ← convertirAMinuscula(letra)
            limpiarConsola()
            juego.verificarLetra(letra)
        FIN MIENTRAS

        juego.mostrarEstado()

        SI juego.jugadorGana() ENTONCES
            MOSTRAR "¡Felicidades! Has adivinado la palabra en ", juego.getIntentosTotales(), " intentos."
        SINO
            MOSTRAR "Has perdido. La palabra era: ", juego.getPalabraSecreta()
        FIN SI
    FIN PROCEDIMIENTO

    PROCEDIMIENTO jugarContraOtroJugador()
        DEFINIR palabra COMO STRING
        MOSTRAR "Jugador 1, ingresa la palabra secreta: "
        LEER palabra
        palabra ← convertirAMinuscula(palabra)
        limpiarConsola()

        DEFINIR juego COMO Ahorcado(palabra)
        DEFINIR letra COMO CARÁCTER

        MIENTRAS NO juego.juegoTerminado() HACER
            juego.mostrarEstado()
            MOSTRAR "Jugador 2, ingresa una letra: "
            LEER letra
            letra ← convertirAMinuscula(letra)
            limpiarConsola()
            juego.verificarLetra(letra)
        FIN MIENTRAS

        juego.mostrarEstado()

        SI juego.jugadorGana() ENTONCES
            MOSTRAR "¡Jugador 2 ha adivinado la palabra en ", juego.getIntentosTotales(), " intentos!"
        SINO
            MOSTRAR "Jugador 2 ha perdido. La palabra era: ", juego.getPalabraSecreta()
        FIN SI
    FIN PROCEDIMIENTO

    FUNCION menuOpciones()
        MOSTRAR "Selecciona una opción:"
        MOSTRAR "1. Jugar contra la computadora"
        MOSTRAR "2. Jugar contra otro jugador"
        MOSTRAR "3. Salir"
        MOSTRAR "Opción: "

        DEFINIR opcion_menu COMO ENTERO
        LEER opcion_menu

        MIENTRAS opcion_menu < 1 O opcion_menu > 3 HACER
            MOSTRAR "Opción inválida. Inténtelo de nuevo: "
            LEER opcion_menu
        FIN MIENTRAS

        RETORNAR opcion_menu
    FIN FUNCION

    PROCEDIMIENTO pausar_programa()
        MOSTRAR "Presione Enter para continuar..."
        ESPERAR ENTRADA DEL USUARIO
    FIN PROCEDIMIENTO

FIN

// Juego del Ahorcado - Pseudocódigo

INICIO

    IMPRIMIR "-- Juego del Ahorcado --"
    DEFINIR modo COMO ENTERO
    DEFINIR finPrograma COMO BOOLEANO ← VERDADERO

    MIENTRAS finPrograma SEA VERDADERO HACER
        modo ← menuOpciones()
        
        SEGÚN modo HACER
            CASO 1:
                LIMPIAR PANTALLA
                jugarContraComputadora()
                pausar_programa()
                LIMPIAR PANTALLA
            CASO 2:
                LIMPIAR PANTALLA
                jugarContraOtroJugador()
                pausar_programa()
                LIMPIAR PANTALLA
            CASO 3:
                finPrograma ← FALSO
                LIMPIAR PANTALLA
                IMPRIMIR "Presiona cualquier tecla para salir."
                ESPERAR TECLA
                IMPRIMIR "Saliendo del juego..."
        FIN SEGÚN

    FIN MIENTRAS

FIN
