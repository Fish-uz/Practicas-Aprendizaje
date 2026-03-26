//Realice un programa que lea un valor entero y determine si se trata de un numero par o impar

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Coloque un numero: "; cin>>numero;

    if(numero==0){
        cout<<"El numero es cero";

    }else if(numero%2==0){
        cout<<"El numero es par";


    }else{
        cout<<"El numero es impar";

    }

    return 0;
}

//Ejercicio: Comprobar si un numero digitado por el usuario es positivo o negativo

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Coloque un numero: "; cin>>numero;

    if(numero >0){
        cout<<"El numero es positivo!";

    }else if(numero <0){
        cout<<"El numero es negativo!";

    }else 
        cout<<"El numero es cero!";


    return 0;
}

//Resuelto