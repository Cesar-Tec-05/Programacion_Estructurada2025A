/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 03 de Marzo de 2025
PROGRAMA: ap10.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 10, elaborar un programa con vectores o con arreglos 
en donde se realicen las operaciones de conjuntos.
***********************************************************************************************/

// Incluimos las librerias necesarias
#include "ap10_functions.cpp" // Incluimos el archivo de funciones de la actividad 10
#include <conio.h> // Incluimos la libreria para poder usar la funcion getch() que nos ayuda a pausar el programa o manipular la consola
#include <vector> // Incluimos la libreria para poder usar vectores
#include <algorithm> // Incluimos la libreria para poder usar la funcion find() que nos ayuda a buscar un elemento en un vector
#include <string> // Incluimos la libreria para poder usar cadenas de texto
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres estandar

int main() // Funcion principal del programa
{
    cout << endl << "-- Programa de Operaciones Basicas de Conjuntos --"; // Mensaje de bienvenida
    while (true) // Ciclo infinito
    {
        vector<string> A, B; // Declaramos dos vectores de cadenas de texto para los conjuntos A y B
        int opcion; // Declaramos una variable para la opcion del menu
        bool reiniciar = true; // Declaramos una variable para reiniciar el programa y la inicializamos en verdadero
        while (reiniciar) // Mientras reiniciar sea verdadero no saldremos del ciclo y se reiniciara el programa  
        {
            opcion = menu(); // Mostramos el menu y guardamos la opcion seleccionada
            switch (opcion) // Evaluamos la opcion seleccionada
            {
                case 1: // caso 1, insertar un elemento
                {
                    system("cls"); // Limpiamos la consola
                    insertarElementoSeleccionado(A, B); // Llamamos a la funcion para insertar un elemento en un conjunto
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 2: // caso 2, borrar un elemento
                {
                    system("cls"); // Limpiamos la consola
                    borrarElementoSeleccionado(A, B); // Llamamos a la funcion para borrar un elemento en un conjunto
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 3: // caso 3, editar un elemento  
                {
                    system("cls"); // Limpiamos la consola
                    editarElementoSeleccionado(A, B); // Llamamos a la funcion para editar un elemento en un conjunto
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 4: // caso 4, vaciar un conjunto
                {
                    system("cls"); // Limpiamos la consola
                    vaciarSeleccion(A, B); // Llamamos a la funcion para vaciar un conjunto
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 5: // caso 5, mostrar los conjuntos
                {
                    system("cls"); // Limpiamos la consola
                    cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
                    cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 6: // caso 6, union de conjuntos
                {
                    system("cls"); // Limpiamos la consola
                    cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
                    cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
                    cout << "Resultado:" << endl; // Mostramos el resultado
                    cout << "A U B: "; mostrarConjunto(unionConjuntos(A, B)); // Mostramos la union de los conjuntos
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls");  // Limpiamos la consola
                    break; // salimos del caso
                }
                case 7: // caso 7, interseccion de conjuntos
                {
                    system("cls"); // Limpiamos la consola
                    cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
                    cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
                    cout << "Resultado:" << endl; // Mostramos el resultado
                    cout << "A ^ B: "; mostrarConjunto(interseccionConjuntos(A, B)); // Mostramos la interseccion de los conjuntos
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 8: // caso 8, diferencia de conjuntos
                {
                    system("cls"); // Limpiamos la consola
                    diferenciaSeleccionado(A, B); // Llamamos a la funcion para seleccionar la diferencia de conjuntos
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls");  // Limpiamos la consola
                    break; // salimos del caso
                }
                case 9: // caso 9, complemento del conjunto
                {
                    system("cls"); // Limpiamos la consola
                    complementoSeleccionado(A, B); // Llamamos a la funcion para seleccionar el complemento de un conjunto
                    pausar_programa(); // Llamamos a la funcion para pausar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                case 10: // caso 10, reiniciar el programa
                {
                    system("cls"); // Limpiamos la consola
                    reiniciar = reiniciar_programa(); // Llamamos a la funcion para reiniciar el programa
                    system("cls"); // Limpiamos la consola
                    break; // salimos del caso
                }
                default: // caso por defecto, salir del programa
                {
                    system("cls"); // Limpiamos la consola
                    cout << "Presione cualquier tecla para salir."; // Indicamos al usuario que presione cualquier tecla para salir 
                    getch(); // Esperamos a que el usuario presione una tecla
                    cout << endl << "Saliendo..." ; // Mensaje de salida
                    return 0; // Salimos del programa
                }
            } // Fin del switch
        } // Fin del while para reiniciar el programa
    } // Fin del while infinito
} // Fin de la funcion principal del programa
