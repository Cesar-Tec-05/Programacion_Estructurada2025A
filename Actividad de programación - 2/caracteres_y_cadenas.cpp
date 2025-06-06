/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 4 de Febrero de 2025
PROGRAMA: caracteres_y_cadenas.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Imprimir en consola al menos 6 caracteres de escape y 6 cadenas de control de tipos de salida. 
***********************************************************************************************/

#include <stdio.h> // Incluimos la libreria de entrada y salida
#include <conio.h> // Incluimos la libreria de entrada y salida de consola.

// Funcion principal del programa
main() { 
    // Cadenas de Control de Tipos de Salida
    printf("Dato entero: %i", 1000); // Imprimimos un dato entero
    printf("\nDato entero decimal: %d", 2000); // Imprimimos un dato entero decimal
    printf("\nDato octal: %o", 6);  // Imprimimos un dato octal
    printf("\nDato hexadecimal: %x", 10); // Imprimimos un dato hexadecimal
    printf("\nDato flotante: %f", 3.1416); // Imprimimos un dato flotante
    printf("\nDato doble: %lf", 4.5); // Imprimimos un dato doble
    printf("\nDato caracter: %c", 'A'); // Imprimimos un dato caracter
    printf("\nDato cadena: %s", "Hola Mundo"); // Imprimimos un dato cadena

    printf("\n--------------------------------------------------------------\n"); 

    // Secuencias de Escape
    printf("\nAlarma: \a"); // Imprimimos una alarma
    printf("\nRetroceso: \b"); // Imprimimos un retroceso
    printf("\nAvance de pagina: \f"); // Imprimimos un avance de pagina
    printf("\nSalto de linea: \n"); // Imprimimos un salto de linea
    printf("\nRetorno de carro: \r"); // Imprimimos un retorno de carro
    printf("\nTabulacion: \t"); // Imprimimos una tabulacion
    printf("\nTabulacion vertical: \v"); // Imprimimos una tabulacion vertical
    printf("\nDiagonal invertida \\"); // Imprimimos una diagonal invertida
    printf("\nComilla simple: \'"); // Imprimimos una comilla simple
    printf("\nSigno de interrogacion: \?"); // Imprimimos un signo de interrogacion
    getch(); // Esperamos a que el usuario presione una tecla para cerrar la consola
}