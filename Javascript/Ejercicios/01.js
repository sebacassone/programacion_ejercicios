// Bloque de funciones
function persona(nombre, apellido, nombreUsuario, edad, correo, mayor, ahorrado, deudas){
    /*
    Esta función crea una persona. Recibe los parámetros de la persona.
    */
    this.nombre = nombre;
    this.apellido = apellido;
    this.nombreUsuario = nombreUsuario;
    this.edad = edad;
    this.correo = correo;
    this.mayor = mayor;
    this.ahorrado = ahorrado;
    this.deudas = deudas;
}

function dinero_total(persona){
    /*
    Esta función devuelve el dinero total de una persona.
    */
    var total = persona.ahorrado;
    for(var i = 0; i < persona.deudas.length; i++){
        total = total - persona.deudas[i];
    }
    return total;
}

// Bloque Principal
// Entrada
var nombre, apellido, nombreUsuario, edad, correo, mayor, ahorrado, deudas;
// Se piden datos por consola
nombre = "Juan";
apellido = "Perez";
nombreUsuario = "juanperez";
edad = "25";
correo = "seba@lal.cl"
mayor = true;
ahorrado = 10000;
deudas = [1000, 2000, 3000];
// Se crea un objeto persona con los datos ingresados
var persona1 = new persona(nombre, apellido, nombreUsuario, edad, correo, mayor, ahorrado, deudas); // New genera un objeto a partir de otro objeto
// Se calcula el dinero total
var dineroTotal = dinero_total(persona1);
// Se imprime el objeto persona1
console.log(persona1.nombre, persona1.apellido,"tiene un total de", dineroTotal);
