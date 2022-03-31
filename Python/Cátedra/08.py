#Entrada
numero1 = float(input("Ingrese un número: "))
numero2 = float(input("Ingrese un número: "))
numero3 = float(input("Ingrese un número: "))

#Procedimiento
if numero1 > numero2 > numero3:
    print(f"{numero1} > {numero2} > {numero3}")
elif numero1 > numero3 > numero2:
    print(f"{numero1} > {numero3} > {numero2}")
elif numero3 > numero1 > numero2:
    print(f"{numero3} > {numero1} > {numero2}")
elif numero3 > numero2 > numero1:
    print(f"{numero3} > {numero2} > {numero1}")
elif numero2 > numero1 > numero3:
    print(f"{numero2} > {numero1} > {numero3}")
else:
    print(f"{numero2} > {numero3} > {numero1}")
