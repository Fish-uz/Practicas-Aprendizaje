"""
Ejercicio 3:
Escriba un programa donde cree una lista con los siguientes personajes del Señor de los Anillos

Nombre: Aragorn             |   Nombre: Gandalf    |   Nombre: Legolas                 
Clase: Guerrero             |   Clase: Mago        |   Clase: Arquero
Raza: Dunadan del Norte     |   Raza: Istar        |   Raza: Elfo Sindar
"""

personajes = [] # Creando lista vacia

p = {"Nombre":"Arangon","Clase":"Guerrro","Raza":"Dunadan del norte"}
personajes.append(p) #Agregamos a la lista el personaje

p = {"Nombre":"Gandalf","Clase":"Mago","Raza":"Istar"}
personajes.append(p) #Agregamos a la lista el personaje

p = {"Nombre":"Legolas","Clase":"Arquero","Raza":"Elfo Sindar"}
personajes.append(p) #Agregamos a la lista el personaje

print(personajes)