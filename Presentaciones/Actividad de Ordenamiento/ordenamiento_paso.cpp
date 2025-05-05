/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 25 de Marzo de 2025
PROGRAMA: ordenamiento_paso.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Ordenamiento Paso a Paso.
***********************************************************************************************/

#include <conio.h> // incluimos la libreria conio.h para poder usar la funcion getch()
#include <iostream> // incluimos la libreria iostream para poder usar cout y cin 
using namespace std; // usamos el espacio de nombres std

int main() // funcion principal
{
    cout << "-- Programa de Ordenamiento Paso a Paso --" << endl; // imprimimos un mensaje en pantalla
    int numeros[] = {3, 4, 5, 2, 1}; // declaramos un arreglo de enteros con 5 elementos
    int n = 5; // declaramos una variable n y le asignamos el valor 5
    cout << "Arreglo original: "; 
    for (int i = 0; i < n; i++) // ciclo for para recorrer el arreglo
    {
        cout << numeros[i] << " "; // imprimimos el elemento en la posicion i
    }
    for (int i = 0; i < n - 1; i++) // ciclo for para recorrer el arreglo
    {
        for (int j = 0; j < n - 1; j++) // ciclo anidado para aser la iteracion
        {
            if (numeros[j] > numeros[j + 1]) // condicion para comparar los elementos
            {
                int temp = numeros[j]; // variable temporal para guardar el valor de numeros[j]
                numeros[j] = numeros[j + 1]; // intercambiamos los valores
                numeros[j + 1] = temp; // asignamos el valor de temp a numeros[j+1]
            }
        }
    }
    cout << endl << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) // ciclo for para recorrer el arreglo
    {
        cout << numeros[i] << " "; // imprimimos el elemento en la posicion i
    }
    cout << endl << "Preciona una tecla para salir...";
    getch(); // esperamos a que el usuario presione una tecla
    return 0; // regresamos 0 para indicar que el programa termino correctamente
} // fin de la funcion principal
