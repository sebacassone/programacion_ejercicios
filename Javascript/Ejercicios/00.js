/*
Clase 1
// Tipos de datos: variables primitivas
// Número
40
// Cadena de texto (string)
"Hola mundo"
// Booleano (true o false)
true
false
// Valor vacío (null)
null
undefined
// No primitivo
// Arreglos (array)
[1, 2, 3, 4, 5]
// Objetos (object)
var persona ={
    nombre: "Juan",
    apellido: "Perez"
}
*/
/*
Clase 2
var nombre = "Juan";
var edad = 30;
var casado = false;
var soltero = true;
let hijos = null;
let mascotas = undefined;
let edad = "30";
*/
/*
Clase 3
// Declarativas
function primera_funcion(){
    console.log("Hola mundo");
}
// Expresivas
var nombre = "Juan";
var segunda_funcion = function(nombre){
    console.log('Hola ${nombre}');
}
segunda_funcion();
primera_funcion();
*/
/*
Clase 4
Scope = alcance de una variable. Es el alcance de una variable dentro de una función.
Hoisting = Cuando las variables y las funciones se declaran antes de declararla o inicializarla.
Las variables y las funciones se procesan antes de ejecutar el código.
Coercion = Conversion de un tipo de dato a otro al realizar una operación.
Coercion implicita = El lenguaje de programación convierte el tipo de dato a otro 
Coercion explicita = El programador obliga a hacer la conversion de tipo de dato.
*/
/*
Clase arrays
var arreglo = [1, 2, 3, 4, 5];
Métodos importantes de arreglos:
arreglo.length; // Devuelve el largo del array
arreglo.push(6); // Agrega un elemento al final del array
arreglo.pop(); // Elimina el último elemento del array
arreglo.shift(); // Elimina el primer elemento del array
arreglo.unshift(0); // Agrega un elemento al principio del array
arreglo.splice(1, 1); // Elimina un elemento del array
arreglo.slice(1, 2); // Devuelve un subarreglo del array
arreglo.indexOf(1); // Devuelve el indice del elemento en el array

arreglo.reverse(); // Invierte el orden del array
arreglo.sort(); // Ordena el array
arreglo.join(); // Devuelve una cadena con los elementos del array separados por un caracter
arreglo.lastIndexOf(1); // Devuelve el indice del ultimo elemento en el array
arreglo.every(); // Devuelve true si todos los elementos del array cumplen una condición
arreglo.some(); // Devuelve true si alguno de los elementos del array cumplen una condición
arreglo.filter(); // Devuelve un nuevo array con los elementos que cumplen una condición
arreglo.map(); // Devuelve un nuevo array con los elementos modificados
arreglo.reduce(); // Devuelve un valor con la suma de todos los elementos del array
arreglo.reduceRight(); // Devuelve un valor con la suma de todos los elementos del array
*/
/*
Metodos de objetos
El método find () devuelve el primer valor que coincide de la colección. Una vez que coincida
con el valor en los resultados, no verificará los valores restantes en la colección de matriz.

El método filter () devuelve los valores coincidentes en una matriz de la colección. Verificará
todos los valores de la colección y devolverá los valores coincidentes en una matriz.
Filter: Devuelve un nuevo array con los elementos que cumplen una condición, Crea un nuevo array
con los elementos del array que se pasó como parámetro y que cumplan con la condición definida.
Map: Crea un nuevo array con los resultados de la llamada a la función indicada aplicados a
cada uno de sus elementos.
ForEach: Ejecuta una función por cada elemento del array.
Some: Hace una validación de verdadero o falso.
Reduce: Devuelve un valor con la suma de todos los elementos del array
ReduceRight: Devuelve un valor con la suma de todos los elementos del array
*/