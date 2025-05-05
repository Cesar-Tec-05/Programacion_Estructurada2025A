// librerias de la aplicacion, fibonacci.

// Incluyendo librerias necesarias
#include <conio.h> // Libreria de entrada y salida
#include <limits> // Libreria para limites de entrada
#include <iostream>
using namespace std;

// Declarando variables necesarias
int temporal, limite, fibonacci, inic, ciclo;

// Funcion principal
void fun_fibonacci()
{
    cout << "-- Programa de Serie Fibonacci con 3 Ciclos Basicos (For, While y Do-while) --" << endl; // Mensaje de bienvenida
    fibonacci = 0; // Inicializamos las variables
    inic = 1;
    cout << "Ingrese el limite de la serie Fibonacci: ";
    while (!(cin >> limite)) // Validamos la opcion ingresada
    {
        cout << "Error, ingrese un limite valido: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    system("cls"); // Limpiamos la pantalla
    cout << "¿Que ciclo quieres utilizar? (1: For, 2: While, 3: Do-While): ";
    while (!(cin >> ciclo) || ciclo < 1 || ciclo > 3) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    system("cls"); // Limpiamos la pantalla
    switch (ciclo) // Realizamos un switch para seleccionar el ciclo
    {
        case 1:
        {
            cout << "Serie Fibonacci con ciclo For:" << endl; // Mensaje de bienvenida
            for (fibonacci = 0; fibonacci <= limite;) // Realizamos el ciclo for
            {
                cout << fibonacci << endl; // Imprimimos la serie
                temporal = fibonacci + inic;
                fibonacci = inic; // 
                inic = temporal;
            }
            break; // Salimos del switch
        }
        case 2:
        {
            cout << "Serie Fibonacci con ciclo While:" << endl; // Mensaje de bienvenida
            while (fibonacci <= limite) // Realizamos el ciclo while
            {
                cout << fibonacci << endl; // Imprimimos la serie
                temporal = fibonacci + inic;
                fibonacci = inic;
                inic = temporal;
            }
            break; // Salimos del switch
        }
        default:
        { 
            cout << "Serie Fibonacci con ciclo Do-While:" << endl; // Mensaje de bienvenida
            do // Realizamos el ciclo do-while
            {
                cout << fibonacci << endl; // Imprimimos la serie
                temporal = fibonacci + inic;
                fibonacci = inic;
                inic = temporal;
            } while (fibonacci <= limite);
            break; // Salimos del switch
        }
    }
    cout << endl << "Precione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch(); // Espera a que el usuario presione una tecla
}