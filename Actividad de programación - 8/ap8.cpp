/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 20 de Febrero de 2025
PROGRAMA: ap8.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 8, elaborar una suma de un arreglo de 10 elementos 
***********************************************************************************************/

// Incluimos las librerías necesarias
#include <vector> // Para usar vectores, que son arreglos dinámicos
#include <cstdlib> // Para usar la función system, que nos permite limpiar la pantalla
#include <limits> // Para usar numeric_limits, que nos permite obtener el valor máximo de un tipo de dato, que usamos para limpiar el buffer de entrada
#include <conio.h> // Para usar la función getch, que nos permite esperar a que el usuario presione una tecla
#include <iostream> // Para usar cout y cin, que nos permiten mostrar y recibir datos del usuario
using namespace std; // Para no tener que escribir std:: antes de cada función de la librería estándar
#include "ap8_functions.cpp" // Incluimos el archivo con las funciones de la actividad

int main() // Función principal del programa
{
    cout << "-- Programa de sumatoria de un arreglo de 10 elementos --" << endl; // Mensaje de bienvenida  	
    vector <int> arreglo; // Creamos un vector para almacenar los elementos
    int opcion; // Variable para almacenar la opción seleccionada por el usuario
    while (true) // Ciclo infinito para mostrar el menú y realizar las operaciones, 
    {
        cout << "\nMenu:\n1. Agregar elemento\n2. Mostrar lista\n3. Calcular sumatoria\n4. Editar elemento\n5. Borrar elemento\n6. Vaciar arreglo\n7. Salir\nOpcion: "; // Mostramos el menú
        while (!(cin >> opcion) || opcion < 1 || opcion > 7) // Mientras la opcion ingresada no sea valida
        {
            cout << "\nOpcion invalida. Intente de nuevo: "; // Pedimos al usuario que ingrese una opción válida
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize> :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        switch (opcion) // Segun la opcion seleccionada por el usuario, realizamos la funcion correspondiente
        {
            case 1: // Opcion 1 
            {
                system("cls"); // Limpiamos la pantalla
                agregarElemento(arreglo); // Llamamos a la función para agregar un elemento al arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            } 
            case 2: // Opcion 2
            {
                system("cls"); // Limpiamos la pantalla 
                mostrarLista(arreglo); // Llamamos a la función para mostrar los elementos del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch	
            }
            case 3: // Opcion 3
            {
                system("cls"); // Limpiamos la pantalla 
                calcularSuma(arreglo); // Llamamos a la función para calcular la sumatoria de los elementos del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch
            } 
            case 4: // Opcion 4 
            {
                system("cls"); // Limpiamos la pantalla
                editarElemento(arreglo); // Llamamos a la función para editar un elemento del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            } 
            case 5: // Opcion 5
            {
                system("cls"); // Limpiamos la pantalla 
                borrarElemento(arreglo); // Llamamos a la función para borrar un elemento del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa	
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch
            } 
            case 6: // Opcion 6
            {
                system("cls"); // Limpiamos la pantalla
                vaciarArreglo(arreglo); // Llamamos a la función para vaciar el arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            }
            case 7: // Opcion 7
            {
                system("cls"); // Limpiamos la pantalla
                cout << "\nPresione cualquier tecla para salir.\n"; // Mensaje para indicar al usuario que presione una tecla para salir 
                getch(); // Esperamos a que el usuario presione una tecla
                cout << "Saliendo..."; // Mensaje de despedida
                return 0; // Salimos del programa
            } 
        } 
    }
} // Fin de la función principal del programa