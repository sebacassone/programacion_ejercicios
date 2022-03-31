'''
Ejercicio 4 de la guía Nº3
Utilizando la interación while, recibe como entrada
dos números de inicio y final e informa cuantos números de ellos
son múltiplos de 2 y 7

según entendi de esto, que da un intervalo de números y a apartir de ahí
te dice cuales son los números que están en ese intervalo que son
múltiplos de 2 y 7.
'''

inicio = int(input("Ingrese un número de inicio: "))
final = int(input("Ingrese un número de final: "))
acomulador = 0
contador = 0
i = 0

rango = abs(final - inicio)

print("Los números que son múltiplos de 2 y 7 son: ", end="")

while i <= rango:
    acomulador = inicio + i
    if acomulador % 2 == 0 and acomulador % 7 == 0:
        print(acomulador," ", end="")
    i += 1
