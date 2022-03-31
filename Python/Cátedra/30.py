'''
Este programa solicita un número entero positivo, y entrega como resultado el número pero invertido.
'''


#El while nos servirá para que el programa no explote, e ingrese un número válido
while True:
    #Entrada
    numero = int(input("Ingrese un número entero positivo: "))

    if numero > 0:
        #Iniciamos variables que se usaran más adelante
        #Procedimiento
        i = 1
        j = 0
        contador = 0
        acomulador = 0


        #Se inicia un bucle, que cuenta la cantidad de cifras que tiene número
        #Primero lo divide por 1, y su el numero como entero es mayor que 0 y menor que 10
        #Se sale del bucle, aumentando el contador en 1
        #Si es mayor a 10, aumenta el i en 10, por lo que lo divide por 10, aumenta el contador en 1
        #Y si el numero como entero esta entre 0 y 10 entonces tiene dos cifras
        while (True):
            decimales = numero / i
            contador += 1
            i *= 10
            if int(decimales) <= 10 and int(decimales) > 0:
                break
        
        #Se asigna numero a temp, para poder trabajarlo sin modificar el valor de numero
        temp = numero
        #Donde en un número de 4 cifras como 1745 el contador será igual a 4, se le resta uno para
        #Que sea 10**3
        contador = contador - 1
        #Se asigna contador a tmp, para modificar el contador sin modificar el original
        tmp = contador

        #Se se pone la condición hasta que el total de cifras hayan pasado por el bucle que son 4
        #Por lo que parte desde el 0
        while j <= contador:
            #En un caso particular empezamos cuando j es igual a 0
            #Cuando parte a dividir por 10 al numero del contador
            #Se guarda el entero en la variable y, para acomularlo (y aqui viene el cambio de unidad)
            #Donde el contador > j, j == 0, entonces la primera cifra del número ej: 1744, el 1 se guarda en la unidad
            #El número se divide en el largo y se trabajará con el resto más adelante
            #El tmp se le resta uno para que la potencia de 10 sea menor
            if j == 0:
                largo = 10 ** tmp
                temp = numero / largo
                y = int(temp)
                acomulador = y * 10 ** j + acomulador
                temp = numero % largo
                tmp = tmp - 1
            
            #En los demás casos cuando j != 0, hace lo mismo pero con una salvedad
            #cuando temp se divide por el largo, se guarda en una variable z, para que al dividir
            #con el modulo, el resto sea entero, ya que la variable temp siempre es entero.
            #y el acomulador hace lo mismo siguiendo la lógica de 1745 = 1 * 1000 + 7 * 100 + 4 * 10 + 5 * 1
            #y para darlo vuelta 5471 = 5 * 1000 + 4 * 100 + 7 * 10 + 1 * 1
            else:
                largo = 10 ** tmp
                z = temp / largo
                y = int(z)
                temp %= largo
                acomulador = y * 10 ** j + acomulador
                tmp = tmp - 1
            j += 1
        
        #Salida
        print(acomulador)
        break   
    else:
        print("Ingrese un número válido!!!!!!")