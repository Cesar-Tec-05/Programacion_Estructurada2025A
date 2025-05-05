/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 03 de Mayo de 2025
PROGRAMA: proyecto_final.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Proyecto final, realizar un programa que incluya todas las aplicaciones realizadas en el semestre. 
***********************************************************************************************/

// Incluyendo librerias necesarias
#include "libraries.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int caso;
    bool continuar = true; // Variable para controlar el bucle
    cout << "-- Centro de Aplicaciones del Semestre --" << endl;
    while (continuar) // Mientras la opcion elegida no sea salir
    {
        caso = general_menu(); // Llamamos al menu general
        switch (caso) // Elegimos el caso correspondiente
        {
            case 1:
            {
                system("cls"); // Limpiamos la pantalla
                fun_hola_mundo(); // Llamamos a la funcion hola_mundo
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 2:
            {
                system("cls"); // Limpiamos la pantalla
                fun_datos(); // Llamamos a la funcion datos
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 3:
            {
                system("cls"); // Limpiamos la pantalla
                fun_caracteres_y_cadenas(); // Llamamos a la funcion caracteres_y_cadenas
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 4:
            {
                system("cls"); // Limpiamos la pantalla
                fun_multiplicador(); // Llamamos a la funcion multiplicador
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 5:
            {
                system("cls"); // Limpiamos la pantalla
                fun_fibonacci(); // Llamamos a la funcion fibonacci
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 6:
            {
                system("cls"); // Limpiamos la pantalla
                fun_detectar_multiplos_3_5(); // Llamamos a la funcion detectar_multiplos_3_5
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 7:
            {
                system("cls"); // Limpiamos la pantalla
                fun_suma_cuadrados(); // Llamamos a la funcion suma_cuadrados
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 8:
            {
                system("cls"); // Limpiamos la pantalla
                fun_detectar_no_primos(); // Llamamos a la funcion detectar_no_primos
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 9:
            {
                system("cls"); // Limpiamos la pantalla
                fun_suma_arreglos(); // Llamamos a la funcion suma_arreglos
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 10:
            {
                system("cls"); // Limpiamos la pantalla
                fun_operaciones_matrices(); // Llamamos a la funcion operaciones_matrices
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 11:
            {
                system("cls"); // Limpiamos la pantalla
                fun_operaciones_conjuntos(); // Llamamos a la funcion operaciones_conjuntos
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 12:
            {
                system("cls"); // Limpiamos la pantalla
                fun_secuencia_numeros(); // Llamamos a la funcion secuencia_numeros
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 13:
            {
                system("cls"); // Limpiamos la pantalla
                fun_identificar_palindromo(); // Llamamos a la funcion identificar_palindromo
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 14:
            {
                system("cls"); // Limpiamos la pantalla
                fun_juego_ahorcado(); // Llamamos a la funcion
                system("cls"); // Limpiamos la pantalla
                break;
            }
            case 15:
            {
                system("cls"); // Limpiamos la pantalla
                fun_juego_torres_hanoi(); // Llamamos a la funcion juego_torres_hanoi
                system("cls"); // Limpiamos la pantalla
                break;
            }
            default:
            {
                continuar = false; // Si la opcion elegida es 0, salimos del bucle
                system("cls"); // Limpiamos la pantalla
                cout << "Presione cualquier tecla para salir..." << endl; // Mensaje de salida
                getch(); // Esperamos a que el usuario presione una tecla
                cout << "Saliendo del programa..." << endl; // Mensaje de salida
                break;
            }
        }
    }
    return 0; // Retornamos 0 al sistema operativo
}

// Fin del programa