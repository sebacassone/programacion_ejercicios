#Ejercicio 2
#Solicita dos números
numero1 = int(input("ingrese un primero número: "))
numero2 = int(input("ingrese un segundo número: "))

#Procesamiento
#Se inicializa la variable iteradora
i = 1
#Se inicializa la variable acumuladora
suma = 0

while i <= numero2:
    suma = suma + numero1
    i += 1

print(suma)
