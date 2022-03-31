'''
Este programa solicita un número al usuario, siendo este un número positivo
e indica si es primo o no
'''
#Entrada
numero = int(input("Ingrese un número: "))
contador = 0 #Inicio un contador, para saber las cantidades de veces que el numero es dividido
#Si el numero es divido solo dos veces, quiere decir que los divisores es 1 y por si mismo.

#Procedimiento
for i in range(1, numero + 1): #Ocupamos la variable del for "i", para hacer las divisiones hasta que sea igual al numero ingresado
    #En este bucle dividimos el numero por i, y si el resto es igual a 0 es divisor del numero
    #Por lo que se ocupa un contador para saber la cantidad de veces que se divide
    if numero % i == 0: 
        contador += 1 

if contador == 2:
    #Si se divide solo dos veces es primo
    tipo = "primo"

elif contador == 1:
    #Si se divide solo una vez, es el uno, por lo que es sui generis
    tipo = "sui generis"

else:
    #Si se divide más de 2 veces es un número compuesto
    tipo = "compuesto"

#Salida
print("El número es", tipo)