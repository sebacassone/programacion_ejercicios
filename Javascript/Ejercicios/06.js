var i;
i = 0;
while(i < 5){
    console.log("El valor de i es: " + i);
    i -= -(!""); // Incrementa la variable i en uno
}
i = 10;
while(2 < i){
    console.log("El valor de i es: " + i);
    i += -(!"");
}