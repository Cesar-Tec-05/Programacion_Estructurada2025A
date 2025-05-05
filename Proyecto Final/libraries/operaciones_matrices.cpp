// librerias de la aplicacion de operaciones de matrices

// incluimos las librerias necesarias
#include <cstdlib> // incluimos la libreria cstdlib para poder utilizar la funcion system() y manipular la consola
#include <conio.h> // incluimos la libreria conio.h para poder utilizar la funcion getch()
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
    while (!(cin >> size_funtion) || size_funtion < 2 || size_funtion > 9) // ciclo while que se ejecuta mientras la variable sea diferente de un numero entero y parametros de limite
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
        cout << "9. Salir" << endl;
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
    return true; // retornamos falso para reiniciar el programa
}

void fun_operaciones_matrices() // funcion principal del programa
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
            default: // caso por defecto, salir del programa
            {
                restart = false; // inicializamos la variable restart en falso para salir del programa
                system("cls"); // limpiamos la consola
                cout << "Presione cualquier tecla para salir."; // mostramos un mensaje para que el usuario presione una tecla para salir
                getch(); // esperamos a que el usuario presione una tecla
                cout << endl << "Saliendo..." ; // mensaje de despedida
            } 
            } // fin del switch
        } // fin del while que se ejecuta mientras la variable restart sea verdadera para reiniciar el programa // fin del ciclo infinito
} // fin de la funcion principal del programa
