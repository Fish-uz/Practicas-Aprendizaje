#Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
#desea saber cuanto debera pagar finalmente por su compra

compra = float(input("El total de la compra es: "))
descuento = compra * 0.15
pago = compra - descuento

print(f"El descuento es de 15%: {descuento}")
print(f"Por lo tanto solo debera pagar: {pago:2f}")