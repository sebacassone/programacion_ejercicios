'''
Ejercicio 1 de la guía 3. Multiplicación de dos enteros con sucesión de sumas.
'''

#Entrada
numero1 = int(input("Ingrese un número entero: "))
numero2 = int(input("Ingrese un número entero: "))
acomulador = 0

#Procedimiento
for i in range (numero2):
    acomulador += numero1 

#Salida
print(acomulador)
