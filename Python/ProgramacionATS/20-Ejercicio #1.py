#Hacer un porgrama que pida 2 numeros y se de cuenta cual de ellos es par, o si ambos lo son
'''
num1 = int(input("Digite un numero: "))
num2 = int(input("Digite otro numero: "))

if num1%2==0 and num2%2==0:
    print("Ambos numeros son pares")

elif num1%2==0 and num2%2!=0:
    print(f"{num1} es par")

elif num1%2!=0 and num2%2==0:
    print(f"{num2} es par")

else:
    print("Ambos numeros son impares")
'''

#Ejercicio #2
#Hacer un programa que pida 3 numeros y determine cual es el mayor ej 3>2>1
'''
print("Digite 3 numero para determinar cual es mayor")
num1 = int(input("Digite el primer numero: "))
num2 = int(input("Digite el segundo numero: "))
num3 = int(input("Digite el tercer numero: "))

if num1>=num2 and num1>=num3:
    print(f"El primer numero es mayor: {num1}")

elif num2>=num1 and num2>=num3:
    print(f"El segundo numero es mayor: {num2}")

elif num3>=num1 and num3>=num2:
    print(f"El tercer numero es mayor: {num3}")

else: 
    print(f"Los 3 numeros son iguales")
    '''

