#Ejercicio while
import math

a = int(input("Ingrese un número: "))

while a < 0:
    print("Porfavor Ingrese un número positivo")
    a = int(input("Ingrese un número positivo: "))
print(f"El resultado de la raíz cuadrada real es: {math.sqrt(a)}")
