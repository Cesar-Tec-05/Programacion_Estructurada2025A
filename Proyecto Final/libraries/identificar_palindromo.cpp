// librerias para la aplicacion, identificar si una palabra es palindromo 

#include <conio.h> // Para usar la funcion getch
#include <cctype> // Para usar la funcion isalpha y tolower
#include <algorithm> // Para usar la funcion transform
#include <string> // Para usar la clase string
#include <iostream> // Para usar la clase cin y cout
using namespace std; // Usamos el espacio de nombres std

bool esPalindromo (const string& palabra) // Funcion para verificar si una palabra es palindromo
{
    int inicio = 0; // Contador para el inicio de la palabra
    int fin = palabra.length() - 1; // Contador para el fin de la palabra
    while (inicio < fin)  // Mientras el inicio sea menor que el fin
    {
        if (!isalpha(palabra[inicio])) // Si el caracter en la posicion inicio no es una letra
        {
            inicio++; // Aumentamos el contador de inicio
            continue; // Continuamos con la siguiente iteracion
        }
        if (!isalpha(palabra[fin])) // Si el caracter en la posicion fin no es una letra
        {
            fin--; // Disminuimos el contador de fin
            continue; // Continuamos con la siguiente iteracion
        }
        if (tolower(palabra[inicio]) != tolower(palabra[fin])) // Si los caracteres en las posiciones inicio y fin no son iguales 
            return false; // Retornamos falso
        inicio++; // Aumentamos el contador de inicio
        fin--; // Disminuimos el contador de fin
    }
    return true; // Retornamos verdadero si la palabra es un palindromo
} // Fin de la funcion esPalindromo, retorna true si la palabra es un palindromo, false en caso contrario

int contarCaracteres (const string& palabra) // Funcion para contar los caracteres alfabeticos de una palabra
{
    int contador = 0; // Contador de caracteres
    for (char c : palabra)  // Recorremos cada caracter de la palabra
    {
        if (isalpha(c)) // Si el caracter es una letra
            contador++; // Aumentamos el contador
    }
    return contador; // Retornamos el contador de caracteres
} // Fin de la funcion contarCaracteres, retorna el numero de caracteres alfabeticos de la palabra

int contarVocales (const string& palabra) // Funcion para contar las vocales de una palabra
{
    int contador = 0; // Contador de vocales
    for (char c : palabra) // Recorremos cada caracter de la palabra
    {
        c = tolower(c); // Convertimos el caracter a minuscula
        if (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) // Si el caracter es una letra y es una vocal
            contador++; // Aumentamos el contador
    }
    return contador; // Retornamos el contador de vocales
} // Fin de la funcion contarVocales, retorna el numero de vocales de la palabra

int contarConsonantes (const string& palabra) // Funcion para contar las consonantes de una palabra
{
    int contador = 0; // Contador de consonantes
    for (char c : palabra) // Recorremos cada caracter de la palabra
    {
        c = tolower(c); // Convertimos el caracter a minuscula
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) // Si el caracter es una letra y no es una vocal
            contador++; // Aumentamos el contador
    }
    return contador; // Retornamos el contador de consonantes
} // Fin de la funcion contarConsonantes, retorna el numero de consonantes de la palabra

void pausar_programa() // funcion para pausar el programa
{
    cout << endl << "Presione Enter para continuar..."; // Mensaje para continuar
    cin.ignore(); // Ignoramos la entrada
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pausar_programa, no retorna ningun valor

void fun_identificar_palindromo() // Funcion principal
{
    int eleccion = 1; // Variable para la eleccion del usuario
    string palabra; // Variable para la palabra a evaluar
    cout << "-- Programa para identificar si una palabra es palindromo --" << endl; // Mensaje de inicio
    while (eleccion == 1) // Mientras el usuario quiera seguir 
    {
        cout << "Introduce una palabra: "; // Mensaje para introducir la palabra
        cin >> palabra; // Leemos la palabra ingresada por el usuario
        system("cls"); // Limpiamos la pantalla

        cout << "La palabra es: " << palabra << endl; // Mostramos la palabra ingresada
        cout << "La palabra es un palindromo?: " << (esPalindromo(palabra) ? "Si" : "No") << endl; // Mostramos si es palindromo o no
        cout << "Numero de caracteres (alfabeticos): " << contarCaracteres(palabra) << endl; // Mostramos el numero de caracteres
        cout << "Numero de vocales: " << contarVocales(palabra) << endl; // Mostramos el numero de vocales
        cout << "Numero de consonantes: " << contarConsonantes(palabra) << endl; // Mostramos el numero de consonantes
        pausar_programa(); // Llamamos a la funcion para pausar el programa
        system("cls"); // Limpiamos la pantalla

        cout << "Quieres introducir otra palabra? (1: Si, 2: No): "; // Mensaje para preguntar si quiere continuar
        while (!(cin >> eleccion) || eleccion < 1 || eleccion > 2) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
        }
        system("cls"); // Limpiamos la pantalla
    }
    cout << "Presione cualquier tecla para salir..." << endl; // Mensaje de salida
    getch(); // Espera a que el usuario presione una tecla
}

// Fin del programa