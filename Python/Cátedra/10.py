#Inicializamos las variables y la lista

# Este programa ordena los números de menor a mayor, el error estaba en range(n) y range(n-1)
# Inicializo variables
A = [0,0,0,0]
n = len(A)
j = 0

#Se guarda en la lista cada numero [x]
for i in range (4):
    j += 1
    A[i] = float(input("Ingrese un numero " + str(j) + ": "))

    
#Procedimiento
for i in range (n): #Desde 0 hasta 4
    for j in range (n - 1): #Desde 0 hasta 3
        if A[j] > A[j + 1]: #Si el elemento j=1 es mayor que el siguiente
            temp = A[j] #El elemento mayor se guarda en temp
            A[j] = A[j + 1] #El elemento menor y siguiente, se guarda en el elemento mayor
            A[j + 1] = temp  #El elemento mayor se guarda en el siguiente

#Salida
print(f"La lista A es {A}") #Imprime lista ordenada
