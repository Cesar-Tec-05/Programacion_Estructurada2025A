/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 25 de Marzo de 2025
PROGRAMA: ordenamiento_palabras.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Ordenamiento de Palabras
***********************************************************************************************/

#include <conio.h> // incluimos la libreria conio.h para poder usar la funcion getch()
#include <iostream> // incluimos la libreria iostream para poder usar las funciones de entrada y salida
using namespace std; // usamos el espacio de nombres std
#include <string> // incluimos la libreria string para poder usar el tipo de dato string

int main() // funcion principal
{
    const int n = 5; // declaramos una constante n con valor 5
    string palabras[n]; // declaramos un arreglo de strings llamado palabras con tamaño n
    cout << "-- Programa de Ordenamiento de Palabras --" << endl; // imprimimos un mensaje
    cout << "Ingresa 5 palabras: " << endl; // imprimimos un mensaje
    for (int i = 0; i < n; i++) // ciclo for que recorre el arreglo palabras
    {
        cout << "Palabra " << i + 1 << ": "; // imprimimos un mensaje
        cin >> palabras[i]; // leemos una palabra y la guardamos en el arreglo palabras
    }
    for (int i = 0; i < n - 1; i++) // ciclo for que recorre el arreglo palabras
    {
        for (int j = 0; j < n - 1; j++) // ciclo for que recorre el arreglo palabras para comparar las palabras
        {
            if (palabras[j] > palabras[j + 1]) // si la palabra actual es mayor que la siguiente
                swap(palabras[j], palabras[j + 1]); // intercambiamos las palabras para ordenarlas alfabeticamente
        }
    }
    cout << "Palabras ordenadas alfabeticamente: " << endl; // imprimimos un mensaje
    for (int i = 0; i < n; i++) // ciclo for que recorre el arreglo palabras
        cout << palabras[i] << " "; // imprimimos la palabra actual
    cout << endl << "Preciona una tecla para salir..."; // imprimimos un mensaje
    getch(); // esperamos a que el usuario presione una tecla
    return 0; // regresamos 0 para indicar que el programa termino correctamente
} // fin de la funcion principal
