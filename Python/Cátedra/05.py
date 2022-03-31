while (True):
    #Entrada
    repeticiones = int(input("Ingrese el número de repeticiones: "))
    #Procedimiento
    if repeticiones >= 0:
        for i in range(repeticiones):
            resultado = 9 * i
            #Salida
            print(f"9 x {i} -> {resultado}")
        break
    else:
        #Salida
        print("Ingrese un número válido para crear la tabla de multiplicación") 