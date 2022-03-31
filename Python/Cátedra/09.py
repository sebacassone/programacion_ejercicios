#Entrada
#Este programa ordena 4 números de menor a mayor
array = []
numero1 = float(input("Ingrese un número: "))
numero2 = float(input("Ingrese un número: "))
numero3 = float(input("Ingrese un número: "))
numero4 = float(input("Ingrese un número: "))
array.extend([numero1, numero2, numero3, numero4])
n = len(array)

#Procedimiento
for i in range (n): #Desde 0 hasta 4
    for j in range (n - 1): #Desde 0 hasta 3
        if array[j] > array[j + 1]: #Si el elemento j=1 es mayor que el siguiente
            temp = array[j] #El elemento mayor se guarda en temp
            array[j] = array[j + 1] #El elemento menor y siguiente, se guarda en el elemento mayor
            array[j + 1] = temp  #El elemento mayor se guarda en el siguiente

#Salida
print(f"La lista A de numeros es {array[0]} < {array[1]} < {array[2]} < {array[3]}") #Imprime lista ordenada
