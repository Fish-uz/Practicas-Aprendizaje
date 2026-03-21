#Elemntos Basicos
#Ejercicio #2 Video
'''
Hacer un programa para intercambiar el valor de 2 variables
Ejemplo a = 10       a = 5
        b = 5        b = 10
a = input("Digite un numero para a: ")
b = input("Digite un numero para b: ")
c = b
d = a

print("A es:",c,"y B es:",d)
'''
#Enunciado: Escribe un programa que pida al usuario un número entero positivo n y calcule la suma de todos los
#números pares desde 1 hasta n.
#Objetivo: Practicar bucles for, condicionales y acumuladores.
'''
n = int(input("Digite un numero para calcular la suma de todos los numeros pares desde 1: "))

cantidad_pares = 0
suma_pares = 0

for i in range(1, n + 1):
    if i % 2== 0:
        cantidad_pares +=1
        suma_pares +=i

print("Cantidad de numeros pares: ", cantidad_pares)
print("Suma de numeros pares: ", suma_pares)
'''
# Verificador de contraseña
# Enunciado: Escribe un programa que pida al usuario una contraseña. Si la contraseña es 
# "python123", muestra "Acceso concedido". Si no, muestra "Acceso denegado".
# Objetivo: Practicar condicionales if, comparación de cadenas y entrada de texto.
'''
creaclave = input("Digite una contraseña nueva: ")
clave = input("Ingrese su contraeña: ")

if clave == creaclave:
    print("Acceso Aprobado")

else: print("Acceso Denegado")
'''

#Hacer un programa para ingresar el radio de un circulo y se reporte su area y la longitud
# de la cincunferencia

import math

radio = float(input("radio -> "))

area = math.pi * radio**2
longitud = 2 + math.pi + radio

print(f"El area es: {area:.2f}")
print(f"La longitud de la circunferencia es: {longitud:.2f}")