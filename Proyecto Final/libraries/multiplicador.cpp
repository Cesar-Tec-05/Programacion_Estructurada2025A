// librerias de la aplicacion, multiplicador de valores

#include <limits> // Libreria para limites de entrada
#include <conio.h> // Libreria para entrada y salida de datos
#include <iostream> // Libreria para entrada y salida de datos
using namespace std; // Espacio de nombres estandar



void fun_multiplicador() // Funcion principal
{
    int usuario_valor, operaciones = 0, i; // Declaracion de variables
    char continuar; // Declaracion de variable de tipo caracter
    cout << "-- Programa de multiplicador de valores --\n";
    do // Ciclo do-while para repetir el programa
    {
        operaciones++; // Contador de operaciones
        cout << "Ingrese un valor entero: ";
        while (!(cin >> usuario_valor)) // Validamos la opcion ingresada
        {
            cout << "Error, ingrese un valor entero: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
        }
        system("cls"); // Limpiamos la pantalla
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
    system("cls"); // Limpiamos la pantalla
    cout << "Se realizaron " << operaciones << " operaciones" << endl;
    cout << "Presione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch(); // Espera a que el usuario presione una tecla
}