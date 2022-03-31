'''
Resumen del programa:
    Es un programa destinado para la policia (pacos), que según la distancia del sitio de algún suceso (X_sub_i, Y_sub_i), identifica entre 3 moviles cual se
    encuentra mas cerca del sitio identificandose cada auto o una cantidad n de autos como x_m_n, y_m_n 
'''
#Entrada de datos para  el sitio de sucesos y los 3 moviles
x_sub_i = float(input("Ingrese la coordenada x del sitio de suceso: "))
y_sub_i = float(input("Ingrese la coordenada y del sitio de suceso: "))
x_sub_m1 = float(input("Ingrese la coordenada x del primer movil: "))
y_sub_m1 = float(input("Ingrese la coordenada y del primer movil: "))
x_sub_m2 = float(input("Ingrese la coordenada x del segundo movil: "))
y_sub_m2 = float(input("Ingrese la coordenada y del segundo movil: "))
x_sub_m3 = float(input("Ingrese la coordenada x del tercer movil: "))
y_sub_m3 = float(input("Ingrese la coordenada y del tercer movil: "))

#Procesamiento de datos
#Ocupamos la formula de distancia que se obtiene del teorema de pitágoras
distancia1 = ((x_sub_i - x_sub_m1)**2 + (y_sub_i - y_sub_m1)**2)**(1/2)
distancia2 = ((x_sub_i - x_sub_m2)**2 + (y_sub_i - y_sub_m2)**2)**(1/2)
distancia3 = ((x_sub_i - x_sub_m3)**2 + (y_sub_i - y_sub_m3)**2)**(1/2)

#Comenzamos a comparar con condicionales las tres distancias para determinar cual es la que está mas cerca del hecho de sucesos
if distancia1 < distancia2 < distancia3:
    print("El primer movil está mas cerca del hecho de sucesos")
elif distancia1 < distancia3 < distancia2:
    print("El primer movil está mas cerca del hecho de sucesos")
elif distancia2 < distancia3 < distancia1:
    print("El segundo movil está mas cerca del hecho de sucesos")
elif distancia2 < distancia1 < distancia3:
    print("El segundo movil está mas cerca del hecho de sucesos")
elif distancia3 < distancia2 < distancia1:
    print("El tercer movil está mas cerca del hecho de sucesos")
elif distancia3 < distancia1 < distancia2:
    print("El tercer movil está mas cerca del hecho de sucesos")
