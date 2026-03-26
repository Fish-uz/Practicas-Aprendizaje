/* Escriba un programa que lea de la entrada estandar un caracter e indique en la salida 
estandar si el caracter es una vocal miniscula o no */

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout<<"Coloque un caracter: "; cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"Es una vocal minuscula ";break;
        default :cout<<"NO es una vocal minuscula";break;
    }

    return 0;
}

/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter
es una vocal minuscula, es una vocal mayuscula o no es una vocal*/

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout<<"Coloque una letra por favor: "; cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"\n Es una vocal minuscula ";break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':cout<<"\nEs una vocal mayuscula ";break;
        default: cout<<"\nNo es una vocal, es una consonante ";break;
    }

    return 0;
}
//Resuelto