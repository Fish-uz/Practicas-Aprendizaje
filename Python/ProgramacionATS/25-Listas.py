#Listas
'''
lista = ["Lunes","Martes","Miercoles","Jueves","Viernes",60, 5.67,[1,2,3], True]

print(lista[3:])

#Lista explicacion NQ26
lista = ["Lunes","Martes","Miercoles","Jueves","Viernes",60, 5.67,[1,2,3], True]

print(len(lista))
'''

lista = [1,2,4,5]

lista.insert(2,3)

print("Lista insert",lista)

lista = [1,2,4,5]

lista.extend([6,7,8])

print("Lista extend",lista)

lista1 = [1,2,3,4,5]
lista2 = [6,7,8]

lista = lista1 + lista2

print("Suma de Listas",lista)

lista = [1,2,4,5,"Frank"]

print("Lista true o false")
print("frank" in lista)