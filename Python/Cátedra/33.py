'''
Ejercicio 3 de la guía Nº3
Utilizando la interación while, recibe como entrada
dos números de inicio y final e informa cuantos números de ellos
son múltiplos de 3 o 5

según entendi de esto, que da un intervalo de números y a apartir de ahí
te dice la cantiad de números que están en ese intervalo que son
múltiplos de 3 o 5.
'''

inicio = int(input("Ingrese un número de inicio: "))
final = int(input("Ingrese un número de final: "))
acomulador = 0
contador = 0
i = 0

rango = abs(final - inicio)

while i <= rango:
    acomulador = inicio + i
    print(acomulador)
    if acomulador % 3 == 0 or acomulador % 5 == 0:
        contador += 1
    i += 1

print("Existen", contador,"números que son múltiplos de 3 o 5")