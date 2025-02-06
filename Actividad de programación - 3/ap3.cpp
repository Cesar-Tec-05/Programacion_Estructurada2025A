/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 5 de Febrero de 2025
PROGRAMA: ap3.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de programación 3, se pide realizar un programa con varias estructuras de control. 
***********************************************************************************************/

#include <iostream> // Libreria para entrada y salida de datos
#include <conio.h> // Libreria para getch()
using namespace std; // Espacio de nombres estandar

int usuario_valor, operaciones = 0, i; // Declaracion de variables
char continuar; // Declaracion de variable de tipo caracter

int main() // Funcion principal
{
    cout << "-- Programa de multiplicador de valores --\n";
    do // Ciclo do-while para repetir el programa
    {
        operaciones++; // Contador de operaciones
        cout << "Ingrese un valor entero: ";
        cin >> usuario_valor; // Ingreso de valor por el usuario
        if (usuario_valor >= 0) // Condicion para aceptar solo numeros positivos
        {
            if (usuario_valor <= 500) // Condicion para valores menores o iguales a 500
            {
                for (i = 0; i < 100; i++) // ciclo for para multiplicar el valor 100 veces
                {
                    usuario_valor = usuario_valor + 5;
                    cout << "Se subio 5 el valor - " << i + 1 << " veces: " << usuario_valor << endl; // Impresion de valores
                }
            }
            else if (usuario_valor > 500 && usuario_valor <= 1000) // Condicion para valores mayores a 500 y menores o iguales a 1000.
            {
                for (i = 0; i < 50; ++i) // ciclo for para multiplicar el valor 50 veces
                {
                    usuario_valor = usuario_valor + 10;
                    cout << "Se subio 10 el valor - " << i + 1 << " veces: " << usuario_valor << endl;
                }
            }
            else // Condicion para valores mayores a 1000
                cout << "No se puede calcular el valor" << endl;
        }
        else // Condicion para valores negativos
            cout << "No se aceptan numeros negativos" << endl;
        
        cout << "Desea continuar? (s/n): "; // Pregunta para continuar o salir del programa
        cin >> continuar; // Ingreso de respuesta
    }
    while (continuar == 's' || continuar == 'S'); // Condicion para repetir el programa

    cout << "Se realizaron " << operaciones << " operaciones" << endl;
    cout << "Presione una tecla para salir";
    getch(); // Espera de una tecla para salir
    return 0; // Retorno de valor
}