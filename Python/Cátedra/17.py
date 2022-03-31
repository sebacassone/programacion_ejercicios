#Entrada
numero = int(input("Ingrese un número límite: "))
#Procesamiento
i = 1
resultado = 0

#Condición no debe ser una tautología
while i < numero:
    resultado += i
    i += 1

#Salida
print (resultado)