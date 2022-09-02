const h1 = document.querySelector('h1');
const p = document.querySelector('p');
const parrafito = document.querySelector('.parrafito');
// const parrafito = document.getElementsByClassName('parrafito');
const pid = document.querySelector('#pid');
// const pid = document.getElementById('pid');
const input = document.querySelector('input');

console.log(input.value);

console.log({
    h1,
    p,
    parrafito,
    pid,
    input
});

// h1.innerHTML = 'Hola mundo <br> Feo'; // Cambia el contenido del elemento
h1.innerText = 'Hola mundo <br> Feo'; // Cambia el contenido del elemento sin html
// h1.getAttribute('pantalla'); // Devuelve el atributo class del elemento
// h1.setAttribute('class', 'grande'); // Cambia el atributo class del elemento
h1.classList.add('grande'); // Agrega una clase al elemento
h1.classList.remove('grande'); // Elimina una clase del elemento
// h1.classList.toggle('grande'); // Alterna entre agregar y eliminar una clase del elemento
// h1.classList.contains('grande'); // Devuelve true si el elemento contiene la clase
// input.value = 'Hola mundo'; // Cambia el valor del elemento
const img = document.createElement('img'); // Crea un elemento
img.setAttribute('src', 'https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fi.imgur.com%2Fg63Y8NU.jpg&f=1&nofb=1'); // Agrega un atributo al elemento
pid.innerText = "";
pid.append(img); // Agrega el elemento al elemento padre
