// Crear una clase llamada "Auto" para crear instancias de objetos que tenga los siguientes atributos:
// - marca
// - modelo
// - color
// - año


// Crear clase "Auto"
class Auto // Clase Auto
{
    constructor(marca = 'No se agrego la marca', modelo = 'No se agrego el modelo', color = 'No se agrego el color', year = 'No se agrego el año') // El contructor recibe los atributos de la clase para poder crear el objeto 
    {
        this.marca = marca; // Atributo marca con valor por defecto "No se agrego la marca"
        this.modelo = modelo; // Atributo modelo con valor por defecto "No se agrego el modelo"
        this.color = color; // Atributo color con valor por defecto "No se agrego el color"
        this.year = year; // Atributo year con valor por defecto "No se agrego el año"
    }
    
    mostrarDatos() // Metodo mostrarDatos que muestra los datos del objeto
    {
        console.log(`Marca: ${this.marca}, Modelo: ${this.modelo}, Color: ${this.color}, Año: ${this.year}`); // Mostrar los datos del objeto
    }
    mostrar_marca() // Metodo mostrar_marca que muestra la marca del objeto
    {
        console.log(this.marca); // Mostrar la marca del objeto
    }
    numero_llantas() // Metodo numero_llantas que muestra el numero de llantas del auto
    {
        console.log("4 llantas"); // Mostrar el numero de llantas del auto
    }
}

// Crear clase heredada
class Moto extends Auto // Clase Moto que hereda de la clase Auto
{
    constructor(marca, modelo, color, year) // El contructor recibe los atributos de la clase para poder crear el objeto 
    {
        super(marca, modelo, color, year); // Se llama al constructor de la clase padre
    }
    numero_llantas() // Metodo numero_llantas que muestra el numero de llantas de la moto
    {
        console.log("2 llantas"); // Mostrar el numero de llantas de la moto
    }
}

// Crear un objetos de la clase "Auto"
const auto1 = new Auto('Ford', 'Fiesta', 'Rojo', 2019);
const auto2 = new Auto('Chevrolet', 'Onix', 'Blanco', 2020);
const auto3 = new Auto('Tesla', 'Model X', 'Azul', 2021);
const auto4 = new Auto();
const moto1 = new Moto('Yamaha', 'R1', 'Negra', 2021);

console.warn("Objetos"); // Mostrar en consola el mensaje "Objetos"

// Mostrar los objetos creados
console.log({auto1});
console.log({auto2});
console.log({auto3});
console.log({auto4});
console.log({moto1});

console.warn("Mostrar Objetos creados con el metodo 'mostrarDatos'"); // Mostrar en consola el mensaje "Mostrar Objetos creados con el metodo 'mostrarDatos'"

// Mostrar los datos de los objetos creados con el metodo "mostrarDatos"
auto1.mostrarDatos();
auto2.mostrarDatos();
auto3.mostrarDatos();
auto4.mostrarDatos();
moto1.mostrarDatos();

console.warn("Mostrar Objetos creados con el metodo 'mostrar_marca'"); // Mostrar en consola el mensaje "Mostrar Objetos creados con el metodo 'mostrar_marca'"

// Mostrar la marca de los objetos creados con el metodo "mostrar_marca"
auto1.mostrar_marca();
auto2.mostrar_marca();
auto3.mostrar_marca();
auto4.mostrar_marca();
moto1.mostrar_marca();

console.warn("Metodo 'numero_llantas'"); // Mostrar en consola el mensaje "Mostrar Objetos creados con el metodo 'numero_llantas'"

auto1.numero_llantas();
moto1.numero_llantas();




