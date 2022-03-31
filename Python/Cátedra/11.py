#Este programa ordena los números de menor a mayor, el error estaba en range(n) y range(n-1)

#Inicializamos las variables y la lista
A = [5, 4, 6, 3]
n = len(A)
i = 0

#Procedimiento
while i <= n: #Desde 0 hasta 4
    j = 0
    while j < n - 1: #Desde 0 hasta 3
        if A[j] > A[j + 1]: #Si el elemento j=0 es mayor que el siguiente
            temp = A[j] #El elemento mayor se guarda en temp
            A[j] = A[j + 1] #El elemento menor y siguiente, se guarda en el elemento mayor
            A[j + 1] = temp  #El elemento mayor se guarda en el siguiente  
        j += 1
    i += 1

#Salida
print(f"La lista A es {A}") #Imprime lista ordenada