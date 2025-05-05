/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 18 de Marzo de 2025
PROGRAMA: recurcividad_fibonacci.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de recursividad, realizar una serie fibonacci con el metodo de recursividad.
***********************************************************************************************/

#include <conio.h> // Libreria para el manejo de entrada y salida de datos
#include <iostream> // Libreria para el manejo de entrada y salida de datos
using namespace std; // Espacio de nombres estandar

int fibonacci(int n) // Funcion recursiva que recibe un entero n
{
    if (n == 0) // Si n es igual a 0
        return 0; // Retornar 0
    else if (n == 1) // Si n es igual a 1
        return 1; // Retornar 1
    else // Si no
        return fibonacci(n - 1) + fibonacci(n - 2); // Retornar la suma de la funcion fibonacci con n - 1 y la funcion fibonacci con n - 2
} // Fin de la funcion recursiva de fibonacci

int main() // Funcion principal
{
    cout << "-- Programa de serie fibonacci con recursividad --" << endl; // Imprimir mensaje
    int numero;
    cout << "Ingresa un numero entero: "; // Imprimir mensaje
    cin >> numero; // Leer un numero entero
    cout << "Serie fibonacci de " << numero << " es: "; // Imprimir mensaje
    for(int i = 0; i < numero; i++) // Ciclo for que recorre de 0 a numero
        cout << fibonacci(i) << " "; // Imprimir la funcion fibonacci con i
    cout << endl; // Imprimir salto de linea
    cout << "Precione una tecla para Salir..."; // Imprimir mensaje
    getch();
    return 0; // Retornar 0
} // Fin de la funcion principal