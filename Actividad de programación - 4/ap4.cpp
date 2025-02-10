/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 10 de Febrero de 2025
PROGRAMA: ap4.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 4, realizar un programa de serie Fibonacci con los 3 ciclos basicos en programacion. 
***********************************************************************************************/

// Incluyendo librerias necesarias
#include <conio.h>
#include <iostream>
using namespace std;

// Declarando variables necesarias
int temporal, limite, fibonacci, inic;
char ciclo, continuar;

// Funcion principal
main()
{
    cout << "-- Programa de Serie Fibonacci con 3 Ciclos Basicos (For, While y Do-while) --\n";
    do // Realizamos un ciclo para repetir el programa
    {
        fibonacci = 0; // Inicializamos las variables
        inic = 1;
        cout << "Ingrese el limite de la serie Fibonacci: ";
        cin >> limite;
        cout << "¿Que ciclo quieres utilizar? (F: For, W: While, D: Do-While): ";
        cin >> ciclo;
        switch (ciclo) // Realizamos un switch para seleccionar el ciclo
        {
            case 'F':
            case 'f':
                cout << "Serie Fibonacci con ciclo For: \n";
                for (fibonacci = 0; fibonacci <= limite;) // Realizamos el ciclo for
                {
                    cout << fibonacci << endl; // Imprimimos la serie
                    temporal = fibonacci + inic;
                    fibonacci = inic; // 
                    inic = temporal;
                }
                break; // Salimos del switch
            case 'W':
            case 'w':
                cout << "Serie Fibonacci con ciclo While: \n";
                while (fibonacci <= limite) // Realizamos el ciclo while
                {
                    cout << fibonacci << endl; // Imprimimos la serie
                    temporal = fibonacci + inic;
                    fibonacci = inic;
                    inic = temporal;
                }
                break; // Salimos del switch
            case 'D': 
            case 'd':
                cout << "Serie Fibonacci con ciclo Do-While: \n";
                do // Realizamos el ciclo do-while
                {
                    cout << fibonacci << endl; // Imprimimos la serie
                    temporal = fibonacci + inic;
                    fibonacci = inic;
                    inic = temporal;
                } while (fibonacci <= limite);
                break; // Salimos del switch
            default: // En caso de que no se seleccione un ciclo valido
                cout << "Eleccion Invalida\n";
                break; // Salimos del switch
    }
    cout << "¿Desear continuar? (S: Si, N: No): "; // Preguntamos si desea continuar
    cin >> continuar;
    } 
    while (continuar == 'S' || continuar == 's'); // Realizamos el ciclo do-while para repetir el programa
    cout << "Presione cualquier tecla para salir";
    getch(); // Esperamos a que el usuario presione una tecla
}