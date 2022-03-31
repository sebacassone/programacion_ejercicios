#Entrada
#Este programa ordena 4 números de menor a mayor
array = []
numero1 = float(input("Ingrese un número: "))
numero2 = float(input("Ingrese un número: "))
numero3 = float(input("Ingrese un número: "))
numero4 = float(input("Ingrese un número: "))
array.extend([numero1, numero2, numero3, numero4])
array.sort()
print(f"La lista A de numeros es {array[0]} < {array[1]} < {array[2]} < {array[3]}") #Imprime lista ordenada
