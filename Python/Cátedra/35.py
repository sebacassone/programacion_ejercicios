"""
Ejercicio 6 de la guía Nº3:
Pide un número entero positivo y encuentra la
huella digital de la weá
"""

numero = int(input("Ingrese un número: "))
#Se inician variables para el primer bucle
i = 1
contador = 0
#Se inician variables para el segundo bucle
j = 0
acomulador = 0

while True:
    tmp = numero / i
    contador += 1
    i *= 10
    if 0 < int(tmp) and int(tmp) < 10:
        contador -= 1  
        tmp = contador      
        break

print(contador)

while j < contador:
    if j == 0:
        largo = 10 ** tmp
        temp = numero / largo
        y = int(temp)
        acomulador = y + acomulador
        temp = numero % largo
        tmp = tmp - 1
    else:
        largo = 10 ** tmp
        z = temp / largo
        y = int(z)
        temp %= largo
        acomulador = y + acomulador
        tmp = tmp - 1
        
print(acomulador)

