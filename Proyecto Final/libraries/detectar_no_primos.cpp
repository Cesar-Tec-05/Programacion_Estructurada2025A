// libreria de la aplicacion, identificar numeros primos 

// Incluimos las librerias necesarias
#include <conio.h> // Libreria de entrada y salida
#include <limits> // Libreria para limites de entrada
#include <String> // Libreria para el manejo de cadenas de texto
#include <iostream> // Libreria para el manejo de entrada y salida de datos
using namespace std; // Utilizamos el espacio de nombres estandar

// Declaramos las variables necesarias

void fun_detectar_no_primos() // Inicio de la funcion principal
{
    int i, num;
    bool esPrimo, esNumero = true;
    string num_caracter;
    cout << "-- Programa Para Identificar Numeros Primos --" << endl; // Mensaje de bienvenida
    int suma = 0; // Inicializamos la variable suma
    cout << "Ingrese un número entero: "; // Solicitamos al usuario que ingrese un número
    while (!(cin >> num_caracter)) // Validamos la opcion ingresada
    {
        cout << "Error, ingrese un número entero: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    system("cls"); // Limpiamos la pantalla

    // Verificamos si el número ingresado es un número entero válido
    for (char c : num_caracter) // Recorremos cada caracter del número ingresado
    {
        esNumero = true; // Inicializamos la variable esNumero en verdadero
        if (!isdigit(c)) // Verificamos si el caracter es un número
        {
            esNumero = false; // Si no es un número, cambiamos el valor de la variable a falso
            break; // Salimos del bucle
        }
    }

    // Si el número ingresado es un número entero válido
    if (esNumero) // Si el número ingresado es un número entero válido
    {
        num = stoi(num_caracter); // Convertir el caracter a número
        if (num >= 2) // Verificamos si el número es mayor o igual a 2
        {
            for (i = 2; i <= num; i++) // Recorremos los números desde 2 hasta el número ingresado
            {
                esPrimo = true; // Inicializamos la variable esPrimo en verdadero
                for (int j = 2; j < i; j++) // Recorremos los números desde 2 hasta el número actual
                {
                    if (i % j == 0) // Verificamos si el número actual es divisible por otro número
                    {
                        esPrimo = false; // Si es divisible, cambiamos el valor de la variable a falso
                        break; // Salimos del bucle
                    }
                }
                if (esPrimo) // Si el número actual es primo entonces lo mostramos y sumamos
                {
                    suma += i; // Sumamos el número actual a la variable suma
                    cout << i << " es primo" << endl; // Mostramos el número actual
                }
            }
            cout << "La suma de los números primos es: " << suma << endl; // Mostramos la suma de los números primos
        } 
        else 
            cout << "El número ingresado no es válido para encontrar primos" << endl; // Mensaje de error si el número es menor a 2
    } 
    else 
        cout << "No se aceptan caracteres especiales, Intentelo de nuevo" << endl; // Mensaje de error si el número ingresado no es un número
    cout << endl << "Precione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch(); // Espera a que el usuario presione una tecla
} // Fin de la funcion principal
