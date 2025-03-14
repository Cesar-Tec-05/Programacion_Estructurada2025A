// PROGRAMA: ap11_functions.cpp
// Funciones de la actividad de programación 11

// Incluimos las librerias necesarias
#include <algorithm> // Incluimos la libreria para poder usar mumeric_limits para limpiar la entrada
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos 
using namespace std; // Usamos el espacio de nombres estandar

int mostrarMenu() // Funcion para mostrar el menu de opciones y obtener la opcion del usuario
{
    int opcion_menu; // Declaramos una variable para la opcion del menu
    cout << "-- Programa de secuencias de Collatz --" << endl; // Mensaje de bienvenida
    cout << "Menu:" << endl; // Mostramos el menu de opciones
    cout << "1. Ingresar numeros" << endl;	
    cout << "2. Editar numeros" << endl;
    cout << "3. Calcular secuencias y comparar" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: "; // Pedimos al usuario que seleccione una opcion
    while (!(cin >> opcion_menu) || opcion_menu < 1 || opcion_menu > 4) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        }
    return opcion_menu; // Retornamos la opcion seleccionada
} // Fin de la funcion mostrarMenu, retorna un valor entero

void ingresarNumeros(int &num1, int &num2) // Funcion para ingresar los numeros
{
    int sub_opcion; // Declaramos una variable para la subopcion
    cout << "Ingresar Numeros: " << endl; // Mostramos el menu de opciones
    cout << "1. Numero A" << endl; 
    cout << "2. Numero B" << endl;
    cout << "Seleccione 1 o 2: "; // Pedimos al usuario que seleccione una opcion
    while (!(cin >> sub_opcion) || sub_opcion < 1 || sub_opcion > 2) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
        }
    if (sub_opcion == 1) // condicional para la eleccion
    {
        cout << "Ingrese el valor para A: "; // Pedimos al usuario que ingrese el valor para A
        while (!(cin >> num1) || num1 < 2) // Validamos el valor ingresado
        {
            cout << "Valor Invalido (tiene que ser mayor a 1). Intentelo de nuevo: "; // Mensaje de error 
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        }
    } 
    else // condicional para la eleccion
    {
        cout << "Ingrese el valor para B: "; // Pedimos al usuario que ingrese el valor para B
        while (!(cin >> num2) || num2 < 2) // Validamos el valor ingresado
        {
            cout << "Valor Invalido (tiene que ser mayor a 1). Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        }
    }
} // Fin de la funcion ingresarNumeros, no retorna ningun valor

void editarNumeros(int &num1, int &num2) // Funcion para editar los numeros
{
    int sub_opcion; // Declaramos una variable para la subopcion
    cout << "Editar Numeros:" << endl; // Mostramos el menu de opciones
    cout << "1. Numero A" << endl;
    cout << "2. Numero B" << endl;
    cout << "Seleccione 1 o 2: "; // Pedimos al usuario que seleccione una opcion
    while (!(cin >> sub_opcion) || sub_opcion < 1 || sub_opcion > 2) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // 
        }
    if (sub_opcion == 1) // condicional para la eleccion
    {
        cout << "Ingrese el nuevo valor para A: "; // Pedimos al usuario que ingrese el nuevo valor para A
        while (!(cin >> num1) || num1 < 2) // Validamos el valor ingresado
        {
            cout << "Valor Invalido (tiene que ser mayor a 1). Intentelo de nuevo: "; // Mensaje de error 
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        }
    } 
    else // condicional para la eleccion
    {
        cout << "Ingrese el nuevo valor para B: "; // Pedimos al usuario que ingrese el nuevo valor para B
        while (!(cin >> num2) || num2 < 2) // Validamos el valor ingresado
        {
            cout << "Valor Invalido (tiene que ser mayor a 1). Intentelo de nuevo: "; // Mensaje de error 
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        }
    }
} // Fin de la funcion editarNumeros, no retorna ningun valor

int collatzLength(int n) // Funcion para calcular la longitud de la secuencia de Collatz
{
    int length = 1; // Declaramos una variable para la longitud de la secuencia
    cout << "Secuencia de Collatz para " << n << ": " << n; // Mostramos el mensaje de la secuencia
    while (n != 1) // Mientras n sea diferente de 1
    {
        if (n % 2 == 0) // condicional si n es par 
            n /= 2; // Dividimos n entre 2
        else // condicional si n es impar
            n = 3 * n + 1; // Multiplicamos n por 3 y le sumamos 1
        cout << " -> " << n; // Mostramos la secuencia
        length++; // Incrementamos la longitud
    }
    cout << endl; // Salto de linea
    return length; // Retornamos la longitud
} // Fin de la funcion collatzLength, retorna un valor entero
void calcularYComparar(int num1, int num2) // Funcion para calcular y comparar las secuencias de Collatz
{
    if (num1 == 0 || num2 == 0) // condicional si num1 o num2 son iguales a 0
        cout << "Primero debe ingresar los numeros de A y B." << endl; // Mensaje de error
    else // condicional si num1 o num2 son diferentes de 0
    {
        int length1 = collatzLength(num1); // Calculamos la longitud de la secuencia para num1
        int length2 = collatzLength(num2); // Calculamos la longitud de la secuencia para num2
        cout << "Longitud de la secuencia para " << num1 << ": " << length1 << endl; // Mostramos la longitud de la secuencia para num1
        cout << "Longitud de la secuencia para " << num2 << ": " << length2 << endl; // Mostramos la longitud de la secuencia para num2
        if (length1 > length2) // condicional si length1 es mayor a length2
            cout << num1 << " tiene mas elementos en su secuencia." << endl; // Mensaje de comparacion
        else if (length2 > length1) // condicional si length2 es mayor a length1
            cout << num2 << " tiene mas elementos en su secuencia." << endl; // Mensaje de comparacion
        else  // condicional si length1 es igual a length2
            cout << "Ambos numeros tienen la misma cantidad de elementos en su secuencia." << endl; // Mensaje de comparacion, si son iguales
    }
} // Fin de la funcion calcularYComparar, no retorna ningun valor

void pausar_programa() // funcion para pausar el programa
{
    cout << endl << "Presione Enter para continuar..."; // Mensaje para continuar
    cin.ignore(); // Ignoramos la entrada
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pausar_programa, no retorna ningun valor

// FIN DEL PROGRAMA: ap11_functions.cpp