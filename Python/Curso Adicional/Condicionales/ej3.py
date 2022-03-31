#ejercicio 3

a = input("Ingrese un primer nombre: ")
b = input("Ingrese un segundo nombre: ")

if a[0] == b[0] or a[-1] == b[-1]:
    print("Los nombres coinciden en la primera o segunda letra ")
else:
    print("Los nombres no coinciden en la primera ni segunda letra")
