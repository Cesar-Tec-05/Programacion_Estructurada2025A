/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 11 de Febrero de 2025
PROGRAMA: ap6.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 6, determinar la suma de los cuadrados de una secuencia de números dada por un usuario. 
***********************************************************************************************/
// Incluimos las librerias necesarias para el programa.
#include <conio.h>
#include <cmath>
#include <iostream>
using namespace std;

// Declaramos las variables necesarias para el programa.
unsigned int val_usu, i, suma, cuadrado;
char salir;

// Función principal del programa.
main()
{
    cout << "-- Programa de suma de Cuadrados --" << endl;
    do // Iniciamos un ciclo do-while para repetir el programa las veces que el usuario lo desee.
    {
        cout << "Escribe un valor entero (mayor a 0 y menor o igual a 2,300): ";
        cin >> val_usu;
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
        cout << "Deseas salir del programa? (s/n): ";
        cin >> salir; // Preguntamos al usuario si desea salir del programa.
    } 
    while (salir != 's' && salir != 'S'); // Si el usuario no desea salir, repetimos el programa.
    cout << "Presiona cualquier tecla para salir del programa." << endl; // Mensaje de despedida.
    getch(); // Esperamos a que el usuario presione una tecla para cerrar el programa.
    }