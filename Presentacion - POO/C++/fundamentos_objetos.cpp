#include <iostream>
#include <string>
using namespace std;

// Crear clase "Auto"
class Auto {
private:
    string marca;
    string modelo;
    string color;
    int year;

public:
    // Constructor de la clase Auto
    Auto(string m = "No se agrego la marca", string mod = "No se agrego el modelo", string col = "No se agrego el color", int y = 0) {
        marca = m;
        modelo = mod;
        color = col;
        year = y;
    }

    // Método para mostrar los datos del objeto
    void mostrarDatos() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Color: " << color << ", Año: " << year << endl;
    }

    // Método para mostrar solo la marca del objeto
    void mostrar_marca() {
        cout << marca << endl;
    }
};

int main() {
    // Crear objetos de la clase "Auto"
    Auto auto1("Ford", "Fiesta", "Rojo", 2019);
    Auto auto2("Chevrolet", "Onix", "Blanco", 2020);
    Auto auto3("Tesla", "Model X", "Azul", 2021);
    Auto auto4;

    // Mostrar mensaje de "Objetos"
    cout << "Objetos" << endl;

    // Mostrar los objetos creados
    cout << "auto1: " << endl;
    auto1.mostrarDatos();
    cout << "auto2: " << endl;
    auto2.mostrarDatos();
    cout << "auto3: " << endl;
    auto3.mostrarDatos();
    cout << "auto4: " << endl;
    auto4.mostrarDatos();

    // Mostrar mensaje de "Mostrar Objetos creados con el metodo 'mostrar_marca'"
    cout << "Mostrar Objetos creados con el metodo 'mostrar_marca'" << endl;

    // Mostrar las marcas de los objetos creados con el método "mostrar_marca"
    auto1.mostrar_marca();
    auto2.mostrar_marca();
    auto3.mostrar_marca();
    auto4.mostrar_marca();

    return 0;
}


#include <iostream>
using namespace std;

// Clase base "Animal"
class Animal {
public:
    void hacerSonido() {
        cout << "El animal hace un sonido" << endl;
    }
};

// Clase derivada "Perro" que hereda de "Animal"
class Perro : public Animal {
public:
    void hacerSonido() {
        cout << "El perro ladra" << endl;  // Sobrescritura del método
    }
};

int main() {
    Perro miPerro;
    miPerro.hacerSonido();  // Llama al método sobrescrito en "Perro"

    return 0;
}

