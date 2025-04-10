// pseudocode
INICIO

    DEFINIR eleccion COMO ENTERO ← 1

    MIENTRAS eleccion = 1 HACER:
        LIMPIAR PANTALLA
        MOSTRAR "-- Programa para identificar si una palabra es palindromo --"
        MOSTRAR "Introduce una palabra:"
        LEER palabra
        LIMPIAR PANTALLA

        SI esPalindromo(palabra) ENTONCES
            MOSTRAR "La palabra es un palindromo?: Si"
        SINO
            MOSTRAR "La palabra es un palindromo?: No"
        FIN SI

        MOSTRAR "Numero de caracteres (alfabéticos):" + contarCaracteres(palabra)
        MOSTRAR "Número de vocales:" + contarVocales(palabra)
        MOSTRAR "Número de consonantes:" + contarConsonantes(palabra)

        MOSTRAR "Presione Enter para continuar..."
        ESPERAR TECLA
        LIMPIAR PANTALLA

        MOSTRAR "¿Quieres introducir otra palabra? (1: Si, 2: No):"
        LEER eleccion
        MIENTRAS eleccion ≠ 1 Y eleccion ≠ 2 HACER:
            MOSTRAR "Opcion invalida. Intentelo de nuevo:"
            LIMPIAR ENTRADA
            LEER eleccion
        FIN MIENTRAS
    FIN MIENTRAS

    MOSTRAR "Presione Enter para salir..."
    ESPERAR TECLA
    MOSTRAR "Saliendo del programa..."

FIN

FUNCIÓN esPalindromo(palabra)
    inicio ← 0
    fin ← longitud de palabra - 1
    MIENTRAS inicio < fin HACER:
        SI palabra[inicio] NO ES LETRA ENTONCES
            inicio ← inicio + 1
            CONTINUAR
        FIN SI
        SI palabra[fin] NO ES LETRA ENTONCES
            fin ← fin - 1
            CONTINUAR
        FIN SI
        SI minúscula(palabra[inicio]) ≠ minúscula(palabra[fin]) ENTONCES
            RETORNAR FALSO
        FIN SI
        inicio ← inicio + 1
        fin ← fin - 1
    FIN MIENTRAS
    RETORNAR VERDADERO
FIN FUNCIÓN

FUNCIÓN contarCaracteres(palabra)
    contador ← 0
    PARA cada caracter c EN palabra HACER:
        SI c ES LETRA ENTONCES
            contador ← contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCIÓN

FUNCIÓN contarVocales(palabra)
    contador ← 0
    PARA cada caracter c EN palabra HACER:
        c ← minúscula(c)
        SI c ES LETRA Y c EN (a, e, i, o, u) ENTONCES
            contador ← contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCIÓN

FUNCIÓN contarConsonantes(palabra)
    contador ← 0
    PARA cada caracter c EN palabra HACER:
        c ← minúscula(c)
        SI c ES LETRA Y c NO EN (a, e, i, o, u) ENTONCES
            contador ← contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCIÓN

FUNCIÓN pausar_programa()
    MOSTRAR "Presione Enter para continuar..."
    IGNORAR entrada previa
    ESPERAR que el usuario presione Enter
FIN FUNCIÓN


INICIO

    MOSTRAR "Programa para identificar si una palabra es palindromo"
    
    DEFINIR eleccion COMO ENTERO ← 1
    
    MIENTRAS eleccion SEA IGUAL A 1 HACER:
        LIMPIAR PANTALLA
        MOSTRAR "Introduce una palabra:"
        LEER palabra
        
        LIMPIAR PANTALLA
        SI esPalindromo(palabra) ENTONCES
            MOSTRAR "La palabra es un palindromo?: Si"
        SINO
            MOSTRAR "La palabra es un palindromo?: No"
        FIN SI

        MOSTRAR "Numero de caracteres (alfabéticos):" + contarCaracteres(palabra)
        MOSTRAR "Número de vocales:" + contarVocales(palabra)
        MOSTRAR "Número de consonantes:" + contarConsonantes(palabra)

        PAUSAR PROGRAMA
        LIMPIAR PANTALLA

        MOSTRAR "¿Quieres introducir otra palabra? (1: Si, 2: No):"
        
        LEER eleccion
        MIENTRAS eleccion NO SEA 1 Y NO SEA 2 HACER:
            MOSTRAR "Opcion invalida. Intentelo de nuevo:"
            LIMPIAR ENTRADA
            LEER eleccion
        FIN MIENTRAS
    FIN MIENTRAS

    MOSTRAR "Presione Enter para salir..."
    ESPERAR TECLA
    MOSTRAR "Saliendo del programa..."

FIN
