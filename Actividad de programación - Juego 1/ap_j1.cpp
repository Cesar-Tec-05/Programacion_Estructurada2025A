/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 29 de Marzo de 2025
PROGRAMA: ap_j1.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación Juego 1, elaborar el juego del ahorcado.
***********************************************************************************************/

#include "ap_j1_functions.cpp" // Incluimos el archivo de funciones del juego
#include <conio.h> // Incluimos la libreria para poder usar la funcion getch() que nos ayuda a pausar el programa o manipular la consola
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres estandar

int main() // Funcion principal
{
    cout << "-- Juego del Ahorcado --" << endl; // Mensaje de bienvenida
    int modo;
    bool finPrograma = true; // Variable para controlar el ciclo del menu
    while (finPrograma) // Ciclo infinito para el menu
    {
        modo = menuOpciones(); // Mostramos el menu de opciones y guardamos la opcion seleccionada
        switch (modo) // Estructura switch para seleccionar la opcion del menu 
        {
            case 1: // Caso 1: Jugar contra la computadora
            {
                system("cls"); // Limpiamos la consola
                jugarContraComputadora();
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // Salimos del case 1
            }
            case 2: // Caso 2: Jugar contra otro jugador
            {
                system("cls"); // Limpiamos la consola
                jugarContraOtroJugador();
                pausar_programa(); // Llamamos a la funcion para pausar el programa
                system("cls"); // Limpiamos la consola
                break; // Salimos del case 2
            }
            default: // Caso 3: Salir del programa
            {
                finPrograma = false; // Cambiamos el valor de la variable finPrograma a false para salir del ciclo
                system("cls"); // Limpiamos la consola
                cout << "Preciona cualquier tecla para salir." << endl; // Mensaje de salida
                getch(); // Esperamos a que el usuario presione una tecla
                cout << "Saliendo del juego..."; // Mensaje de salida
                break; // Salimos del case 3
            }
        } // Fin del switch
    } // Fin del ciclo while
    return 0; // Retornamos 0 para indicar que el programa se ejecuto correctamente
} // Fin de la funcion main, retorna un valor entero
// FIN DEL PROGRAMA: ap_j1.cpp