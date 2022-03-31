#Entrada
numero_1 = float(input("Ingrese un primer número: "))
numero_2 = float(input("Ingrese un segundo número: "))
numero_3 = float(input("Ingrese un tercer número: "))

#Procedimiento
numero_máximo = numero_1

if numero_máximo <= numero_2:
    numero_máximo = numero_2

if numero_máximo <= numero_3:
    numero_máximo = numero_3

#Salida
print(f"El número máximo es {numero_máximo}")
