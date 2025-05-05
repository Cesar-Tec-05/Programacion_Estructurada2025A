// librerias de la aplicacion, suma de arreglos

// Incluimos las librerías necesarias
#include <conio.h> // Para usar la función getch, que nos permite esperar a que el usuario presione una tecla
#include <cstdlib> // Para usar la función system, que nos permite limpiar la pantalla
#include <vector> // Para usar vectores, que son arreglos dinámicos
#include <limits> // Para usar numeric_limits, que nos permite obtener el valor máximo de un tipo de dato
#include <iostream> // Para usar cout y cin, que nos permiten mostrar y recibir datos del usuario
using namespace std; // Para no tener que escribir std:: antes de cada función de la librería estándar

void mostrarLista(const vector <int> & arr) // Funcion que muestra los elementos del arreglo 
{
    if (arr.empty()) // Si el arreglo está vacío, mostramos un mensaje
        cout << "\nLista vacia.\n"; // Mensaje que se muestra si el arreglo está vacío
    else // Si el arreglo no esta vacio, mostramos los elementos
    {
        cout << "\nLista de valores: "; // Mensaje que se muestra si el arreglo no está vacío
        for (int num : arr) // Recorremos el arreglo y mostramos cada elemento
            cout << num << ", "; // Mostramos el elemento y una coma
        cout << endl; // Salto de línea
    }
} // Fin de la función mostrarLista

void calcularSuma(const vector <int> & arr) // Funcion que calcula la suma de los elementos del arreglo 
{
    if (arr.empty()) // Si el arreglo está vacío, mostramos un mensaje
        cout << "\nLista vacia.\n"; // Mensaje que se muestra si el arreglo está vacío    
    else // Si el arreglo no está vacío, calculamos la suma de los elementos
    {
        int suma = 0; // Variable para almacenar la suma de los elementos
        for (int num : arr) // Recorremos el arreglo y sumamos cada elemento
        {
            suma += num; // Sumamos el elemento al total
            cout << num << ", "; // Mostramos el elemento y una coma
        }
        cout << "\nSumatoria: " << suma << endl; // Mostramos la suma de los elementos
    } 
} // Fin de la función calcularSuma

void agregarElemento(vector <int> & arr) // Funcion que agrega un elemento al arreglo 
{
    if (arr.size() < 10) // Si el arreglo no esta lleno, pedimos un valor al usuario
    {
        int valor; // Variable para almacenar el valor ingresado por el usuario
        cout << "\nIngrese un valor: "; // Pedimos al usuario que ingrese un valor
        while (!(cin >> valor)) // Mientras el valor ingresado no sea un numero entero
        {
            cout << "Entrada invalida. Ingrese un numero entero: "; // Pedimos al usuario que ingrese un numero entero
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize> :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        arr.push_back(valor); // Agregamos el valor al final del arreglo
        mostrarLista(arr); // Mostramos los elementos del arreglo
    } 
    else // Si el arreglo está lleno, mostramos un mensaje
        cout << "\nEl arreglo esta lleno.\n"; // Mensaje que se muestra si el arreglo está lleno
} // Fin de la función agregarElemento

void editarElemento(vector <int> & arr) // Funcion que edita un elemento del arreglo
{
    if (arr.empty()) // Si el arreglo está vacío, mostramos un mensaje
        cout << "\nLista vacia.\n"; // Mensaje que se muestra si el arreglo está vacío
    else // Si el arreglo no está vacío, pedimos la posición y el nuevo valor al usuario
    {
        int pos, nuevoValor; // Variables para almacenar la posición y el nuevo valor
        mostrarLista(arr); // Mostramos los elementos del arreglo
        cout << "\nIngrese la posicion a editar (0 - " << arr.size() - 1 << "): "; // Pedimos al usuario que ingrese la posición a editar
        while (!(cin >> pos) || pos < 0 || pos >= arr.size()) // Mientras la posicion ingresada no sea valida
        {
            cout << "Posicion inválida. Intente de nuevo: "; // Pedimos al usuario que ingrese una posición válida
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize > :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        cout << "Ingrese el nuevo valor: "; // Pedimos al usuario que ingrese el nuevo valor
        while (!(cin >> nuevoValor)) // Mientras el valor ingresado no sea un numero entero
        {
            cout << "Entrada invalida. Ingrese un numero entero: "; // Pedimos al usuario que ingrese un numero entero
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize > :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        arr[pos] = nuevoValor; // Asignamos el nuevo valor a la posición indicada
    }
} // Fin de la función editarElemento

void borrarElemento(vector <int> & arr) // Funcion que borra un elemento del arreglo
{
    if (arr.empty()) // Si el arreglo está vacío, mostramos un mensaje
        cout << "\nLista vacia.\n"; // Mensaje que se muestra si el arreglo está vacío
    else // Si el arreglo no está vacío, pedimos la posición a borrar al usuario
    {
        int pos; // Variable para almacenar la posición a borrar
        mostrarLista(arr); // Mostramos los elementos del arreglo
        cout << "\nIngrese la posicion a borrar (0 - " << arr.size() - 1 << "): "; // Pedimos al usuario que ingrese la posición a borrar
        while (!(cin >> pos) || pos < 0 || pos >= arr.size()) // Mientras la posicion ingresada no sea valida
        {
            cout << "Posicion invalida. Intente de nuevo: "; // Pedimos al usuario que ingrese una posición válida
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize > :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        arr.erase(arr.begin() + pos); // Borramos el elemento en la posición indicada
    }
} // Fin de la función borrarElemento

void vaciarArreglo(vector <int> & arr) // Funcion que vacía el arreglo
{
    if (arr.empty()) // Si el arreglo está vacío, mostramos un mensaje
        cout << "\nLista vacia.\n"; // Mensaje que se muestra si el arreglo está vacío
    else // Si el arreglo no está vacío, lo vaciamos
    {
        arr.clear(); // Vaciamos el arreglo
        cout << "\nEl arreglo ha sido vaciado.\n"; // Mensaje que se muestra al vaciar el arreglo
    }
} // Fin de la función vaciarArreglo

void pausarPrograma() // Funcion que pausa el programa y espera a que el usuario presione Enter 
{
    cout << "\nPresione Enter para continuar..."; // Mensaje que se muestra para indicar al usuario que presione Enter
    cin.ignore(); // Ignoramos la entrada del usuario para pausar el programa
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la función pausarPrograma

void fun_suma_arreglos() // Función principal del programa
{
    cout << "-- Programa de sumatoria de un arreglo de 10 elementos --" << endl; // Mensaje de bienvenida  	
    vector <int> arreglo; // Creamos un vector para almacenar los elementos
    int opcion; // Variable para almacenar la opción seleccionada por el usuario
    bool continuar = true; // Variable para controlar el ciclo infinito del menú
    while (continuar) // Ciclo infinito para mostrar el menú y realizar las operaciones, 
    {
        cout << "\nMenu:\n1. Agregar elemento\n2. Mostrar lista\n3. Calcular sumatoria\n4. Editar elemento\n5. Borrar elemento\n6. Vaciar arreglo\n7. Salir\nOpcion: "; // Mostramos el menú
        while (!(cin >> opcion) || opcion < 1 || opcion > 7) // Mientras la opcion ingresada no sea valida
        {
            cout << "\nOpcion invalida. Intente de nuevo: "; // Pedimos al usuario que ingrese una opción válida
            cin.clear(); // Limpiamos el estado de error de cin
            cin.ignore(numeric_limits < streamsize> :: max(), '\n'); // Ignoramos el resto de la entrada
        }
        switch (opcion) // Segun la opcion seleccionada por el usuario, realizamos la funcion correspondiente
        {
            case 1: // Opcion 1 
            {
                system("cls"); // Limpiamos la pantalla
                agregarElemento(arreglo); // Llamamos a la función para agregar un elemento al arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            } 
            case 2: // Opcion 2
            {
                system("cls"); // Limpiamos la pantalla 
                mostrarLista(arreglo); // Llamamos a la función para mostrar los elementos del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch	
            }
            case 3: // Opcion 3
            {
                system("cls"); // Limpiamos la pantalla 
                calcularSuma(arreglo); // Llamamos a la función para calcular la sumatoria de los elementos del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch
            } 
            case 4: // Opcion 4 
            {
                system("cls"); // Limpiamos la pantalla
                editarElemento(arreglo); // Llamamos a la función para editar un elemento del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            } 
            case 5: // Opcion 5
            {
                system("cls"); // Limpiamos la pantalla 
                borrarElemento(arreglo); // Llamamos a la función para borrar un elemento del arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa	
                system("cls"); // Limpiamos la pantalla 
                break; // Salimos del switch
            } 
            case 6: // Opcion 6
            {
                system("cls"); // Limpiamos la pantalla
                vaciarArreglo(arreglo); // Llamamos a la función para vaciar el arreglo
                pausarPrograma(); // Llamamos a la función para pausar el programa
                system("cls"); // Limpiamos la pantalla
                break; // Salimos del switch
            }
            case 7: // Opcion 7
            {
                continuar = false; // Cambiamos la variable continuar a false para salir del ciclo infinito
                system("cls"); // Limpiamos la pantalla
                cout << "\nPresione cualquier tecla para salir.\n"; // Mensaje para indicar al usuario que presione una tecla para salir 
                getch(); // Esperamos a que el usuario presione una tecla
                cout << "Saliendo..."; // Mensaje de despedida
            } 
        } 
    }
} // Fin de la función principal del programa


