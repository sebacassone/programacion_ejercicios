def entrada():
    rut = list(input("Ingrese su rut, separado por puntos y guión: "))
    while rut.count(".") != 0 or rut.count("-") != 0:
        if rut.count(".") != 0:
            rut.remove(".")
        if rut.count("-") != 0:
            rut.remove("-")
    for i in range(len(rut) - 1):
        rut[i] = int(rut[i])
    return rut


def invertir(R, n):
    """
    Esta función se encarga de invertir un arreglo.
    La función tiene como entrada R siendo de tipo list.
    Tiene como salida R siendo de tipo list.
    """
    for i in range(len(R)//2):
        temp = R[i]
        R[i] = R[n - i - 1]
        R[n - i - 1] = temp
    return R


def operaciones(I, n):
    """
    Esta función se encarga de hacer todas las operaciones necesarias
    para obtener el número verificador.
    Esta función tiene como entrada I siendo de tipo list y n siendo de
    tipo int.
    Tiene como salida acum siendo de tipo int.
    """
    serie_de_numeros = [2, 3, 4, 5, 6, 7]
    i = 0
    acum = 0
    # Se igualan la cantidad de números de las listas
    while n > len(serie_de_numeros):
        if i == len(serie_de_numeros):
            i = 0
        serie_de_numeros.append(serie_de_numeros[i])
        i += 1
    # Se procede a multiplicar cada número
    for j in range(n):
        I[j] *= serie_de_numeros[j]
        acum += I[j]

    # Se divide la suma
    primer_resultado = acum // 11
    primer_resultado *= 11

    # Se resta
    acum = valorabsoluto(acum - primer_resultado)

    # Se vuelve a restar
    acum = 11 - acum

    return acum


def valorabsoluto(numero):
    if numero < 0:
        return numero * -1
    else:
        return numero


def verificador(codigo, numero):
    if codigo == 11:
        codigo = 0
    elif codigo == 10:
        codigo = "k"
    if codigo == numero:
        return True
    else:
        return False


R = entrada()
if R[-1] == "k" or R[-1] == "K":
    numero = R[-1]
else:
    numero = int(R[-1])
R.pop(-1)
n = len(R)
R = invertir(R, n)
codigo = operaciones(R, n)
if verificador(codigo, numero):
    print("El código verificador es correcto")
else:
    print("El código verificador es incorrecto")
