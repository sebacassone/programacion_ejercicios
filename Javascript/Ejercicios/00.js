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


Conceptos de backend
Estructura



                                                    Routes.js                               Directorio Routes                   Directorio Controller                               Base de datos  (carpeta)                 
                                                *   // Va a gestionar las rutas             // Carpeta donde irán               // Tiene toda la lógica del                         // Formada por una o más bases de datos
                                                    , hacia donde irá la petición y         todos los endpoints y               componente de mensajes.                             es donde residen los datos y es la encargada
                                                    llamará al componente adecuado          toda la información que             Si el mensaje necesita una fecha,                   de acceder a los mismos. Reciben solicitudes 
                                            *                                               que tenga que ver con el            tiene que llamar otro componente,                   de almacenamiento, o recuperación de información
                                        *                                                   protocolo HTTP.                     modificar, añadir información, etc.                 desde controller.
                                        *                                                   La capa que verá el usuario         (Lógica de negocio).                                
                                    *                                                       Se comunica únicamnete              Se establecen todas las reglas que deben
                                *                                                           con la capa de negocio              cumplirse, se comunica con ROutes para
Internet ---------> Server.js                                                                                                   recibir las solicitudes y presentar los
                    // Se encarga de comprobar                                                                                  resultados, y con la base de datos
                    que las peticiones                                                                                          para solicitar al gestor de base de datos
                    son correctas para almacenarlas                                                                             almacenar o recuperar datos de él.
                    en el servidor o cancelarlas si
                    hay un problema.
                    (modelo muy similar a la arquitectura
                    Clean Architecture)
                                *
                                    *
                                        *
                                            *
                                                *
                                                    response.js     
                                                    // Dará todas las respuestas




El protocolo Websocket o wss:// crea un túnel de información entre el usuario y
el servidor el cual se quedará abierto hasta que el servidor y/o el cliente cierre la conexión para pedir información en tiempo real
*/
/*
La expresión await provoca que la ejecución de una función async sea pausada hasta que una Promise sea terminada o rechazada,
y regresa a la ejecución de la función async después del término. Al regreso de la ejecución, el valor de la expresión await
es la regresada por una promesa terminada.

- si yo quiero agregar los atributos _id y nombre a otro objeto pero al mismo nivel de otro atributos, uso los 3 puntos. " ...objeto "


- En MongoDB, upsert es una opción que se utiliza para la operación de actualización, por ejemplo, update(), findAndModify(), etc. 
O en otras palabras, upsert es una combinación de update e insert (update + insert = upsert). Si el valor de esta opción es verdadero 
y el documento o los documentos encontrados coinciden con la consulta especificada, la operación de actualización actualizará el documento 
o los documentos coincidentes. O si el valor de esta opción se establece como verdadero y no hay ningún documento o documentos que coincidan 
con el documento especificado, entonces esta opción inserta un nuevo documento en la colección y este nuevo documento tiene los campos que 
se indican en la operación. Por defecto, el valor de la opción upsert es falso. Si el valor de upsert en una colección sharded es true 
entonces hay que incluir la clave completa del shard en el filtro.

Middleware es software que permite uno o más tipos de comunicación o conectividad entre dos o más aplicaciones o componentes de aplicaciones
en una red distribuida. Al facilitar la conexión de aplicaciones que no fueron diseñadas para conectarse entre sí, y al brindar funcionalidad
para conectarlas de manera inteligente, el middleware agiliza el desarrollo de aplicaciones y acelera el tiempo de comercialización.
- Funcionan como pipes
- Validan datos
- Capturan errores
- Validan permisos
- Controlan accesos
https://expressjs.com/en/guide/writing-middleware.html

CORS

Middleware para habilitar CORS (Cross-origin resource sharing) en nuestras rutas o aplicación. http://expressjs.com/en/resources/middleware/cors.html
Morgan

Un logger de solicitudes HTTP para Node.js. http://expressjs.com/en/resources/middleware/morgan.html
Helmet

Helmet nos ayuda a proteger nuestras aplicaciones Express configurando varios encabezados HTTP. ¡No es a prueba de balas de plata, pero puede ayudar! https://github.com/helmetjs/helmet
Express Debug

Nos permite hacer debugging de nuestras aplicaciones en Express mediante el uso de un toolbar en la pagina cuando las estamos desarrollando. https://github.com/devoidfury/express-debug
Express Slash

Este middleware nos permite evitar preocuparnos por escribir las rutas con o sin slash al final de ellas. https://github.com/ericf/express-slash
Passportds

Passport es un middleware que nos permite establecer diferentes estrategias de autenticación a nuestras aplicaciones. https://github.com/jaredhanson/passport

    Puedes encontrar más middlewares populares en el siguiente enlace: http://expressjs.com/en/resources/middleware.html


*/