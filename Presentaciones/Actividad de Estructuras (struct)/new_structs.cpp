/**************************************** PRESENTACIÓN **************************************** 
NOMBRE: Cesar de Jesus Becerra Vera 
FECHA: 20 de Marzo de 2025
PROGRAMA: new_struct.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Actividad de Estructuras, ejemplos de structs anidados en C++
***********************************************************************************************/

#include <conio.h> // Libreria para usar la funcion getch()
#include <iostream> // Libreria para usar la entrada y salida de datos
using namespace std; // Espacio de nombres estandar

struct Autor // Definicion de la estructura Autor
{
    string nombre; // Atributo nombre de tipo string
    string nacionalidad; // Atributo nacionalidad de tipo string
}; // Fin de la estructura Autor

struct Libro // Definicion de la estructura Libro
{
    string titulo; // Atributo titulo de tipo string
    Autor autor; // Atributo autor de tipo Autor
    int paginas; // Atributo paginas de tipo entero
}; // Fin de la estructura Libro

int main() // Funcion principal
{
    cout << "-- Programa de Estructuras Anidadas --" << endl; // Mensaje de bienvenida
    Libro libro1; // Declaracion de una variable de tipo Libro
    cout << "Ingrese el titulo del libro: "; 
    getline(cin, libro1.titulo); // Leer el titulo del libro
    cout << "Ingrese el nombre del autor: ";
    getline(cin, libro1.autor.nombre); // Leer el nombre del autor
    cout << "Ingrese la nacionalidad del autor: ";
    getline(cin, libro1.autor.nacionalidad); // Leer la nacionalidad del autor
    cout << "Ingrese las paginas del libro: ";
    cin >> libro1.paginas; // Leer el numero de paginas del libro
    cout << endl;
    cout << "* Datos del Libro Guardado *" << endl; // Mostrar datos ingresados
    cout << "Titulo: " << libro1.titulo << endl;
    cout << "Autor: " << libro1.autor.nombre << endl;
    cout << "Nacionalidad del Autor: " << libro1.autor.nacionalidad << endl;
    cout << "Numero de paginas: " << libro1.paginas << endl;

    cout << "Presione cualquier tecla para salir..."; // Mensaje de despedida
    getch(); // Esperar a que el usuario presione una tecla
    return 0; // Retornar 0
} // Fin de la funcion principal
