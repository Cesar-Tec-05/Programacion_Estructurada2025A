// PROGRAMA: ap10_functions.cpp
// Funciones de la actividad de programación 10

// Incluimos las librerias necesarias
#include <vector> // Incluimos la libreria para poder usar vectores
#include <algorithm> // Incluimos la libreria para poder usar la funcion find() que nos ayuda a buscar un elemento en un vector
#include <string> // Incluimos la libreria para poder usar cadenas de texto
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres estandar

int menu () // funcion para mostrar el menu de opciones y obtener la opcion del usuario
{
    int opcion_fun; // Declaramos una variable para la opcion del menu
    cout << endl << "Menu de Opciones:"; 
    cout << endl << "1. Insertar un elemento"; 
    cout << endl << "2. Borrar un elemento"; 
    cout << endl << "3. Editar un elemento"; 
    cout << endl << "4. Vaciar un conjunto"; 
    cout << endl << "5. Mostrar Conjuntos";      
    cout << endl << "6. Union";                     // Mostramos el menu de opciones
    cout << endl << "7. Interseccion"; 
    cout << endl << "8. Diferencia";  
    cout << endl << "9. Complemento";
    cout << endl << "10. Reiniciar el programa";
    cout << endl << "11. Salir del programa";
    cout << endl << "Seleccione una opcion: ";
    while (!(cin >> opcion_fun) || opcion_fun < 1 || opcion_fun > 11) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
        }
    return opcion_fun; // Retornamos la opcion seleccionada
} // Fin de la funcion menu, retorna un valor entero

bool validarElemento(const vector<string>& conjunto, const string& valor) // funcion para validar si un elemento esta en un conjunto 
{
    return find(conjunto.begin(), conjunto.end(), valor) != conjunto.end(); // Retornamos si el elemento esta en el conjunto por medio de las funciones find() y end(), que nos ayudan a buscar un elemento en un vector 
} // Fin de la funcion validarElemento, retorna un valor booleano

void mostrarConjunto (const vector<string> & conjunto) // funcion para mostrar un conjunto 
{
    cout << "{ "; // Mostramos el inicio del conjunto
    for (const auto & elem : conjunto) // Iteramos sobre el conjunto para mostrar cada elemento
    {
        cout << elem << " "; // Mostramos el elemento, por defecto se separa por un espacio
    }
    cout << "}" << endl; // Mostramos el final del conjunto
} // Fin de la funcion mostrarConjunto, no retorna ningun valor

void insertarElemento (vector<string> & conjunto) // funcion para insertar un elemento en un conjunto
{
    string valor; // Declaramos una variable para el valor a insertar
    cout << "Ingrese un elemento: "; // Pedimos al usuario que ingrese un elemento
    cin >> valor; // Guardamos el valor ingresado
    conjunto.push_back(valor); // Insertamos el valor en el conjunto
} // Fin de la funcion insertarElemento, no retorna ningun valor
void insertarElementoSeleccionado (vector<string> & A, vector<string> & B) // funcion para seleccionar un conjunto y para la funcion de insertar
{
    int conjunto; // Declaramos una variable para el conjunto
    cout << "Seleccione el conjunto (1 para A, 2 para B): "; // Pedimos al usuario que seleccione un conjunto
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    if (conjunto == 1) // condicional para la eleccion 
    {
        insertarElemento(A); // Llamamos a la funcion para insertar un elemento en el conjunto A
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
    }
    else 
    {
        insertarElemento(B); // Llamamos a la funcion para insertar un elemento en el conjunto B
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
    }
} // Fin de la funcion insertarElementoSeleccionado, no retorna ningun valor

void borrarElemento(vector<string> & conjunto) // funcion para borrar un elemento de un conjunto
{
    string valor; // Declaramos una variable para el valor a borrar
    cout << "Elemento a borrar: "; // Pedimos al usuario que ingrese el elemento a borrar
    cin >> valor; // Guardamos el valor ingresado
    if (validarElemento(conjunto, valor)) // Validamos si el elemento esta en el conjunto
        conjunto.erase(remove(conjunto.begin(), conjunto.end(), valor), conjunto.end()); // Borramos el elemento del conjunto
    else 
        cout << "Elemento no encontrado. Intentelo de nuevo." << endl; // Mensaje de error
} // Fin de la funcion borrarElemento, no retorna ningun valor
void borrarElementoSeleccionado (vector<string> & A, vector<string> & B) // funcion para seleccionar un conjunto para la funcion de borrar 
{
    int conjunto; // Declaramos una variable para el conjunto
    cout << "Seleccione el conjunto (1 para A, 2 para B): "; // Pedimos al usuario que seleccione un conjunto
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
    }
    if (conjunto == 1) // condicionar para la eleccion 
    {
        borrarElemento(A); // Llamamos a la funcion para borrar un elemento en el conjunto A
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
    } 
    else
    {
        borrarElemento(B); // Llamamos a la funcion para borrar un elemento en el conjunto B
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
    }  
} // Fin de la funcion borrarElementoSeleccionado, no retorna ningun valor

void editarElemento (vector<string>& conjunto) // funcion para editar un elemento de un conjunto
{
    string viejo, nuevo; // Declaramos dos variables para el valor viejo y el valor nuevo
    cout << "Elemento a editar: "; // Pedimos al usuario que ingrese el elemento a editar
    cin >> viejo; // Guardamos el valor ingresado
    if (validarElemento(conjunto, viejo)) // validamos si el elemento esta en el conjunto
    {
        cout << "Nuevo valor: "; // Pedimos al usuario que ingrese el nuevo valor
        cin >> nuevo; // Guardamos el valor ingresado
        replace(conjunto.begin(), conjunto.end(), viejo, nuevo); // Reemplazamos el valor viejo por el nuevo por medio de la funcion replace()
    } 
    else
        cout << "Elemento no encontrado. Intentelo de nuevo." << endl; // Mensaje de error
} // Fin de la funcion editarElemento, no retorna ningun valor
void editarElementoSeleccionado(vector<string> & A, vector<string> & B) // funcion para seleccionar un conjunto para la funcion de editar
{
    int conjunto; // Declaramos una variable para el conjunto
    cout << "Seleccione el conjunto (1 para A, 2 para B): "; // Pedimos al usuario que seleccione un conjunto
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    if (conjunto == 1) // condicional para la eleccion
    {
        editarElemento(A); // Llamamos a la funcion para editar un elemento en el conjunto A
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
    }
    else
    {
        editarElemento(B); // Llamamos a la funcion para editar un elemento en el conjunto B
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
    }
} // Fin de la funcion editarElementoSeleccionado, no retorna ningun valor

vector<string> unionConjuntos (const vector<string> & A, const vector<string> & B) // funcion para la union de conjuntos
{
    vector<string> resultado = A; // Declaramos un vector para el resultado y lo inicializamos con el conjunto A
    resultado.insert(resultado.end(), B.begin(), B.end()); // Insertamos los elementos del conjunto B en el resultado por medio de la funcion insert()
    sort(resultado.begin(), resultado.end()); // Ordenamos el resultado por medio de la funcion sort()
    resultado.erase(unique(resultado.begin(), resultado.end()), resultado.end()); // Eliminamos los elementos duplicados por medio de las funciones unique() y erase()
    return resultado; // Retornamos el resultado
} // Fin de la funcion unionConjuntos, retorna un vector de cadenas de texto

vector<string> interseccionConjuntos (const vector<string> & A, const vector<string> & B) // funcion para la interseccion de conjuntos 
{
    vector<string> resultado; // Declaramos un vector para el resultado
    for (const auto & elem : A) // Iteramos sobre el conjunto A
    {
        if (find(B.begin(), B.end(), elem) != B.end()) // Validamos si el elemento esta en el conjunto B por medio de la funcion find()
            resultado.push_back(elem); // Insertamos el elemento en el resultado por medio de la funcion push_back()
    }
    return resultado; // Retornamos el resultado
} // Fin de la funcion interseccionConjuntos, retorna un vector de cadenas de texto

vector<string> diferenciaConjuntos (const vector<string> & A, const vector<string> & B) // funcion para la diferencia de conjuntos   
{
    vector<string> resultado; // Declaramos un vector para el resultado
    for (const auto& elem : A) // Iteramos sobre el conjunto A 
    {
        if (find(B.begin(), B.end(), elem) == B.end()) // Validamos si el elemento no esta en el conjunto B por medio de la funcion find()
            resultado.push_back(elem); // Insertamos el elemento en el resultado por medio de la funcion push_back()
    }
    return resultado; // Retornamos el resultado
} // Fin de la funcion diferenciaConjuntos, retorna un vector de cadenas de texto
void diferenciaSeleccionado (vector<string> & A, vector<string> & B) // funcion para seleccionar la conmutatividad
{
    int conjunto; // Declaramos una variable para la seleccion
    cout << "Seleccione la diferencia (1 para A - B, 2 para B - A): "; // Pedimos al usuario que seleccione la diferencia de conmutatividad
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    if (conjunto == 1) // condicional para la eleccion 
    {
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
        cout << "Resultado:" << endl; // Mostramos el resultado
        cout << "A - B: "; mostrarConjunto(diferenciaConjuntos(A, B)); // Mostramos la diferencia de los conjuntos
    } 
    else
    {
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
        cout << "Resultado:" << endl; // Mostramos el resultado
        cout << "B - A: "; mostrarConjunto(diferenciaConjuntos(B, A)); // Mostramos la diferencia de los conjuntos
    }
} // Fin de la funcion diferenciaSeleccionado, no retorna ningun valor

vector<string> complementoConjunto (const vector<string> & A, const vector<string> & B) // funcion para el complemento de un conjunto
{
    vector<string> resultado; // Declaramos un vector para el resultado
    for (const auto & elem : A) // Iteramos sobre el conjunto A
    {
        if (find(B.begin(), B.end(), elem) == B.end()) // Validamos si el elemento no esta en el conjunto B por medio de la funcion find()
            resultado.push_back(elem); // Insertamos el elemento en el resultado por medio de la funcion push_back()
    }
    return resultado; // Retornamos el resultado
} // Fin de la funcion complementoConjunto, retorna un vector de cadenas de texto
void complementoSeleccionado (vector<string> & A, vector<string> & B) // funcion para seleccionar que conjunto realizar el complemento  
{
    int conjunto; // Declaramos una variable para la seleccion
    cout << "Seleccione el complemento (1 para B', 2 para A'): "; // Pedimos al usuario que seleccione el complemento
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    if (conjunto == 1) // condicional para la eleccion
    {
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
        cout << "Resultado:" << endl; // Mostramos el resultado
        cout << "B': "; mostrarConjunto(complementoConjunto(A, B)); // Mostramos el complemento del conjunto B
    }
    else  
    {
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A 
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
        cout << "Resultado:" << endl; // Mostramos el resultado
        cout << "B': "; mostrarConjunto(complementoConjunto(B, A)); // Mostramos el complemento del conjunto A
    }
} // Fin de la funcion complementoSeleccionado, no retorna ningun valor

void vaciarConjunto (vector<string> & conjunto) // funcion para vaciar un conjunto
{
    conjunto.clear(); // Limpiamos el conjunto por medio de la funcion clear()
    cout << "Conjunto vaciado." << endl; // Mensaje de confirmacion
} // Fin de la funcion vaciarConjunto, no retorna ningun valor
void vaciarSeleccion (vector<string> & A, vector<string> & B) // funcion para seleccionar un conjunto para vaciar
{
    int conjunto; // Declaramos una variable para la seleccion
    cout << "Seleccione el conjunto (1 para A, 2 para B): "; // Pedimos al usuario que seleccione un conjunto
    while (!(cin >> conjunto) || conjunto < 1 || conjunto > 2) // Validamos la opcion ingresada
    {
        cout << "Opcion invalida. Intente de nuevo: "; // Mensaje de error
        cin.clear(); // Limpiamos la entrada
        cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada
    }
    if (conjunto == 1) // condicional para la eleccion
    {
        vaciarConjunto(A); // Llamamos a la funcion para vaciar el conjunto A
        cout << "A: "; mostrarConjunto(A); // Mostramos el conjunto A
    }
    else
    {
        vaciarConjunto(B); // Llamamos a la funcion para vaciar el conjunto B
        cout << "B: "; mostrarConjunto(B); // Mostramos el conjunto B
    }
} // Fin de la funcion vaciarSeleccion, no retorna ningun valor

void pausar_programa() // funcion para pausar el programa
{
    cout << endl << "Presione Enter para continuar..."; // Mensaje para continuar
    cin.ignore(); // Ignoramos la entrada
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pausar_programa, no retorna ningun valor

bool reiniciar_programa() // funcion para reiniciar el programa 
{
    cout << "Reiniciando programa..."; // Mensaje de reinicio
    pausar_programa(); // Llamamos a la funcion para pausar el programa
    return false; // Retornamos falso
} // Fin de la funcion reiniciar_programa, retorna un valor booleano

// FIN DEL PROGRAMA: ap10_functions.cpp
