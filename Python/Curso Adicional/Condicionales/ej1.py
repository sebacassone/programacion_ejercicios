#Ejercicio 1 if
a = int(input("Ingrese un primer número: "))
b = int(input("Ingrese un segundo número: "))

if a%2 == 0 and b%2 == 0:
    print(f"Los números {a} y {b} son números pares")
elif a%2 == 0 or b%2 == 0:
    if (a%2 == 0):
        print(f"el número {a} es par y {b} es impar")
    else: 
        print(f"el número {a} es impar y {b} es par")
else:
    print(f"Los números {a} y {b} son impares")
