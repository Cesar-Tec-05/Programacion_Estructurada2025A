// PROGRAMA: ap_j1_functions.cpp
// programa de las funciones del juego del ahorcado

#include <vector> // Incluimos la libreria para poder usar vectores
#include <cstdlib> // Incluimos la libreria para poder usar la funcion rand() y srand()
#include <ctime> // Incluimos la libreria para poder usar la funcion time()
#include <algorithm> // Incluimos la libreria para poder usar la funcion find() que nos ayuda a buscar un elemento en un vector
#include <iostream> // Incluimos la libreria para poder usar la entrada y salida de datos 
using namespace std; // Usamos el espacio de nombres std para no tener que escribir std:: cada vez que usemos una funcion de la libreria estandar

class Ahorcado // Definimos la clase Ahorcado
{
    private: // Declaramos las variables privadas de la clase

        vector<string> palabras = // Vector de palabras que se usaran en el juego
        {
            "computadora", 
            "programacion", 
            "teclado", 
            "raton", 
            "monitor", 
            "codigo", 
            "ahorcado", 
            "desarrollo", 
            "ingenieria", 
            "software", 
            "hardware", 
            "tecnologia", 
            "sistema", 
            "digital", 
            "redes", 
            "algoritmo", 
            "estructura", 
            "logica", 
            "matematicas", 
            "seguridad"
        };
        string palabraSecreta; // Palabra secreta que el jugador debe adivinar
        string palabraOculta; // Palabra oculta que se mostrara al jugador
        int intentos; // Numero de intentos que el jugador tiene para adivinar la palabra
        int intentosTotales; // Numero total de intentos que el jugador ha realizado
        string letrasUsadas; // Letras que el jugador ha usado

    public: // Declaramos las funciones publicas de la clase

        Ahorcado (string palabra = "") // Constructor de la clase Ahorcado
        {
            srand(time(0)); // Sembramos la semilla para la funcion rand()
            if (palabra.empty()) // Si la palabra esta vacia, seleccionamos una palabra aleatoria del vector de palabras
                palabraSecreta = palabras[rand() % palabras.size()]; // Seleccionamos una palabra aleatoria del vector de palabras
            else // Si la palabra no esta vacia, usamos la palabra ingresada por el jugador
                palabraSecreta = palabra; // Asignamos la palabra ingresada por el jugador a la variable palabraSecreta
            palabraOculta = string(palabraSecreta.length(), '_'); // Creamos la palabra oculta con guiones bajos
            intentos = 10; // Asignamos el numero de intentos a 10
            intentosTotales = 0; // Inicializamos el numero total de intentos a 0
        } // Fin del constructor de la clase Ahorcado

        void mostrarEstado() // Funcion para mostrar el estado del juego
        {
            cout << endl << "Palabra: " << palabraOculta << endl; // Mostramos la palabra oculta
            cout << "Intentos restantes: " << intentos << endl; // Mostramos los intentos restantes
            cout << "Intentos realizados: " << intentosTotales << endl; // Mostramos los intentos realizados
            cout << "Letras usadas: "; // Mostramos las letras usadas
            for (char letra : letrasUsadas) // Recorremos el string de letras usadas
            {
                cout << letra << " "; // Mostramos las letras usadas
            }
        } // Fin de la funcion mostrarEstado

        bool verificarLetra (char letra) // Funcion para verificar si la letra ingresada por el jugador es correcta
        {
            if (letrasUsadas.find(letra) != string::npos) // Si la letra ya ha sido usada
            {
                cout << "Ya has usado esta letra." << endl; // Mostramos un mensaje de error
                return false; // Retornamos false
            }
            if (letra < 'a' || letra > 'z') // Si la letra no es una letra entre a-z
            {
                cout << "Eleccion invalida. Debe ser una letra entre a-z." << endl; // Mostramos un mensaje de error
                return false; // Retornamos false
            }
            intentosTotales++; // Aumentamos el numero total de intentos
            letrasUsadas += letra; // Agregamos la letra a las letras usadas
            if (esVocal(letra)) // Si la letra es una vocal
            {
                intentos--; // Disminuimos el numero de intentos
                cout << "Es una vocal, pierdes un intento." << endl; // Mostramos un mensaje de error
            }
            bool encontrada = false; // Inicializamos la variable encontrada a false
            for (size_t i = 0; i < palabraSecreta.length(); i++) // Recorremos la palabra secreta
            {
                if (palabraSecreta[i] == letra) // Si la letra ingresada por el jugador es igual a la letra de la palabra secreta 
                {
                    palabraOculta[i] = letra; // Reemplazamos el guion bajo por la letra ingresada por el jugador
                    encontrada = true; // Asignamos true a la variable encontrada
                }
            }
            if (!encontrada) // Si la letra no fue encontrada en la palabra secreta 
            {
                cout << "Letra incorrecta, pierdes un intento" << endl; // Mostramos un mensaje de error
                intentos--; // Disminuimos el numero de intentos
            }
            return encontrada; // Retornamos el valor de la variable encontrada
        } // Fin de la funcion verificarLetra
        
        bool esVocal (char letra) // Funcion para verificar si la letra ingresada por el jugador es una vocal
        {
            char vocales[] = {'a', 'e', 'i', 'o', 'u'}; // Vector de vocales
            return find(begin(vocales), end(vocales), letra) != end(vocales); // Retornamos true si la letra ingresada por el jugador es una vocal
        } // Fin de la funcion esVocal
    
        bool juegoTerminado() // Funcion para verificar si el juego ha terminado
        {
            return intentos <= 0 || palabraOculta == palabraSecreta; // Retornamos true si el numero de intentos es menor o igual a 0 o si la palabra oculta es igual a la palabra secreta
        } // Fin de la funcion juegoTerminado
    
        bool jugadorGana() // Funcion para verificar si el jugador ha ganado
        {
            return palabraOculta == palabraSecreta; // Retornamos true si la palabra oculta es igual a la palabra secreta
        } // Fin de la funcion jugadorGana
    
        string getPalabraSecreta() // Funcion para obtener la palabra secreta
        {
            return palabraSecreta; // Retornamos la palabra secreta
        } // Fin de la funcion getPalabraSecreta
    
        int getIntentosTotales() // Funcion para obtener el numero total de intentos 
        {
            return intentosTotales; // Retornamos el numero total de intentos
        } // Fin de la funcion getIntentosTotales
}; // Fin de la clase Ahorcado

void jugarContraComputadora() // Funcion para jugar contra la computadora
{
    Ahorcado juego; // Creamos un objeto de la clase Ahorcado
    char letra; // Declaramos una variable para almacenar la letra ingresada por el jugador
    while (!juego.juegoTerminado()) // Mientras el juego no haya terminado
    {
        juego.mostrarEstado(); // Mostramos el estado del juego
        cout << endl << "Ingresa una letra: "; // Pedimos al jugador que ingrese una letra
        cin >> letra; // Guardamos la letra ingresada por el jugador
        letra = tolower(letra); // Convertimos la letra a minuscula
        system("cls"); // Limpiamos la consola
        juego.verificarLetra(letra); // Verificamos la letra ingresada por el jugador
    }
    juego.mostrarEstado(); // Mostramos el estado del juego
    if (juego.jugadorGana()) // Si el jugador ha ganado
        cout << endl << "¡Felicidades! Has adivinado la palabra en " << juego.getIntentosTotales() << " intentos." << endl; // Mostramos un mensaje de felicitaciones
    else // Si el jugador ha perdido
        cout << endl << "Has perdido. La palabra era: " << juego.getPalabraSecreta() << endl; // Mostramos un mensaje de error
} // Fin de la funcion jugarContraComputadora

void jugarContraOtroJugador() // Funcion para jugar contra otro jugador
{
    string palabra; // Declaramos una variable para almacenar la palabra secreta
    cout << "Jugador 1, ingresa la palabra secreta: "; // Pedimos al jugador 1 que ingrese la palabra secreta
    cin >> palabra; // Guardamos la palabra ingresada por el jugador 1
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower); // Convertimos la palabra a minuscula
    system("cls"); // Limpiamos la consola
    Ahorcado juego(palabra); // Creamos un objeto de la clase Ahorcado con la palabra ingresada por el jugador 1
    char letra; // Declaramos una variable para almacenar la letra ingresada por el jugador 2
    while (!juego.juegoTerminado()) // Mientras el juego no haya terminado
    {
        juego.mostrarEstado(); // Mostramos el estado del juego
        cout << endl << "Jugador 2, ingresa una letra: "; // Pedimos al jugador 2 que ingrese una letra
        cin >> letra; // Guardamos la letra ingresada por el jugador 2
        letra = tolower(letra); // Convertimos la letra a minuscula
        system("cls"); // Limpiamos la consola  
        juego.verificarLetra(letra); // Verificamos la letra ingresada por el jugador 2
    }
    juego.mostrarEstado(); // Mostramos el estado del juego
    if (juego.jugadorGana()) // Si el jugador 2 ha ganado
        cout << endl << "¡Jugador 2 ha adivinado la palabra en " << juego.getIntentosTotales() << " intentos!" << endl; // Mostramos un mensaje de felicitaciones
    else // Si el jugador 2 ha perdido
        cout << endl << "Jugador 2 ha perdido. La palabra era: " << juego.getPalabraSecreta() << endl; // Mostramos un mensaje de error
} // Fin de la funcion jugarContraOtroJugador

int menuOpciones() // Funcion para mostrar el menu de opciones
{
    cout << "Selecciona una opcion:" << endl; // Mostramos el menu de opciones
    cout << "1. Jugar contra la computadora" << endl;
    cout << "2. Jugar contra otro jugador" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: "; // Pedimos al usuario que seleccione una opcion
    int opcion_menu; // Declaramos una variable para almacenar la opcion seleccionada por el usuario
    while (!(cin >> opcion_menu) || opcion_menu < 1 || opcion_menu > 3) // Validamos la opcion ingresada
        {
            cout << "Opcion invalida. Intentelo de nuevo: "; // Mensaje de error
            cin.clear(); // Limpiamos la entrada
            cin.ignore (numeric_limits <streamsize> :: max(), '\n'); // Ignoramos la entrada 
        } // Fin del while
    return opcion_menu; // Retornamos la opcion seleccionada por el usuario
}

void pausar_programa() // funcion para pausar el programa
{
    cout << endl << "Presione Enter para continuar..."; // Mensaje para continuar
    cin.ignore(); // Ignoramos la entrada
    cin.get(); // Esperamos a que el usuario presione Enter
} // Fin de la funcion pausar_programa, no retorna ningun valor

// Fin del programa