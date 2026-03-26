#include<iostream>

using namespace std;

int main(){

    cout<<"Hola Mundo. Por parte de Frank Uzcategui [;)]";

    return 0;
}
//===========================================================================================================================

/*Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estandar 
su suma, resta, muliplicacion y division */

#include<iostream>

using namespace std;

int main(){
    int f1,f2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Coloque un numero por favor: "; cin>>f1;
    cout<<"Coloque otro numero por favor: "; cin>>f2;

    suma = f1 + f2;
    resta = f1 - f2;
    multiplicacion = f1 * f2;
    division = f1 / f2;

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;

    return 0;
}

/*Escribe un programa que lea de la entrada estandar el precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){

    float producto, iva, precio;

    cout<<"Coloque aqui el precio del producto: "; cin>>producto;

    iva = producto * 0.10;
    
    precio = iva + producto;
    
    cout<<"El IVA es el 10%: "<<iva<<endl;
    cout<<"El precio del producto mas el IVA es: "<<precio;
    
    return 0;
}

//Resuelto

