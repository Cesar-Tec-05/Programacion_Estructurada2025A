// librerias de la aplicacion, detectar multiplos de 3 y 5 

// Incluimos las librerias necesarias
#include <conio.h> // Libreria de entrada y salida
#include <limits> // Libreria para limites de entrada
#include <iostream>
using namespace std;

// Declaramos las variables necesarias
int num, contador3, contador5, suma3, suma5, i;

// Funcion principal
void fun_detectar_multiplos_3_5()
{
    cout << "-- Programa Para Detectar Multiplos de 3 y 5 --" << endl;
    cout << "Ingrese un numero entero entre 0 y 1000: ";
    while (!(cin >> num) || num < 0 || num > 1000) // Validamos la opcion ingresada
    {
        cout << "Error, ingrese un numero entero entre 0 y 1000: ";
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    system("cls"); // Limpiamos la pantalla
    if (num < 0 || num > 1000) // Verificamos que el número este en el rango
        cout << "Numero fuera de rango" << endl;
    else
    {
        contador3 = 0;
        contador5 = 0;
        suma3 = 0;
        suma5 = 0;
        cout << "Multiplos de 3:" << endl;
        for (i = 1; i <= num; i++) // Realizamos el ciclo para detectar los multiplos de 3 y 5
        {
            if (i % 3 == 0) // Verificamos si el número es multiplo de 3
            {
                cout << i << endl;
                contador3++; // Aumentamos el contador
                suma3 += i; // Sumamos los multiplos
            }
        }
        cout << "Cantidad de multiplos de 3: " << contador3 << endl;
        cout << "Suma de multiplos de 3: " << suma3 << endl;
        cout << endl;
        cout << "Multiplos de 5:" << endl;
        for (i = 1; i <= num; i++) // Realizamos el ciclo para detectar los multiplos de 5
        {
            if (i % 5 == 0) // Verificamos si el número es multiplo de 5
            {
                cout << i << endl;
                contador5++; // Aumentamos el contador
                suma5 += i; // Sumamos los multiplos
            }
        }
        cout << "Cantidad de multiplos de 5: " << contador5 << endl;
        cout << "Suma de multiplos de 5: " << suma5 << endl;
    }
    cout << endl << "Precione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch(); // Espera a que el usuario presione una tecla
}