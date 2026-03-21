# Ejercicios #5
# Hacer un programa que simule un cajero automatico con un saldo incial de 1000$
# y tendra el siguiente menu de opciones:
# 1- Ingresar dinero en la cuenta
# 2- Retirar dinero de la cuenta
# 3- Mostrar dinero disponible
# 4- Salir

print("\nBienvenido al cajero Virutal")

print("1- Ingresar dinero")
print("2- Retirar dinero")
print("3- Mostrar dinero disponible")
print("4- Salir")

opciones = int(input("\nSeleccione una opcion: "))
saldo = 1000

if opciones == 1:
    ingreso = int(input("\nCuanto dinero desea ingresar: "))
    saldo = saldo + ingreso
    print("Saldo actualizado:",saldo,"\n")

elif opciones == 2:
    retiro = int(input("Cuando dinero desea retirar: "))
    if retiro > saldo:
        print("No tiene saldo suficiente para retirar ese monto")
    else:
        saldo = saldo - retiro
        print("Saldo actualizado: ", saldo,"\n")

elif opciones == 3:
    print("Su saldo disponibles es: ", saldo,"\n")

elif opciones == 4:
    print("Programa Finalizado")

else:
    print("Error, opcion invalida, debe seleccionar una opcion valida")
