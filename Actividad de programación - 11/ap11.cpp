/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 14 de Marzo de 2025
PROGRAMA: ap11.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 11, algoritmo para generar una secuencia de números. 
***********************************************************************************************/

// Incluimos las librerias necesarias
#include "ap11_functions.cpp" // Incluimos el archivo de funciones de la actividad 11
#include <conio.h> // Incluimos la libreria para poder usar la funcion getch() que nos ayuda a pausar el programa o manipular la consola
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres estandar

// Declaramos las variables globales
int num1 = 0, num2 = 0; // Declaramos dos variables enteras para los numeros
int opcion; // Declaramos una variable entera para la opcion del menu

int main() // Funcion principal del programa
{
    do // Ciclo de ejecucion
    {
        opcion = mostrarMenu(); // Mostramos el menu y guardamos la opcion seleccionada
        switch (opcion) // Evaluamos la opcion seleccionada
        {
            case 1: // caso 1, ingresar numeros
            {
                system("cls"); // Limpiamos la consola
                ingresarNumeros(num1, num2); // Llamamos a la funcion para ingresar los numeros
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // salimos del caso
            }
            case 2: // caso 2, editar numeros
            {
                system("cls"); // Limpiamos la consola
                editarNumeros(num1, num2); // Llamamos a la funcion para editar los numeros
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // salimos del caso
            }
            case 3: // caso 3, calcular secuencias y comparar
            {
                system("cls"); // Limpiamos la consola
                calcularYComparar(num1, num2); // Llamamos a la funcion para calcular y comparar las secuencias de Collatz
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // salimos del caso
            }
            default: // caso por defecto, salir del programa
            {
                system("cls"); // Limpiamos la consola
                cout << "Presione cualquier tecla para salir." << endl; // Indicamos al usuario que presione cualquier tecla para salir
                getch(); // Esperamos a que el usuario presione una tecla 
                cout << "Saliendo del programa..."; // Mensaje de salida
                break; // salimos del caso
            }
        } // Fin del switch
    } // Fin del ciclo de ejecucion
    while (opcion != 4); // Mientras la opcion sea diferente de 4 no saldremos del ciclo
    return 0; // Retornamos 0
} // Fin de la funcion principal del programa

// FIN DEL PROGRAMA: ap11.cpp