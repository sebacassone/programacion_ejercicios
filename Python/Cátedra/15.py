'''
Resumen programa:
    Este programa solicita una fecha, indica si esa fecha efectivamente existe diferenciando los meses que tienen
    28, 30 y 31 días, y determina si un año es bisiesto o no.
'''
def data():
    day = int(input("Ingrese un día: "))
    mouth = int(input("Ingrese un mes: "))
    year = int(input("Ingrese un año: "))
    return day, mouth, year

def days(a, b, c):
    day = b % 2
    if (b <= 7 and b % 2 != 0) or (b > 7 and b % 2 == 0):
        if a <= 31:
            day = "La fecha existe, y el mes tiene 31 días"
    elif (b <= 7 and b % 2 == 0 and b != 2) or (b > 7 and b % 2 != 0):
        if a <= 30:
            day = "La fecha existe, y el mes tiene 30 días"
    elif b == 2:
        if a <= 28:
            day = "La fecha existe y el mes tiene 28 días"
        elif a == 29 and c % 4 == 0:
            day = "La fecha existe y el año es bisciesto"
    else:
        day = False
    return day

def mouth(b):
    if b < 1 and b > 12:
        mouth = False
        return mouth

def main():
    a,b,c = data()
    exist = mouth(b)
    final = days(a,b,c)
    if exist == False or final == False:
        print("La fecha ingresada no existe")
    else:
        print(final)

main()
