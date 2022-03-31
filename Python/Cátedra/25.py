'''
Este programa cálcula el factorial de un número
'''

# Usamos la iteración while para cuando el usuario no ingrese un
# entero positivo, se repita hasta que sea cierto

while True:
    #Entrada
    numero = int(input("Ingrese un número entero positivo: "))
    # Iniciamos variables para usar en la iteración while, y el 
    # factorial que vamos a calcular
    factorial = 1
    #Verifica si numero es un entero positivo
    if numero > 0:
        # Inciamos esta interación, para que i aumente de 1 en 1, multiplicandose por 
        # factorial, guardandose en la misma variable, hasta que i sea el numero
        # ingresado
        # Descubrimos que el for, funciona hasta que el i sea menor estricto 
        # que el número!
        for i in range(1,numero + 1):
            factorial *= i
        #Salida
        print(f"El factorial del numero ingresado es {factorial}")
        break
    else:
        print("Ingrese un número válido")