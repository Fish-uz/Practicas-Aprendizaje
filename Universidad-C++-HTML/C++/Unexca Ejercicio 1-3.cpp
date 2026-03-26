/*1.3 Hacer un algoritmo que calcule el total a pagar por la compra de camisas. 
Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra y 
si son menos de tres camisas un descuento del 10%.*/

#include<iostream>

using namespace std;

int main(){

    int compra, camisas = 50, subtotal1, subtotal2, descuento1, descuento2, total1, total2;

        cout<<"Hola, Bienvenido. Las camisas cuentan 50Bs C/U ¿Cuantas camisas desea comprar?: "; 
        cin>>compra;

        // Descuento de 10% por la compra menor a 3 camisas
        subtotal1 = compra*camisas;
        descuento1 = subtotal1*0.10;
        total1 = subtotal1 - descuento1;

        // Descuento de 20% por la compra de 3 camisas o mas
        subtotal2 = compra*camisas;
        descuento2 = subtotal2*0.20;
        total2 = subtotal2 - descuento2;

        if(compra < 3){
            cout<<"\nPor la compra de 1 o 2 camisas se aplica un descuento de 10%, total a pagar es: "<<total1<<endl;

        }else if(compra => 3){
            cout<<"\nPor la compra minima de 3 camisas se aplica un descuento de 20%, total a pagar es: "<<total2<<endl;
            } 

    return 0;
}
//Resuelto