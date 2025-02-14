/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 13 de Febrero de 2025
PROGRAMA: ap7.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 7, identificar los numeros primos de un número dado 
por el usuario y posteriormente realizar la suma de estos. 
***********************************************************************************************/

// Incluimos las librerias necesarias
#include <String> // Libreria para el manejo de cadenas de texto
#include <iostream> // Libreria para el manejo de entrada y salida de datos
#include <conio.h> // Libreria para el manejo de la consola
using namespace std; // Utilizamos el espacio de nombres estandar

// Declaramos las variables necesarias
int i, num;
bool esPrimo, esNumero = true;
string num_caracter; 
char ele;

main() // Inicio de la funcion principal
{
    cout << "-- Programa Para Identificar Numeros Primos --" << endl; // Mensaje de bienvenida
    do { // Inicio del bucle para repetir el programa
        int suma = 0; // Inicializamos la variable suma
        cout << "Ingrese un número entero: "; // Solicitamos al usuario que ingrese un número
        cin >> num_caracter; // Guardamos el número ingresado en una variable de tipo string
        for (char c : num_caracter) // Recorremos cada caracter del número ingresado
        {
            if (!isdigit(c)) // Verificamos si el caracter es un número
            {
                esNumero = false; // Si no es un número, cambiamos el valor de la variable a falso
                break; // Salimos del bucle
            }
        }
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
        cout << "Deseas Finalizar el Programa? (s/n): " << endl; // Preguntamos al usuario si desea finalizar el programa
        cin >> ele; // Guardamos la respuesta del usuario
    } 
    while (ele != 's' && ele != 'S'); // Repetimos el programa mientras la respuesta sea diferente de 's' o 'S'
    cout << "Presione cualquier tecla para salir..."; // Mensaje de despedida
    getch(); // Esperamos a que el usuario presione una tecla
} // Fin de la funcion principal
