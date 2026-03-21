#Ejercicio #3
#Hacer un programa que pida un caracter e indique si es una vocal o no (a-e-i-o-u)
'''
letra = (input("Escriba un caracter, para determinar si es una Vocal: ")).lower()

if letra in "aeiou":
    print("El caracter si es una vocal :)")
    
else:
    print("El caracter no es una vocal :(")
'''

#Objetivo: Escribe un programa que le pida al usuario un solo carácter y determine si es:
#Una vocal , Una consonante , Un número, Un símbolo o carácter especial

caracter = input("Digite un caracter: ")

if len(caracter) !=1:
    print("ERROR: Debe digitar solo 1 caracter.")
else:
    caracter = caracter.lower()
    vocales = ['a', 'e', 'i', 'o', 'u']
    consonantes = ['b','c','d','f','g','h','j','k','l','m','n','ñ','p','q','r','s','t','v','w','x','y','z']

if caracter.isalpha():
    if caracter in vocales:
        print ("Es una letra vocal")
    else: 
        print("Es una letra consonante")

elif caracter.isdigit():
    print("Es un numero")
else:
    print("Es un simbolo o caracter especial")