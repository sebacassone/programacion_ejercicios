numero = int(input("Ingrese un número entero: "))

if numero % 2 == 0:
    maximo = 2

if numero % 4 == 0:
    maximo = 3

if numero % 6 == 0:
    maximo = 6

if numero % 8 == 0:
    maximo = 8

if numero % 10 == 0:
    maximo = 10

print("El máximo divisor es:", maximo)