array = []
n = int(input("De cuanto sera el arreglo que quiere usar: "))

for i in range (n):
    temp = float(input("Ingrese un número: "))
    array.append(temp)

array.sort()
diferencia = array[-1] - array [0]

print(f"La diferencia entre el mayor y menor numero es {diferencia}")
