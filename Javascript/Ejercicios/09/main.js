const h1 = document.querySelector('h1');
const input1 = document.querySelector('#Calculo1');
const input2 = document.querySelector('#Calculo2');
const boton0 = document.querySelector('#Calcular');
const pResult = document.querySelector('#Resultado');

function boton() {
    let num1 = parseInt(input1.value);
    let num2 = parseInt(input2.value);
    let resultado = num1 + num2;
    pResult.innerHTML = "Resultado " + resultado;
}
