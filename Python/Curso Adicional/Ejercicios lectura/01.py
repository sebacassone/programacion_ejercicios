#Ejercicio 1

#Solicita un número
numero = int(input("elige un número: "))

#Procesamiento
#Inicializa la variable iteradora
i = 1
#inicializa la variable acumuladora
suma = 0

while i <= numero:
    #Calcular los resultados parciales
    suma += ((i**2 + 2) / (i**3 + 6 * i))
    #Incrementar el iterador
    i += 1

#salida 
print(f"La sumatoria de la formula planteada es {suma}")