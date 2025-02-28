/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 27 de Febrero de 2025
PROGRAMA: ap9.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 9, elaborar un programa que realice operaciones con matrices. 
***********************************************************************************************/

// incluimos las librerias necesarias
#include "ap9_functions.cpp" // incluimos el archivo de funciones para poder utilizarlas
#include <vector> // incluimos la libreria vector, para poder utilizar vectores
#include <conio.h> // incluimos la libreria conio.h para poder utilizar la funcion getch()
#include <cstdlib> // incluimos la libreria cstdlib para poder utilizar la funcion system() y manipular la consola
#include <ctime> // incluimos la libreria ctime para poder utilizar la funcion time() y dar numeros aleatorios
#include <limits> // incluimos la libreria limits para poder utilizar numeric_limits que nos permite definir el rango de valores que acepta un cin
#include <iostream> // incluimos la libreria iostream para poder utilizar cout y cin
using namespace std; // utilizamos el espacio de nombres std

int main() // funcion principal del programa
{
    while (true) // ciclo infinito para que el programa se ejecute hasta que el usuario decida salir
    {
        int size, option, matrixChoice; // declaramos las variables size, option y matrixChoice de tipo entero
        size = size_matrix(); // inicializamos la variable size con el valor que retorne la funcion size_matrix() que pide al usuario el tamaño de las matrices
        vector<vector<int >> A(size, vector <int> (size, 0)); // declaramos la matriz A de tamaño size x size y la inicializamos con 0
        vector<vector<int >> B(size, vector <int> (size, 0)); // declaramos la matriz B de tamaño size x size y la inicializamos con 0
        bool restart = true; // declaramos la variable restart de tipo booleano y la inicializamos en true
        while (restart) // ciclo while que se ejecuta mientras la variable restart sea verdadera
        {
            option = cases(); // inicializamos la variable option con el valor que retorne la funcion cases() que muestra el menu de opciones y pide al usuario una opcion
            switch (option) // estructura switch que evalua la variable option 
            {
            case 1: // caso 1, llenado manual de matrices 
            {
                system("cls"); // limpiamos la consola
                cout << "Seleccione la matriz a llenar (1 para A, 2 para B): "; // mostramos un mensaje pidiendo al usuario que seleccione la matriz a llenar
                matrixChoice = 0; // inicializamos la variable matrixChoice en 0 que nos servira para seleccionar la matriz a llenar
                while (!(cin >> matrixChoice) || matrixChoice < 1 || matrixChoice > 2) // ciclo while que se ejecuta mientras la varible matrixChoice sea diferente de 1 o 2 
                {
                    cout << "Opcion invalida. Intente de nuevo: "; // mostramos un mensaje de error
                    cin.clear(); // limpiamos el buffer de entrada
                    cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
                }
                if (matrixChoice == 1) // si la variable matrixChoice es igual a 1 entonces llenamos la matriz A 
                {
                    cout << "Llenando Matriz A" << endl; // mostramos un mensaje
                    fillManual(A, size); // llamamos a la funcion fillManual() y le pasamos la matriz A y el tamaño de las matrices
                    cout << "Matriz A:" << endl; // mostramos un mensaje
                    displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                    pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                } 
                else if (matrixChoice == 2) // si no llenamos la matriz B
                {
                    cout << "Llenando Matriz B" << endl; // mostramos un mensaje
                    fillManual(B, size); // llamamos a la funcion fillManual() y le pasamos la matriz B y el tamaño de las matrices
                    cout << "Matriz B:" << endl; // mostramos un mensaje
                    displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                    pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                } 
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            } 
            case 2: // caso 2, llenado aleatorio de matrices
            {
                system("cls"); // limpiamos la consola
                fillRandom(A, size); // llamamos a la funcion fillRandom() y le pasamos la matriz A y el tamaño de las matrices
                fillRandom(B, size); // llamamos a la funcion fillRandom() y le pasamos la matriz B y el tamaño de las matrices
                cout << "Matriz A:" << endl; // mostramos un mensaje
                displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                cout << "Matriz B:" << endl; // mostramos un mensaje
                displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 3: // caso 3, editar elemento de matrices 
            {
                system("cls"); // limpiamos la consola
                cout << "Seleccione la matriz a editar (1 para A, 2 para B): "; // mostramos un mensaje pidiendo al usuario que seleccione la matriz a editar
                matrixChoice = 0; // inicializamos la variable matrixChoice en 0 que nos servira para seleccionar la matriz a editar
                while (!(cin >> matrixChoice) || matrixChoice < 1 || matrixChoice > 2) // ciclo while que se ejecuta mientras la varible matrixChoice sea diferente de 1 o 2, lo que nos permite seleccionar la matriz a editar
                {
                    cout << "Opcion invalida. Intente de nuevo: "; // mensaje de error
                    cin.clear(); // limpiamos el buffer de entrada
                    cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
                }
                if (matrixChoice == 1) // si la variable matrixChoice es igual a 1 entonces editamos la matriz A
                {
                    cout << "Editar elemento de Matriz A" << endl; // mostramos un mensaje
                    editElement(A, size); // llamamos a la funcion editElement() y le pasamos la matriz A y el tamaño de las matrices
                    cout << "Matriz A:" << endl; // mostramos un mensaje
                    displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                    pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                } 
                else if (matrixChoice == 2) // si no editamos la matriz B
                {
                    cout << "Editar elemento de Matriz B" << endl; // mostramos un mensaje
                    editElement(B, size); // llamamos a la funcion editElement() y le pasamos la matriz B y el tamaño de las matrices
                    cout << "Matriz B:" << endl; // mostramos un mensaje
                    displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                    pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                } 
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 4: // caso 4, vaciar matrices 
            {
                system("cls"); // limpiamos la consola
                clearMatrix(A, size); // llamamos a la funcion clearMatrix() y le pasamos la matriz A y el tamaño de las matrices
                clearMatrix(B, size); // llamamos a la funcion clearMatrix() y le pasamos la matriz B y el tamaño de las matrices
                cout << "Matrices vaciadas." << endl; // mostramos un mensaje
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 5: // caso 5, suma de matrices 
            {
                system("cls"); // limpiamos la consola
                vector<vector<int>> result = addMatrices(A, B, size); // declaramos la matriz result y la inicializamos con el valor que retorne la funcion addMatrices() que suma las matrices A y B
                cout << "Matriz A:" << endl; // mostramos un mensaje
                displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                cout << "Matriz B:" << endl; // mostramos un mensaje
                displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                cout << "Resultado de la suma:" << endl; // mostramos un mensaje
                displayMatrix(result, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz result y el tamaño de las matrices
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 6: // caso 6, resta de matrices 
            {
                system("cls"); // limpiamos la consola
                vector<vector<int>> result = subtractMatrices(A, B, size); // declaramos la matriz result y la inicializamos con el valor que retorne la funcion subtractMatrices() que resta las matrices A y B
                cout << "Matriz A:" << endl; // mostramos un mensaje
                displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                cout << "Matriz B:" << endl; // mostramos un mensaje
                displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                cout << "Resultado de la resta:" << endl; // mostramos un mensaje
                displayMatrix(result, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz result y el tamaño de las matrices
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 7: // caso 7, multiplicacion de matrices 
            {
                system("cls"); // limpiamos la consola
                vector<vector<int>> result = multiplyMatrices(A, B, size); // declaramos la matriz result y la inicializamos con el valor que retorne la funcion multiplyMatrices() que multiplica las matrices A y B
                cout << "Matriz A:" << endl; // mostramos un mensaje
                displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                cout << "Matriz B:" << endl; // mostramos un mensaje
                displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                cout << "Resultado de la multiplicacion:" << endl; // mostramos un mensaje
                displayMatrix(result, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz result y el tamaño de las matrices
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 8: // caso 8, mostrar matrices
            {
                system("cls"); // limpiamos la consola
                cout << "Matriz A:" << endl; // mostramos un mensaje
                displayMatrix(A, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz A y el tamaño de las matrices
                cout << "Matriz B:" << endl; // mostramos un mensaje
                displayMatrix(B, size); // llamamos a la funcion displayMatrix() y le pasamos la matriz B y el tamaño de las matrices
                pause_program(); // llamamos a la funcion pause_program() para pausar el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            case 9: // caso 9, reiniciar tamaño de matrices
            {
                system("cls"); // limpiamos la consola
                restart = restart_program(); // inicializamos la variable restart con el valor que retorne la funcion restart_program() que reinicia el programa
                system("cls"); // limpiamos la consola
                break; // salimos del switch
            }
            default: // caso por defecto, salir del programa
            {
                system("cls"); // limpiamos la consola
                cout << "Presione cualquier tecla para salir."; // mostramos un mensaje para que el usuario presione una tecla para salir
                getch(); // esperamos a que el usuario presione una tecla
                cout << endl << "Saliendo..." ; // mensaje de despedida
                return 0; // retornamos 0 para finalizar el programa
            } 
            } // fin del switch
        } // fin del while que se ejecuta mientras la variable restart sea verdadera para reiniciar el programa
    } // fin del ciclo infinito
} // fin de la funcion principal del programa