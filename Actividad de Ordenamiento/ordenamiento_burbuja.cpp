/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 25 de Marzo de 2025
PROGRAMA: ordenamiento.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Ordenamiento Burbuja, Programa que ordena un arreglo de enteros de menor a mayor.
***********************************************************************************************/

#include <conio.h> // Incluimos la libreria conio.h para poder usar la funcion getch()
#include <iostream> // Incluimos la libreria iostream para poder usar cout y cin
using namespace std; // Usamos el espacio de nombres std

int main() // Funcion principal
{
    cout << "-- Programa de Ordenamiento de Burbuja --" << endl; // Imprimimos un mensaje en pantalla
    int numeros[] = {3, 4, 5, 2, 1}; // Declaramos un arreglo de enteros con 5 elementos
    int n = 5; // Declaramos una variable n y le asignamos el valor 5
    cout << "Arreglo original: "; // 
    for (int i = 0; i < n; i++) // Iniciamos un ciclo for que recorre el arreglo de enteros
    {
        cout << numeros[i] << " "; // Imprimimos el elemento actual del arreglo
    }
    for (int i = 0; i < n - 1; i++) // Iniciamos un ciclo for que recorre el arreglo de enteros
    {
        for (int j = 0; j < n - 1; j++) // For anidado para comparar los elementos del arreglo
        {
            if (numeros[j] > numeros[j + 1]) // Si el elemento actual es mayor al siguiente 
            {
                int temp = numeros[j]; // Guardamos el elemento actual en una variable temporal
                numeros[j] = numeros[j + 1]; // Intercambiamos los elementos
                numeros[j + 1] = temp; // Intercambiamos los elementos
            }
        }
    }
    cout << endl << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) // Iniciamos un ciclo for que recorre el arreglo de enteros
    {
        cout << numeros[i] << " "; // Imprimimos el elemento actual del arreglo
    }
    cout << endl << "Preciona una tecla para salir...";
    getch(); // Esperamos a que el usuario presione una tecla
    return 0; // Retornamos 0 para indicar que el programa termino sin errores
} // Fin de la funcion principal