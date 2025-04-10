// PROGRAMA: ap_j2_functions.cpp
// programa de las funciones del juego de las torres de hanoi

#include <vector> // Incluimos la libreria vector para poder usar vectores
#include <string> // Incluimos la libreria string para poder usar cadenas de texto
#include <algorithm> // Incluimos la libreria algorithm para poder usar funciones de algoritmos
#include <cmath> // Incluimos la libreria cmath para poder usar funciones matematicas
#include <iostream> // Incluimos la libreria iostream para poder usar la entrada y salida de datos
using namespace std; // Usamos el espacio de nombres std para no tener que escribir std:: cada vez que usemos una funcion de la libreria iostream

void pantallaInicio() // Funcion para mostrar la pantalla de inicio
{
    cout << "================================================" << endl;
    cout << "    .---.  .----. .----. .----. .----. .----." << endl;
    cout << "   {_   _}/  {}  \\| {}  }| {}  }| {_  { {__  " << endl;
    cout << "     | |  \\      /| .-. \\| .-. \\| {__ .-._} }" << endl;
    cout << "     `-'   `----' `-' `-'`-' `-'`----'`----' " << endl;
    cout << "                  .----. .----.              " << endl;
    cout << "                  | {}  \\| {_                " << endl;
    cout << "                  |     /| {__               " << endl; // Dibujamos la pantalla de inicio
    cout << "                  `----' `----'              " << endl;
    cout << "        .-. .-.  .--.  .-. .-. .----. .-.   " << endl;
    cout << "        | {_} | / {} \\ |  `| |/  {}  \\| |   " << endl;
    cout << "        | { } |/  /\\  \\| |\\  |\\      /| |   " << endl;
    cout << "        ""`-' `-'`-'  `-'`-' `-' `----' `-'    " << endl;
    cout << "================================================" << endl;
    cout << "         Presiona Enter para continuar          " << endl; // Mensaje para continuar
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pantallaInicio, no retorna ningun valor

int mostrarMenu() // Funcion para mostrar el menu principal
{
    int opcion_menu; // Variable para almacenar la opcion seleccionada por el usuario
    cout << "+------------------------------+" << endl; // Dibujamos el menu de opciones 
    cout << "|         TORRES DE HANOI      |" << endl;
    cout << "+------------------------------+" << endl;
    cout << "| 1. Jugar                     |" << endl;
    cout << "| 2. Salir                     |" << endl;
    cout << "+------------------------------+" << endl;
    cout << "Selecciona una opcion: "; // Mensaje para seleccionar una opcion
    while (!(cin >> opcion_menu) || opcion_menu < 1 || opcion_menu > 2) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        } // Fin del while
        return opcion_menu; // Retornamos la opcion seleccionada por el usuario
} // Fin de la funcion mostrarMenu, retorna un entero

int obtenerNumero() // Funcion para obtener un numero entero
{
    string entrada; // Variable para almacenar la entrada del usuario
    int num; // Variable para almacenar el numero ingresado
    while (true) // Bucle infinito para validar la entrada
    {
        cin >> entrada; // Leemos la entrada del usuario
        bool esEntero = true; // Variable para validar si la entrada es un entero
        for (char c : entrada)  // Iteramos sobre cada caracter de la entrada
        {
            if (!isdigit(c) && !(c == '-' && &c == &entrada[0])) // Validamos si es un digito o un signo negativo al inicio
            {
                esEntero=false; // Si no es un digito, cambiamos la variable a false
                break; // Salimos del bucle
            }  
        }
        if (esEntero) // Si la entrada es un entero
        {
            try {num = stoi(entrada); break;} // Convertimos la entrada a un entero y salimos del bucle 
            catch(...) {} // Si ocurre un error, continuamos con el bucle
        }
        cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
    }
    return num; // Retornamos el numero ingresado por el usuario
} // Fin de la funcion obtenerNumero, retorna un entero

void inicializarTorres (int n, vector<vector<int>> & torres) // Funcion para inicializar las torres
{
    torres.assign(3, vector<int>()); // Asignamos 3 torres vacias
    for (int d = n; d >= 1; --d) // Iteramos desde el disco mas grande hasta el mas pequeño
        torres[0].push_back(d); // Agregamos el disco a la torre 0
} // Fin de la funcion inicializarTorres, no retorna ningun valor

void mostrarTorres (const vector<vector<int>>& torres, int n) // Funcion para mostrar las torres
{
    int width = 2*n - 1; // Ancho de cada disco
    for (int level = n - 1; level >= 0; --level) // Iteramos desde el nivel mas alto hasta el mas bajo
    {
        for (int t = 0; t < 3; ++t) // Iteramos sobre cada torre
        {
            if (level < (int)torres[t].size()) // Si el nivel es menor que el tamaño de la torre
            {
                int disc = torres[t][level]; // Obtenemos el disco en el nivel actual
                int discW = 2*disc - 1; // Ancho del disco
                int padL = (width - discW) / 2; // Padding izquierdo para centrar el disco
                int padR = width - discW - padL; // Padding derecho para centrar el disco
                cout << string(padL, ' ') << string(discW, '=') << string(padR, ' '); // Mostramos el disco
            } 
            else // Si no hay disco en el nivel actual
            {
                int padL = (width - 1) / 2; // Rellenamos con espacios
                int padR = width - 1 - padL; // Rellenamos con espacios
                cout << string(padL, ' ') << '|' << string(padR, ' '); // Mostramos la torre vacia
            }
            cout << ' '; // Espacio entre torres
        }
        cout << endl; // Salto de linea
    }
    for (int t = 0; t < 3; ++t) // Iteramos sobre cada torre
        cout << string(width, '-') << ' '; // Mostramos la base de las torres
    cout << endl; // Salto de linea 
} // Fin de la funcion mostrarTorres, no retorna ningun valor

bool moverDisco (vector<vector<int>>& torres, int origen, int destino) // Funcion para mover un disco de una torre a otra
{
    if (torres[origen].empty()) // Si la torre de origen esta vacia
        return false; // Retornamos false
    int d = torres[origen].back(); // Obtenemos el disco en la parte superior de la torre de origen
    if (!torres[destino].empty() && torres[destino].back() < d) // Si la torre de destino no esta vacia y el disco en la parte superior es menor que el disco a mover
        return false; // Retornamos false
    torres[origen].pop_back(); // Quitamos el disco de la torre de origen
    torres[destino].push_back(d); // Agregamos el disco a la torre de destino
    return true; // Retornamos true
} // Fin de la funcion moverDisco, retorna un booleano

int calcularEstrellas (int movimientos, int optimo) // Funcion para calcular la puntuacion en estrellas
{
    double ratio = (double)optimo / movimientos; // Calculamos el ratio entre los movimientos optimos y los movimientos realizados
    int estrellas = (int)round(ratio * 5.0); // Calculamos las estrellas
    if (estrellas < 1) // Si las estrellas son menores a 1
        estrellas = 1; // Asignamos 1 estrella
    if (estrellas > 5) // Si las estrellas son mayores a 5
        estrellas = 5; // Asignamos 5 estrellas
    return estrellas; // Retornamos las estrellas
} // Fin de la funcion calcularEstrellas, retorna un entero

void mostrarEstrellas (int estrellas) // Funcion para mostrar las estrellas
{
    cout << "Puntuacion: "; // Mensaje de puntuacion
    for (int i = 0; i < estrellas; ++i) // Iteramos sobre el numero de estrellas
        cout << '*'; // Mostramos la estrella
    for (int i = estrellas; i < 5; ++i) // Iteramos sobre el numero de estrellas restantes
        cout << ' '; // Mostramos un espacio
    cout << " (" << estrellas << "/5)" << endl; // Mostramos la puntuacion en estrellas
} // Fin de la funcion mostrarEstrellas, no retorna ningun valor

void jugarHanoi() // Funcion para jugar el juego de las Torres de Hanoi
{
    cout << endl << "Ingresa el numero de discos (1-10): "; // Mensaje para ingresar el numero de discos
    int n; // Variable para almacenar el numero de discos
    do // Bucle para validar el numero de discos 
    {
        n = obtenerNumero(); // Obtenemos el numero de discos
        if (n < 1 || n > 10) // Si el numero de discos es menor a 1 o mayor a 10
            cout << "Valor invalido. Ingresa entre 1 y 10: "; // Mensaje de error
    } 
    while (n < 1 || n > 10); // Fin del bucle
    vector<vector<int>> torres; // Vector para almacenar las torres
    inicializarTorres(n, torres); // Inicializamos las torres
    int movimientos = 0; // Variable para almacenar el numero de movimientos realizados
    int optimo = (1 << n) - 1; // Calculamos el numero optimo de movimientos
    while (((int)torres[2].size() != n) && ((int)torres[1].size() != n)) // Mientras las torres 2 y 1 no tengan el numero de discos
    {
        cout << "Ingresa un movimiento 0 para salir: " << endl; // Mensaje para ingresar un movimiento para salir
        cout << endl << "Estado actual:" << endl << endl; // Mensaje de estado actual
        mostrarTorres(torres, n); // Mostramos las torres
        cout << endl << "Movimiento #" << (movimientos+1) << endl; // Mensaje de movimiento
        cout << "Torre origen: "; // Mensaje para ingresar la torre de origen
        int o = obtenerNumero(); // Obtenemos la torre de origen
        cout << "Torre destino: "; // Mensaje para ingresar la torre de destino
        int d = obtenerNumero(); // Obtenemos la torre de destino
        system("cls"); // Limpiamos la consola
        if (o == 0 || d == 0) // Si el usuario ingresa 0 
        {
            cout << "Saliendo del la partida..." << endl; // Mensaje de salida
            return; // Retornamos de la funcion
        }
        if (o < 1 || o > 3 || d < 1 || d > 3) // Si el usuario ingresa un numero invalido
        {
            cout << "Torres invalidas. Usa numeros entre 1 y 3." << endl; // Mensaje de error
            continue; // Continuamos con el bucle
        }
        if (moverDisco(torres, o - 1, d - 1)) // Si el movimiento es valido
            movimientos++; // Incrementamos el contador de movimientos
        else // Si el movimiento no es valido
            cout << "Movimiento ilegal. Intenta de nuevo." << endl; // Mensaje de error
    }
    system("cls"); // Limpiamos la consola
    cout << "Felicidades! Completaste las Torres de Hanoi." << endl << endl; // Mensaje de felicitaciones
    mostrarTorres(torres, n); // Mostramos las torres
    cout << endl << "Movimientos realizados: " << movimientos << endl; // Mensaje de movimientos realizados
    cout << "Movimientos minimos (optimos): " << optimo << endl << endl; // Mensaje de movimientos optimos
    if (movimientos == optimo) // Si el numero de movimientos es igual al optimo
        cout << "Lo lograste en el minimo de movimientos!" << endl << endl; // Mensaje de felicitaciones
    else // Si el numero de movimientos es mayor al optimo
        cout << "Podrias resolverlo en menos movimientos." << endl << endl; // Mensaje de recomendacion
    int estrellas = calcularEstrellas(movimientos, optimo); // Calculamos las estrellas
    mostrarEstrellas(estrellas); // Mostramos las estrellas
} // Fin de la funcion jugarHanoi, no retorna ningun valor

void pausar_programa() // funcion para pausar el programa
{
    cout << endl << "Presione Enter para continuar..."; // Mensaje para continuar
    cin.ignore(); // Ignoramos la entrada
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pausar_programa, no retorna ningun valor

// Fin del programa de las funciones del juego de las torres de hanoi