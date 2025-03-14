Algoritmo principal
    INICIO
        REPEAT
            opcion <- mostrarMenu()

            SEGÚN opcion HACER
                CASO 1: // Ingresar números
                    LIMPIAR la consola
                    Llamar a ingresarNumeros(num1, num2)
                    Llamar a pausar_programa()
                    LIMPIAR la consola
                    ROMPER
                CASO 2: // Editar números
                    LIMPIAR la consola
                    Llamar a editarNumeros(num1, num2)
                    Llamar a pausar_programa()
                    LIMPIAR la consola
                    ROMPER
                CASO 3: // Calcular secuencias y comparar
                    LIMPIAR la consola
                    Llamar a calcularYComparar(num1, num2)
                    Llamar a pausar_programa()
                    LIMPIAR la consola
                    ROMPER
                POR DEFECTO: // Salir del programa
                    LIMPIAR la consola
                    IMPRIMIR "Presione cualquier tecla para salir."
                    ESPERAR a que el usuario presione una tecla
                    IMPRIMIR "Saliendo del programa..."
                    ROMPER
            FIN SEGÚN
        HASTA que opcion sea igual a 4
        RETORNAR 0
    FIN

FUNCION mostrarMenu() -> entero
    INICIO
        IMPRIMIR "-- Programa de secuencias de Collatz --"
        IMPRIMIR "Menu:"
        IMPRIMIR "1. Ingresar numeros"
        IMPRIMIR "2. Editar numeros"
        IMPRIMIR "3. Calcular secuencias y comparar"
        IMPRIMIR "4. Salir"
        IMPRIMIR "Seleccione una opcion: "
        
        HACER
            LEER opcion_menu
        HASTA que opcion_menu sea válida (1 a 4)
        
        RETORNAR opcion_menu
    FIN

FUNCION ingresarNumeros(REFERENCIA num1, REFERENCIA num2)
    INICIO
        IMPRIMIR "Ingresar Numeros:"
        IMPRIMIR "1. Numero A"
        IMPRIMIR "2. Numero B"
        IMPRIMIR "Seleccione 1 o 2: "
        
        HACER
            LEER sub_opcion
        HASTA que sub_opcion sea válida (1 o 2)
        
        SI sub_opcion = 1 ENTONCES
            IMPRIMIR "Ingrese el valor para A: "
            HACER
                LEER num1
            HASTA que num1 >= 2
        SINO
            IMPRIMIR "Ingrese el valor para B: "
            HACER
                LEER num2
            HASTA que num2 >= 2
        FIN SI
    FIN

FUNCION editarNumeros(REFERENCIA num1, REFERENCIA num2)
    INICIO
        IMPRIMIR "Editar Numeros:"
        IMPRIMIR "1. Numero A"
        IMPRIMIR "2. Numero B"
        IMPRIMIR "Seleccione 1 o 2: "
        
        HACER
            LEER sub_opcion
        HASTA que sub_opcion sea válida (1 o 2)
        
        SI sub_opcion = 1 ENTONCES
            IMPRIMIR "Ingrese el nuevo valor para A: "
            HACER
                LEER num1
            HASTA que num1 >= 2
        SINO
            IMPRIMIR "Ingrese el nuevo valor para B: "
            HACER
                LEER num2
            HASTA que num2 >= 2
        FIN SI
    FIN

FUNCION collatzLength(n) -> entero
    INICIO
        length <- 1
        IMPRIMIR "Secuencia de Collatz para ", n, ": ", n
        
        MIENTRAS n != 1
            SI n es par ENTONCES
                n <- n / 2
            SINO
                n <- 3 * n + 1
            FIN SI
            IMPRIMIR " -> ", n
            length <- length + 1
        FIN MIENTRAS
        
        IMPRIMIR una nueva línea
        RETORNAR length
    FIN

FUNCION calcularYComparar(num1, num2)
    INICIO
        SI num1 = 0 O num2 = 0 ENTONCES
            IMPRIMIR "Primero debe ingresar los numeros de A y B."
        SINO
            length1 <- collatzLength(num1)
            length2 <- collatzLength(num2)
            IMPRIMIR "Longitud de la secuencia para ", num1, ": ", length1
            IMPRIMIR "Longitud de la secuencia para ", num2, ": ", length2
            
            SI length1 > length2 ENTONCES
                IMPRIMIR num1, " tiene mas elementos en su secuencia."
            SINO SI length2 > length1 ENTONCES
                IMPRIMIR num2, " tiene mas elementos en su secuencia."
            SINO
                IMPRIMIR "Ambos numeros tienen la misma cantidad de elementos en su secuencia."
            FIN SI
        FIN SI
    FIN

FUNCION pausar_programa()
    INICIO
        IMPRIMIR "Presione Enter para continuar..."
        IGNORAR la entrada
        LEER una tecla (presionar Enter)
    FIN
