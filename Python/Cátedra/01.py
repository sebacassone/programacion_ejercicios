#Ejercicio Propuesto 2
#Primera forma de hacerlo
a = 1
b = 2
b = a
a = 2 * b

print(f"el valor de a es {a} y el valor de b es {b}")

#Segunda forma de hacerlo
a = 1
b = 2
a , b = b , a

print(f"el valor de a es {a} y el valor de b es {b}")
