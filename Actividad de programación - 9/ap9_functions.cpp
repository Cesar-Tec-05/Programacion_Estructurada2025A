// PROGRAMA: ap9_functions.cpp
// Funciones de la actividad de programación 9

// incluimos las librerias necesarias
#include <vector> // incluimos la libreria vector, para poder utilizar vectores
#include <ctime> // incluimos la libreria ctime para poder utilizar la funcion time() y dar numeros aleatorios
#include <limits> // incluimos la libreria limits para poder utilizar numeric_limits que nos permite definir el rango de valores que acepta un cin
#include <iostream> // incluimos la libreria iostream para poder utilizar cout y cin
using namespace std; // utilizamos el espacio de nombres std

int size_matrix() // funcion que pide al usuario el tamaño de las matrices 
{
    cout << "-- Programa de Operaciones con Matrices --" << endl; // mensaje de bienvenida
    int size_funtion; // declaramos la variable size_funtion de tipo entero
    cout << "Ingrese el tamaño de las matrises (2-10): "; // mensaje pidiendo al usuario que ingrese el tamaño de las matrices
    while (!(cin >> size_funtion) || size_funtion < 2 || size_funtion > 10) // ciclo while que se ejecuta mientras la variable sea diferente de un numero entero y parametros de limite
    {
        cout << "Tamaño invalido. Ingrese un numero entero entre 2 y 10: "; // mensaje de error
        cin.clear(); // limpiamos el buffer de entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
    }
    system("cls"); // limpiamos la consola
    return size_funtion; // retornamos el valor de la variable size_funtion
} // fin de la funcion size_matrix()

int cases() // funcion que muestra el menu de opciones y pide al usuario una opcion  
{
    int option_funtion; // declaramos la variable option_funtion de tipo entero
    cout << "\nMenu de Opciones:" << endl;
        cout << "1. Llenado Manual" << endl;
        cout << "2. Llenado Aleatorio" << endl;
        cout << "3. Editar Elemento" << endl;
        cout << "4. Vaciar Matrices" << endl;
        cout << "5. Sumar Matrices" << endl;
        cout << "6. Restar Matrices" << endl;
        cout << "7. Multiplicar Matrices" << endl;
        cout << "8. Mostrar Matrices" << endl;
        cout << "9. Reiniciar tamaño de matrices" << endl;
        cout << "10. Salir" << endl;
        cout << "Seleccione una opcion: ";
        while (!(cin >> option_funtion) || option_funtion < 1 || option_funtion > 10) // ciclo while que se ejecuta mientras la variable sea diferente de un numero entero y parametros de limite
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // mensaje de error
            cin.clear(); // limpiamos el buffer de entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
        }
        return option_funtion; // retornamos el valor de la variable option_funtion
} // fin de la funcion cases()

void fillManual (vector <vector<int>> & matrix, int size) // funcion que llena la matriz manualmente 
{
    int value; // declaramos la variable value de tipo entero
    for (int i = 0; i < size; i++)  // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++) // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
        {
            while (true) // ciclo while que se ejecuta mientras sea verdadero 
            {
                cout << "Ingrese el valor para la posicion [" << i << "][" << j << "]: ";
                while (!(cin >> value) || value < -100 || value > 100) // ciclo while que se ejecuta mientras la variable sea diferente de un numero entero y parametros de limite
                {
                    cout << "Opcion invalida (solo se aceptan valores de -100 a 100). Intente de nuevo: ";
                    cin.clear(); // limpiamos el buffer de entrada
                    cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
                }
                matrix[i][j] = value; // asignamos el valor a la matriz en la posicion i, j
                break; // salimos del ciclo while
            }
        }
    }
} // fin de la funcion fillManual()

void fillRandom (vector <vector<int>> & matrix, int size) // funcion que llena la matriz con numeros aleatorios 
{
    srand (time(0)); // inicializamos la semilla para generar numeros aleatorios
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++)  // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
            matrix[i][j] = rand() % 201 - 100; // asignamos un numero aleatorio a la matriz en la posicion i, j
    }
} // fin de la funcion fillRandom()

void editElement (vector <vector<int>> & matrix, int size) // funcion que edita un elemento de la matriz 
{
    int row, col, value; // declaramos las variables row, col y value de tipo entero
    cout << "Ingrese la fila y columna a editar EJEMPLO: 1 0: "; // mensaje pidiendo al usuario que ingrese la fila y columna a editar
    cin >> row >> col; // leemos los valores de la fila y columna
    if (row >= 0 && row < size && col >= 0 && col < size) // si la fila y columna son mayores
    {
        cout << "Ingrese el nuevo valor: ";
        while (!(cin >> value) || value < -100 || value > 100) // ciclo while que se ejecuta mientras la variable sea diferente de un numero entero y parametros de limite
            {
                cout << "Opcion invalida (solo se aceptan valores de -100 a 100). Intente de nuevo: "; // mensaje de error
                cin.clear(); // limpiamos el buffer de entrada
                cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // ignoramos los caracteres que sobren en el buffer de entrada
            }
        matrix[row][col] = value; // asignamos el nuevo valor a la matriz en la posicion row, col
    } 
    else // si la fila y columna no son mayores
        cout << "Posición inválida." << endl; // mensaje de error
} // fin de la funcion editElement()

void clearMatrix (vector <vector<int>> & matrix, int size) // funcion que vacia la matriz 
{
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++) // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
            matrix[i][j] = 0; // asignamos 0 a la matriz en la posicion i, j
    }
} // fin de la funcion clearMatrix()

void displayMatrix (const vector <vector<int>> & matrix, int size) // funcion que muestra la matriz
{
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++) // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
            cout << matrix[i][j] << "\t"; // mostramos el valor de la matriz en la posicion i, j
        cout << endl; // salto de linea
    }
} // fin de la funcion displayMatrix()

vector<vector<int>> addMatrices (const vector <vector<int>> & A, const vector <vector<int>> & B, int size) // funcion que suma las matrices 
{
    vector<vector<int>> result(size, vector<int> (size, 0)); // declaramos la matriz result y la inicializamos con el tamaño de la matriz y con valores de 0
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++)  // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
            result[i][j] = A[i][j] + B[i][j]; // asignamos la suma de las matrices A y B a la matriz result en la posicion i, j
    }
    return result; // retornamos el valor de la matriz result
} // fin de la funcion addMatrices()

vector<vector<int>> subtractMatrices (const vector <vector<int>> & A, const vector <vector<int>> & B, int size) // funcion que resta las matrices 
{
    vector<vector<int>> result (size, vector<int> (size, 0)); // declaramos la matriz result y la inicializamos con el tamaño de la matriz y con valores de 0
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++) // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
            result[i][j] = A[i][j] - B[i][j]; // asignamos la resta de las matrices A y B a la matriz result en la posicion i, j
    }
    return result; // retornamos el valor de la matriz result
} // fin de la funcion subtractMatrices()

vector<vector<int>> multiplyMatrices (const vector <vector<int>> & A, const vector <vector<int>> & B, int size) // funcion que multiplica las matrices 
{
    vector<vector<int>> result (size, vector<int> (size, 0)); // declaramos la matriz result y la inicializamos con el tamaño de la matriz y con valores de 0
    for (int i = 0; i < size; i++) // ciclo for que se ejecuta mientra i sea menor al tamaño de la matriz  
    {
        for (int j = 0; j < size; j++) // ciclo for anidado que se ejecuta mientras j sea menor al tamaño de la matriz 
        {
            for (int k = 0; k < size; k++) // ciclo for anidado que se ejecuta mientras k sea menor al tamaño de la matriz para multiplicar las matrices en sus posiciones de columnas y filas
                result[i][j] += A[i][k] * B[k][j]; // asignamos la multiplicacion de las matrices A y B a la matriz result en la posicion i, j
        }
    }
    return result; // retornamos el valor de la matriz result
} // fin de la funcion multiplyMatrices()

void pause_program() // funcion que pausa el programa
{
    cout << "\nPresione Enter para continuar..."; // mensaje pidiendo al usuario que presione enter para continuar
    cin.ignore(); // ignoramos el enter
    cin.get(); // esperamos a que el usuario presione una tecla
} // fin de la funcion pause_program()

bool restart_program() // funcion que reinicia el programa 
{
    cout << "Reiniciando programa..."; // mensaje de reinicio
    pause_program(); // llamamos a la funcion pause_program() para pausar el programa
    return false; // retornamos falso para reiniciar el programa
}

// FIN DEL PROGRAMA: ap9_functions.cpp