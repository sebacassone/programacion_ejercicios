"""
Listas
Son un tipo de dato, utilizados. Tienen una particularidad que los 
diferencia de otros lenguajes

Objeto: cada dato que declaramos es un objeto , poseen 
*características* y *acciones propias*, definidas por la clase a la que
pertenecen.

Ejemplo:
Clase: Persona.
Objetos: Diego, Mario, Juan.

*Cada acciones propias de cada clase, se le denomina métodos*

Métodos: se invocan desde un dato, o una variable que contenga un dato
utilizando un punto (.)
- cada tipo de dato (clase) tiene ciertos métodos asociados a él, y no
puede utilizar otros

dato.upper() #a un dato tipo string la transforma a mayúscula
             #ingresar un dato a una base de datos sin combinaciones

y = 2.5
y.is_integer() # y es entero o no, e imprime si es o no con un booleano
False


Listas (finalmente)
Clase de objetos en Python que se utiliza para almacenar varios
valores simultáneamente.

Se representan por "[]" y cada uno de sus elementos se separan por una
","

valores = [1,2,3,4]

Estas listas pueden almacenar números, texto o combinaciones de tipos
de datos en ellas.

Una lista puede tener dentro de si otra lista

lista_indefinida = [1, 1.2, ["hola", "adios"]]

Indexación
Normalmente, cuando se desea manipular la lista, esto se hace elemento
a elemento

Es posible acceder a los elementos dentro de una lista directamente

Se encuentran indexados mediante posiciones

Para acceder a un elemento en particular se debe indicar la posición
dentro de la lista

la indexación parte desde la posición 0 hasta el largo de la lista -1

índice se refiere a la posición, elemento al contenido.

La lista de derecha a izquieda parte del 0, desde derecha a izquierda
parte desde el -1, las posiciones deben ser números enteros.

Operaciones sobre listas
Cuatro operaciones básicas que debemos conocer:
Consultar: Obtener el valor de un elemento de la lista


Agregar: Insertar un nuevo valor a la lista
lista.append(Objeto) #Agregar un elemento al final de la lista

Actualizar: Cambiar un elemento de la lista
lista[2] = False #Cambiar elemento en la posición 2 por False.

Borrrar: eliminar elemento de la lista
lista.pop(1) #eliminar elemento de la posición 1, si no se pone
             #nada, elimina el ultimo elemento

"""

#Ejemplo 1

#Entrada
lista = [100, 101, 102, 103, 104, 105, 106, 107, 108]

#Procesamiento
largo = len(lista)

for i in range(largo):
    lista[i] = lista[i]**2

#Salida
print(lista)