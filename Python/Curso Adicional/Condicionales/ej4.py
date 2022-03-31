#Ejercicio 4
saldo = 2000
ingresa = 0

print("Bienvenido al cajero del Banco")

option = int(input("Ingrese una opción\n 1. Ingreso de dinero\n 2. Retiro de dinero\n 3. Mostrar dinero\n 4. Salir\nOpción: "))

if option == 1:
    ingresa = int(input("Ingrese cuanto desea ingresar: "))
    saldo += ingresa
    print(f"Su saldo actual es {saldo}")
elif option == 2:
    ingresa = int(input("Ingrese cuanto desea ingresar: "))
    if saldo >= ingresa:
        saldo -= ingresa
        print(f"Su saldo actual es {saldo}")
    else:
        print(f"Saldo insuficiente")
elif option == 3:
    print(f"Su saldo es: {saldo}")
elif option == 4:
    print("Saliendo...")
else:
    print("La opción ingresada no es valida, intente de nuevo")
