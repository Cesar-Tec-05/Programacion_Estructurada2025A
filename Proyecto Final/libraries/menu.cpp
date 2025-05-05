// libreria para el menu de opciones

#include <limits> // Para std::numeric_limits
#include <iostream>
using namespace std;

int general_menu()
{
    int eleccion;
    cout << "Elija un programa que desea ejecutar:" << endl;
    cout << "0. Salir" << endl;
    cout << "1. Hola Mundo" << endl;
    cout << "2. Datos del Estudiante" << endl;
    cout << "3. Caracteres y Cadenas" << endl;
    cout << "4. Multiplicador de Valores (Estructuras de Control)" << endl;
    cout << "5. Serie Fibonacci" << endl;
    cout << "6. Detector de Multiplos de 3 y 5" << endl;
    cout << "7. Suma de Cuadrados" << endl;
    cout << "8. Detector de Numeros Primos" << endl;
    cout << "9. Suma de Arreglos" << endl;
    cout << "10. Operaciones con Matrices" << endl;
    cout << "11. Operaciones Basicas de Conjuntos" << endl;
    cout << "12. Secuencias de Collatz" << endl;
    cout << "13. Detector de Palabras Palindromo" << endl;
    cout << "14. Juego del Ahorcado" << endl;
    cout << "15. Juego Torres Hanoi" << endl;
    cout << "Ingrese una opcion: "; // Mensaje para ingresar la opcion
    while (!(cin >> eleccion) || eleccion < 0 || eleccion > 15) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    return eleccion; // Retornamos la opcion elegida
}