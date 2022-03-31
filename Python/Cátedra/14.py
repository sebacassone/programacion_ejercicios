'''
Resumen programa:
    Este programa solicita un número y la medida a la que se quiere convertir la medida
'''
#Entrada
def datos():
    medida = float(input("Ingrese la magnitud de la medida: "))
    opcion = int(input("¿Cúal es la medida?\n 1.Metro\n 2.Kilometro\n 3.Centímetro\n 4.Milímetro\n 5.Milla\n 6.Legua\n 7.Pulgada\n 8.Yarda\n 9.Año Luz\nElija una opción: "))
    unidad = int(input("¿A que unidad lo quiere convertir?\n 1.Metro\n 2.Kilometro\n 3.Centímetro\n 4.Milímetro\n 5.Milla\n 6.Legua\n 7.Pulgada\n 8.Yarda\n 9.Año Luz\nElija una opción: "))
    return medida, opcion, unidad

#Procedimiento
def metros_a_unidad(transformada, unidad):
    print(transformada)
    if unidad == 2:
        transformada *= 0.001
    elif unidad == 3:
        transformada *= 100
    elif unidad == 4:
        transformada *= 1000
    elif unidad == 5:
        transformada *= 0.00062137
    elif unidad == 6:
        transformada *= 0.00020712330174426998
    elif unidad == 7:
        transformada *= 39.3701
    elif unidad == 8:
        transformada *= 1.0936
    elif unidad == 9:
        transformada *= 1.0570234105227 * 10**(-16)
    return transformada

def unidad_a_metros(medida, opcion):
    if opcion == 2:
        medida /= 0.001
    elif opcion == 3:
        medida /= 100
    elif opcion == 4: 
        medida /= 1000
    elif opcion == 5: 
        medida /= 0.00062137
    elif opcion == 6: 
        medida /= 0.00020712330174426998
    elif opcion == 7:
        medida /= 39.3701
    elif opcion == 8:
        medida /= 1.0936
    elif opcion == 9:
        medida /= 1.0570234105227 * 10**(-16)
    return medida
    
#Función principal
def main():
    a,b,c = datos()
    transformada = unidad_a_metros(a,b)
    print(f"La unidad transformada a metros es {transformada}")
    final = metros_a_unidad(transformada,c)
    print(f"La unidad final es {final}")

main()