/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 20 de Marzo de 2025
PROGRAMA: struct.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Estructuras, ejemplos de struct en C++
***********************************************************************************************/

#include <conio.h> // Libreria para usar la funcion getch()
#include <iostream> // Libreria para usar la entrada y salida de datos
using namespace std; // Espacio de nombres estandar

struct persona // Definicion de la estructura persona
{
    string nombre; // Atributo nombre de tipo string
    int edad; // Atributo edad de tipo entero
    float estatura; // Atributo estatura de tipo flotante
}; // Fin de la estructura persona

int main() // Funcion principal
{
    cout << "-- Programa de Estructuras --" << endl; // Mensaje de bienvenida
    persona persona1; // Declaracion de una variable de tipo persona
    cout << "Ingresa el nombre de la persona: "; // Mensaje para ingresar el nombre 
    cin >> persona1.nombre;
    cout << "Ingresa la edad de la persona: "; // Mensaje para ingresar la edad
    cin >> persona1.edad;
    cout << "Ingresa la estatura de la persona: "; // Mensaje para ingresar la estatura
    cin >> persona1.estatura;

    cout << "Bienvenido " << persona1.nombre << endl; // Mostrar datos ingresados
    cout << "Edad: " << persona1.edad << " años" << endl;
    cout << "Estatura: " << persona1.estatura << " metros" << endl;

    cout << "Presiona cualquier tecla para salir..."; // Mensaje de despedida
    getch(); // Esperar a que el usuario presione una tecla
    return 0; // Retornar 0
} // Fin de la funcion principal


