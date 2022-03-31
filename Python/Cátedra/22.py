'''
Resumen:
    Este programa calcula la hipotenusa usando el teorema de pitagoras
'''

#Entrada, recibimos  como entrada los dos catetos
cateto1 = float(input("Ingrese un número positivo para el primer cateto: "))
cateto2 = float(input("Ingrese un número positivo para el segundo cateto: "))

#Procedimiento
hipotenusa = (cateto1 ** 2 + cateto2 ** 2) ** 0.5

print("El valor absoluto de la hipotenusa es", hipotenusa)