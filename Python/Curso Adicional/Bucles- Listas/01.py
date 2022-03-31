#Array listas

#Se utiliza en bases de datos

array = ["futbol", "pc", 18.6, 18, [6,7,10,4], True, False]

#Imrpimir el array desde 0: hasta la posición al lado del :
print(array[0:])


#Contar cantidad de datos
print(len(array))


#agregar dato al final de la lista
array.append(66)
array.append(True)

print(array)

#Insertar dato según posición 1= índice, 88= dato
array.insert(1,88)

#Insertar varios datos en el array al final de este mismo
array.extend([1, 88, True, 100])


#Concatenar listas

array2 = [200,250,"hola"]

array3 = array + array2

print(array3)


print(array)

#Buscar datos

print("pc" in array)

#Buscar número de índice

print(array.index("pc"))

#Buscar repeticiones en una lista

print(array.count("pc"))


#Cambiar posición de los datos


array.reverse()

print(array)


#Eliminar datos del array

array.remove(True)

print(array)

array.clear()

print(array)


#Ordenar datos ascendete

array4=[1,2,8,-11,5]

array4.sort()

print(array4)

#Ordenar datos descendente

array4.sort(reverse=True)
print(array4)
