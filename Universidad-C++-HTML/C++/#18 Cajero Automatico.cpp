/* Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 Dolares*/

#include <iostream>

using namespace std;

int main(){
    int saldo_inicial= 1000, opc;
    float extra, saldo= 0, retiro;

    cout<<"\tBienvenido a su cajero virtual:  "<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion"; cin>>opc;

    switch(opc){
        case 1: cout<<"Coloque la cantidad de dinero a ingresar: "; cin>>extra;
        saldo = saldo_inicial + extra;
        cout<<"Dinero en cuenta: "<<saldo;break;

        case 2:
        cout<<"Coloque la cantidad de dinero que desea retirar: "; cin>>retiro;

        if(retiro > saldo_inicial){
            cout<<"No tiene fondos suficientes para retirar esa cantidad ";

        }else{
            saldo = saldo_inicial - retiro;
            cout<<"Dinero en cuenta: "<<saldo;break;
        }
        
        case 3: break;
    }

    return 0;
}

/* Ejercicio: Hacer un menu que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int numero, opciones, cubo, numero_par;

    cout<<"\tBienvenido a la mini calculadora ";
    cout<<"Ingrese un numero: "<<endl; cin>>numero;
    cout<<"1. Desea saber el cubo de este numero?"<<endl;
    cout<<"2. Desea saber si este numero es par o impar?"<<endl;
    cout<<"3. Salir :("<<endl;
    cout<<"\nOpciones "; cin>>opciones;

    switch(opciones){
        case 1: cout<<"Un numero al cubo es cuando un exponente se eleva al 3, por lo tanto el resultado de su numero al cubo es: ";
                cubo = (pow(numero,3));
                cout<<cubo;break;

        case 2: cout<<"Los numeros par tienen mitad exacta y los impar mitad inexacta (Es decir son decimales)"<<endl;
                if(numero==0){
                cout<<"El numero es cero";

                }else if(numero%2==0){
                cout<<"El numero es par";

                }else{
                cout<<"El numero es impar";
                }  
                
        case 3: break;
    }

    return 0;
}
//Resuelto