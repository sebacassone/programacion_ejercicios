'''
Ejercicio 2 de la guía Nº3 interaciones:
    exponenciación de dos números enteros como una
    sucesión de multiplicaciones.
'''

#Entrada
numero1 = int(input("Ingrese un primer número: "))
numero2 = int(input("Ingrese un segundo número: "))
acomulador = 1

#Procedimiento
for i in range (numero2):
    acomulador = numero1 * acomulador

#Salida
print(acomulador)
