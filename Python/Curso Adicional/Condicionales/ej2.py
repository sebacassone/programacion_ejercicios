#ejercicio 2 if

a = float(input("Ingrese un primer número: "))
b = float(input("Ingrese un segundo número: "))
c = float(input("Ingrese un tercer número: "))

if (a != b and b != c and a != c):
    if (a > b and c < b) or (a > c and b < c):
        print(f"el número {a} es mayor que {b} y {c}")
    elif (b > a and a > c) or (b > c and c > a):
        print(f"el número {b} es mayor que {a} y {c}")
    else:
        print(f"el número {c} es mayor que {a} y {b}")
elif (a == b) and a != c:
    if (a > c):
        print(f"Los números {a} y {b} son mayores a {c}")
    else:
        print(f"Los números {a} y {b} son menores a {c}")
elif (a == c) and a != b:
    if (a > b):
        print(f"Los números {a} y {c} son mayores a {b}")
    else:
        print(f"Los números {a} y {c} son menores a {b}")
elif (b == c) and b != a:
    if (b > a):
        print(f"Los números {b} y {c} son mayores a {a}")
    else:
        print(f"Los números {b} y {c} son menores a {a}")
else:
    print(f"Los tres números son iguales")
