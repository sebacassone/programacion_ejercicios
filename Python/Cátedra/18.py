#Desclaramos variables en 0
array = [0,0,0]
j = 0

#Preguntamos al usuario los 3 números a ordenar
for i in range(3):
    j += 1
    array[i] = int(input("Ingrese un numero: "))


#Ordena los números
array.sort()

#Salida
print(f"el número mayor es {array[2]}")