/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 13 de Marzo de 2025
PROGRAMA: punteros.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Punteros, ejemplos de uso de punteros
***********************************************************************************************/

#include <conio.h>
#include <iostream>
using namespace std;

int numero = 10;
int *puntero = &numero;
int main() 
{
    cout << "-- Programa de punteros --" << endl;
    cout << "Direccion de memoria de la variable numero: " << &numero << endl;
    cout << "Direccion almacenada en el puntero: " << puntero << endl;
    cout << "Valor de numero a travez del puntero: " << *puntero << endl;

    *puntero = 20;
    cout << "Valor de numero despues de modificarlo a travez del puntero: " << numero << endl;
    cout << "Direccion de memoria del puntero: " << &puntero << endl;
    cout << "Presiona una tecla para salir del programa...";
    getch();
    return 0;
}
