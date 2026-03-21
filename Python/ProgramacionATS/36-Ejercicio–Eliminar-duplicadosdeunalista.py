"""# Ejercicio 1 – Eliminar duplicados de una lista

lista = [1,2,3,"Frank",2,2,1,"Frank"]

#Convertira en conjunto para eliminar los elementos repetidos

conjunto = set(lista)

lista = list(conjunto)

print(conjunto)
"""

#Ejercico 2 - Escriba un programa que tenga dos listas y que. a continuacion,
# cree las siguientes listas(en las que no debe haber repeticiones):
# - Lista de palabras que aparecen en las dos listas *
# - Lista de palabras que aparecen en la primera lista, pero no en la segunda
# - Lista de palabras que aparecen en la segunda lista, pero no en la primera
# - Lista de palabras que aparecen en ambas listas *

print("\nListados: \n")

print("Lista 1:")
lista1 = [22,4,1996,"Frank", "Fran","Kiony","Paola","Maria","Frank"]
print(lista1)

print("\nLista 2: ")
lista2 = [22,4,1996,"Frank","Fran","Kiony","Paola","Maximiliano","Paola"]
print(lista2)

lista3 = lista1 + lista2
print("\nLista de palabras que aparecen en las dos listas: ")
print(lista3)

lista4 = (set(lista1)) - (set(lista2))
print("\nListado eliminando duplicados: ")
print(lista4)