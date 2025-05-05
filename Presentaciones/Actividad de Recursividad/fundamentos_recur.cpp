/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 18 de Marzo de 2025
PROGRAMA: fundamentos_recur.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de recursividad, fundamentos de recursividad.
***********************************************************************************************/

#include <conio.h> // Libreria para el manejo de entrada y salida de datos
#include <iostream> // Libreria para el manejo de entrada y salida de datos
using namespace std; // Espacio de nombres estandar

void rec(int n) // Funcion recursiva que recibe un entero n 
{
    if(n > 0) // Si n es mayor a 0
    {    
        cout << n << " "; // Imprimir n
        rec(n - 1); // Llamar a la funcion rec con n - 1
    }
} // Fin de la funcion recursiva rec

int factorial(int n) // Funcion recursiva que recibe un entero n
{
    if(n == 0  || n == 1) // Si n es igual a 0
        return 1; // Retornar 1
    else // Si no
        return n * factorial(n - 1); // Retornar n multiplicado por la funcion factorial con n - 1
} // Fin de la funcion recursiva de factorial

int main() // Funcion principal
{
    cout << "-- Programa de fundamentos de recursividad --" << endl; // Imprimir mensaje
    int numero;
    cout << "Ingresa un numero entero: "; // Imprimir mensaje
    cin >> numero; // Leer un numero entero
    cout << "Factorial de " << numero << " es: " << factorial(numero) << endl; // Imprimir el factorial del numero con la funcion factorial
    cout << endl; // Imprimir salto de linea
    cout << "Recursividad de " << numero << " es: "; // Imprimir mensaje
    rec(numero); // Llamar a la funcion rec con numero
    cout << endl; // Imprimir salto de linea
    cout << "Precione una tecla para Salir..."; // Imprimir mensaje
    getch();
    return 0; // Retornar 0
} // Fin de la funcion principal