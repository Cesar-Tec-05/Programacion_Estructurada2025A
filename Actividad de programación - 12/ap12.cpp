/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 10 de Abril de 2025
PROGRAMA: ap12.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 12, realizar un programa que me permita identificar si una palabra es palindromo. 
***********************************************************************************************/

#include "ap12_functions.cpp" // Incluimos el archivo de funciones 
#include <algorithm> // Para usar la funcion transform
#include <conio.h> // Para usar la funcion getch
#include <string> // Para usar la clase string
#include <iostream> // Para usar la clase cin y cout
using namespace std; // Usamos el espacio de nombres std

int main() // Funcion principal
{
    int eleccion = 1; // Variable para la eleccion del usuario
    string palabra; // Variable para la palabra a evaluar
    cout << "-- Programa para identificar si una palabra es palindromo --" << endl; // Mensaje de inicio
    while (eleccion == 1) // Mientras el usuario quiera seguir 
    {
        cout << "Introduce una palabra: "; // Mensaje para introducir la palabra
        cin >> palabra; // Leemos la palabra ingresada por el usuario
        system("cls"); // Limpiamos la pantalla

        cout << "La palabra es: " << palabra << endl; // Mostramos la palabra ingresada
        cout << "La palabra es un palindromo?: " << (esPalindromo(palabra) ? "Si" : "No") << endl; // Mostramos si es palindromo o no
        cout << "Numero de caracteres (alfabeticos): " << contarCaracteres(palabra) << endl; // Mostramos el numero de caracteres
        cout << "Numero de vocales: " << contarVocales(palabra) << endl; // Mostramos el numero de vocales
        cout << "Numero de consonantes: " << contarConsonantes(palabra) << endl; // Mostramos el numero de consonantes
        pausar_programa(); // Llamamos a la funcion para pausar el programa
        system("cls"); // Limpiamos la pantalla

        cout << "Quieres introducir otra palabra? (1: Si, 2: No): "; // Mensaje para preguntar si quiere continuar
        while (!(cin >> eleccion) || eleccion < 1 || eleccion > 2) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
        }
        system("cls"); // Limpiamos la pantalla
    }

    cout << "Presione Enter para salir..." << endl; // Mensaje para salir
    getch(); // Esperamos a que el usuario presione una tecla
    cout << "Saliendo del programa..." << endl; // Mensaje de despedida
    return 0; // Retornamos 0 para indicar que el programa se ejecuto correctamente
} // Fin de la funcion main, retorna 0 para indicar que el programa se ejecuto correctamente

// Fin del programa