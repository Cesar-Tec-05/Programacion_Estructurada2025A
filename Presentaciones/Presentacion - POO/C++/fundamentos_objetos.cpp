/**************************************** PRESENTACIÓN **************************************** 
EQUIPO: Programacion Orientada a Objetos 
FECHA: 18 de Marzo de 2025
PROGRAMA: fundamentos_objetos.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa que muestra los fundamentos de la programación orientada a objetos en C++.
***********************************************************************************************/
// Crear una clase llamada "Auto" para crear instancias de objetos que tenga los siguientes atributos:
// - marca
// - modelo
// - color
// - año

#include <conio.h> // Incluimos la librería conio.h
#include <iostream> // Incluimos la librería iostream
#include <string> // Incluimos la librería string
using namespace std; // Usamos el espacio de nombres std


class Auto // Crear clase "Auto" 
{
private: // Atributos privados de la clase "Auto"
    string marca;
    string modelo;
    string color;
    int year;

public: // Métodos públicos de la clase "Auto"
    // Constructor de la clase Auto
    Auto(string m = "No se agrego la marca", string mod = "No se agrego el modelo", string col = "No se agrego el color", int y = 0) 
    {
        marca = m;
        modelo = mod;
        color = col;
        year = y;
    }

    void mostrarDatos() // Método para mostrar los datos del objeto
    {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Color: " << color << ", Año: " << year << endl; 
    }

    
    void mostrar_marca() // Método para mostrar solo la marca del objeto 
    {
        cout << marca << endl;
    }

    void numero_llaantas() 
    {
        cout << "El auto tiene 4 llantas" << endl; // Método para mostrar el número de llantas del objeto
    }
};

class Moto : public Auto // Crear clase "Moto" que hereda de la clase "Auto"
{
public: // Métodos públicos de la clase "Moto"
    // Constructor de la clase Moto
    Moto(string m, string mod, string col, int y) : Auto(m, mod, col, y) // Constructor de la clase "Moto" que hereda de la clase "Auto" 
    {}

    void numero_llaantas() // Método para mostrar el número de llantas de la moto 
    {
        cout << "La moto tiene 2 llantas" << endl;
    }
};


int main() 
{
    // Crear objetos de la clase "Auto"
    Auto auto1("Ford", "Fiesta", "Rojo", 2019);
    Auto auto2("Chevrolet", "Onix", "Blanco", 2020);
    Auto auto3("Tesla", "Model X", "Azul", 2021);
    Auto auto4;
    Moto moto1 ("Yamaha", "R1", "Negra", 2021);

    // Mostrar mensaje de "Objetos"
    cout << "Objetos" << endl;
    cout << endl;

    // Mostrar los objetos creados por medio del método "mostrarDatos"
    cout << "auto1: " << endl;
    auto1.mostrarDatos();
    cout << "auto2: " << endl;
    auto2.mostrarDatos();
    cout << "auto3: " << endl;
    auto3.mostrarDatos();
    cout << "auto4: " << endl;
    auto4.mostrarDatos();
    cout << "moto1: " << endl;
    moto1.mostrarDatos();

    // Mostrar mensaje de "Mostrar Objetos creados con el metodo 'mostrar_marca'"
    cout << endl;
    cout << "Mostrar Objetos creados con el metodo 'mostrar_marca'" << endl;
    cout << endl;

    // Mostrar las marcas de los objetos creados con el método "mostrar_marca"
    auto1.mostrar_marca();
    auto2.mostrar_marca();
    auto3.mostrar_marca();
    auto4.mostrar_marca();
    moto1.mostrar_marca();

    // Mostrar mensaje de "Número de llantas"
    cout << endl;
    cout << "Número de llantas" << endl;
    cout << endl;

    auto1.numero_llaantas();
    moto1.numero_llaantas();

    getch();
    return 0;
}

