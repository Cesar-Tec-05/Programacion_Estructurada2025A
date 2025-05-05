// libreria de la aplicacion, mostrar datos del estudiante.

#include <conio.h> // Incluimos la libreria de entrada y salida
#include <iostream> // Incluimos la libreria de entrada y salida
using namespace std;

void fun_datos() 
{ // Funcion principal del programa
    printf("-- Datos del Estudiante --\n");
    printf("Nombre: Cesar de Jesus Becerra Vera\n");
    printf("Edad: 19 Años\n");
    printf("Lugar de Residencia: Privada Maple #1976, Fraccionamiento Los Sauses, Tepatitlan de Morelos, Jalisco\n");
    printf("Fecha: 03 de Mayo de 2025\n"); 
    printf("Carrera: Ingenieria en Computacion\n");
    printf("Semestre: Segundo\n");

    cout << endl << "Precione cualquier tecla para continuar..." << endl; // Mensaje de continuacion
    getch(); // Espera a que el usuario presione una tecla
}
