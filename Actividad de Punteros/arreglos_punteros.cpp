/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 13 de Marzo de 2025
PROGRAMA: arreglos_punteros.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Punteros, ejemplos de arreglos con punteros
***********************************************************************************************/

#include <conio.h>
#include <iostream>
using namespace std;

int arreglo[10];
int *puntero = arreglo;

int main()
{
    cout << "-- Programa de arreglo con punteros --" << endl;
    cout << "Ingresa 10 numeros enteros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i + 1 << ": ";	
        cin >> *(puntero + i);
    }
    cout << "Presiona una tecla para continuar...";
    getch();
    system("cls");
    cout << "Los numeros ingresados son: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i + 1 << ": " << *(puntero + i) << endl;
    }
    cout << "Presiona una tecla para continuar...";
    getch();
    system("cls");
    cout << "Lista de numeros inversa: " << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << "Numero " << i + 1 << ": " << *(puntero + i) << endl;
    }
    cout << "Presiona una tecla para salir del programa...";
    getch();
    return 0;
}