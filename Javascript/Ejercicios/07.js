/*
    Bloque de funciones
*/
function primer_elemento(array){
    /*
    Esta función imprime el primer elemento de una lista.
    */
    console.log(array[0]);
    return 1;
}

function elementos(array){
    /*
    Esta función imprime los elementos de una lista.
    */
    for(var i = 0; i < array.length; i++){
        console.log(array[i]);
    }
    return 1;
}

function objetos(objeto){
    /*
    Esta función imprime los elementos de un objeto.
    */
    for(var i in objeto){
        console.log(i, objeto[i]);
    }
    return 1;
}

/*
    Bloque principal
*/
// Entrada
var array = [6, 5 ,6, 20, 36];
var objeto = {
    nombre: "Juan",
    apellido: "Perez",
    nombreUsuario: "juanperez",
    edad: "25"
};
// Procesamiento y Salida
primer_elemento(array);
elementos(array);
objetos(objeto);
