/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 9 de abril de 2025
PROGRAMA: ap_j2.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación Juego 2, elaborar el juego de las TORRES DE HANOI.
***********************************************************************************************/

#include "ap_j2_functions.cpp" // Incluimos el archivo de funciones para el juego de las torres de hanoi
#include <conio.h> // Incluimos la libreria para poder usar la funcion getch() que nos ayuda a pausar el programa o manipular la consola
#include <iostream> // Incluimos la libreria iostream para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres std para no tener que escribir std:: cada vez que usemos una funcion de la libreria iostream

int main() // Funcion principal del programa
{
    int opcion; // Variable para almacenar la opcion seleccionada por el usuario
    bool ejecucion = true; // Variable para controlar la ejecucion del programa
    pantallaInicio(); // Llamamos a la funcion para mostrar la pantalla de inicio
    system("cls"); // Limpiamos la consola
    while (ejecucion) // Mientras la variable ejecucion sea verdadera
    {
        opcion = mostrarMenu(); // Llamamos a la funcion para mostrar el menu y almacenamos la opcion seleccionada por el usuario
        system("cls"); // Limpiamos la consola           
        switch (opcion) // Estructura switch para controlar la opcion seleccionada por el usuario
        {
            case 1: // Si el usuario selecciona la opcion 1
            {
                jugarHanoi(); // Iniciar partida
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // Salimos del switch
            }
            default: // Si el usuario selecciona la opcion 2
            {
                ejecucion = false; // Cambiamos la variable ejecucion a false para salir del bucle
                cout << "Presiona Enter para salir." << endl; // Mensaje de salida
                getch(); // Esperamos a que el usuario presione Enter
                cout << "Saliendo del juego..."; // Mensaje de salida
                break; // Salimos del switch
            }
        } // Fin del switch
    } // Fin del bucle while
    return 0; // Retornamos 0 para indicar que el programa se ejecuto correctamente
} // Fin de la funcion main, retorna un entero

// Fin del programa principal del juego de las torres de hanoi
