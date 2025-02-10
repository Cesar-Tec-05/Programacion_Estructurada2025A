/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 10 de Febrero de 2025
PROGRAMA: ap4.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 4, realizar un programa de serie Fibonacci con los 3 ciclos basicos en programacion. 
***********************************************************************************************/

#include <conio.h>
#include <iostream>
using namespace std;

main()
{
    int temporal, limite, fibonacci, inic;
    char ciclo, continuar;

    cout << "-- Programa de Serie Fibonacci con 3 Ciclos Basicos (For, While y Do-while) --\n";
    do 
    {
        fibonacci = 0;
        inic = 1;
        cout << "Ingrese el limite de la serie Fibonacci: ";
        cin >> limite;
        cout << "¿Que ciclo quieres utilizar? (F: For, W: While, D: Do-While): ";
        cin >> ciclo;
        switch (ciclo)
        {
            case 'F':
            case 'f':
                cout << "Serie Fibonacci con ciclo For: \n";
                for (fibonacci = 0; fibonacci <= limite;)
                {
                    cout << fibonacci << endl;
                    temporal = fibonacci + inic;
                    fibonacci = inic;
                    inic = temporal;
                }
                break;
            case 'W':
            case 'w':
                cout << "Serie Fibonacci con ciclo While: \n";
                while (fibonacci <= limite)
                {
                    cout << fibonacci << endl;
                    temporal = fibonacci + inic;
                    fibonacci = inic;
                    inic = temporal;
                }
                break;
            case 'D':
            case 'd':
                cout << "Serie Fibonacci con ciclo Do-While: \n";
                do
                {
                    cout << fibonacci << endl;
                    temporal = fibonacci + inic;
                    fibonacci = inic;
                    inic = temporal;
                } while (fibonacci <= limite);
                break;
            default:
                cout << "Eleccion Invalida\n";
                break;
    }
    cout << "¿Desear continuar? (S: Si, N: No): ";
    cin >> continuar;
    } 
    while (continuar == 'S' || continuar == 's');
    cout << "Presione cualquier tecla para salir";
    getch();
}