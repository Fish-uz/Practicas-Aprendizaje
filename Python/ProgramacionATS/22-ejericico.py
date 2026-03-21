# Construir un programa que simule el funcionamiento de una calculadora que puede realizar 
# las cuatro operaciones aritmeticas basicas (suma, resta, multiplicacion y division). 
# El usuario debe especificar la operacion con el primer caracter del nombre en la operacion

#S,s = Suma
#R.r = resta
#P,p, M,m = Multiplicacion
#D,d = Division

print("\nBienvenido a la Calculadora\n")

num1 = int(input("Digite un numero: "))
num2 = int(input("Digite un numero: "))
print("")
operacion = input("Si desea: \nSumar pulse S \nRestar pulse R \nMultiplicar pulse M o P \nDividir pulse D\n").lower()

if operacion == "s":
    resultado = num1 + num2
    print ("\nEl resultado de la suma es: ", resultado)

elif operacion == "r":
    resultado = num1 - num2
    print("\nEl resultado de la resta es: ",resultado)

elif operacion == "m" or operacion == "p":
    resultado = num1 * num2
    print("\nEl resultado de la multiplicacion es: ",resultado)

elif operacion == "d":
    if num2 != 0:
        resultado = num1 / num2
        print("\nEl resultado de la division es: ",resultado)
    else:
        print("\nError, no se puede dividir entre cero")
else:
    print("\nOperacion no valida use solamente las siguiente siglas: s,r,m o p,d: ")