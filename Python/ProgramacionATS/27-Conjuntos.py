#Conjuntos
# Son grupo de elementos desordenados, pero no pueden haber duplicados

conjunto = set() #para conjuntos vacios

conjunto = {1,2,3,"hola", 4.56}

conjunto.add(5)
conjunto.add("Adios")
conjunto.add("a")

print(conjunto)

a = {1,2,3}
b = {3,4,5}

c = a | b # Union de conjuntos 

d = a & b # intercencion de conjuntos

print(c)
print(d)