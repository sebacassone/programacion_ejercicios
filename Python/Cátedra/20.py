precio = 30000

while(True):
    km_auto = float(input("Ingrese los kilometros del auto a escoger: "))
    if km_auto >= 0:
        if km_auto <= 300:
            precio += (precio * (81 / 100))

        elif km_auto > 300 and km_auto <= 1000:
            extra = km_auto - 300
            precio += 1500 * extra
            precio += (precio * (81 / 100))

        else:
            extra = km_auto - 1000
            precio += 1500 * extra
            precio += (precio * (81 / 100))

        print(f"El auto cuesta {precio}")
        break

    else:
        print("Ingrese un número válido para los kilómetros")