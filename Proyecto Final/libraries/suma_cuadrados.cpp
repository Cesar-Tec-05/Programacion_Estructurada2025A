// librerias de la aplicacion, suma de cuadrados

// Incluimos las librerias necesarias para el programa.
#include <conio.h>
#include <limits>
#include <cmath>
#include <iostream>
using namespace std;

// Declaramos las variables necesarias para el programa.

// Función principal del programa.
void fun_suma_cuadrados()
{
    unsigned int val_usu, i, suma, cuadrado;

    cout << "-- Programa de suma de Cuadrados --" << endl;
    cout << "Escribe un valor entero (mayor a 0 y menor o igual a 2,300): ";
    while (!(cin >> val_usu) || val_usu < 0 || val_usu > 2300) // Validamos la opcion ingresada
    {
        cout << "Error. Escribe un valor entero (mayor a 0 y menor o igual a 2,300): "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    system("cls");
    if (val_usu <= 0 || val_usu > 2300) // Validamos que el valor ingresado sea mayor a 0 y menor o igual a 2,300.
        cout << "El valor ingresado no es valido, intenta de nuevo." << endl;
    else // Si el valor es valido, procedemos a calcular la suma de los cuadrados de los numeros del 0 al valor ingresado.
    {
        for (i = 0; i <= val_usu; i++) // Iniciamos un ciclo for para recorrer los numeros del 0 al valor ingresado.
        {
            cuadrado = pow(i, 2); // Calculamos el cuadrado del numero actual con la librearia cmath.
            suma += cuadrado; // Sumamos el cuadrado del numero actual a la suma total.
            cout << i << "^2 = " << cuadrado << endl; // Mostramos el cuadrado del numero actual.
        }
        cout << "La suma de los cuadrados de los numeros del 0 al " << val_usu << " es: " << suma << endl; // Mostramos la suma total.
    }
    cout << "Presione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch();
}