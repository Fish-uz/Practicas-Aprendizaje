/*Realice un programa que lea de la entrada estandar los siguientes datos o una persona
Edad: dato de tipo entero
Sexo: dato de tipo caracter
Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include<iostream>

using namespace std;

int main(){
    int edad;
    char sexo(10);
    float altura;

    cout<<"Coloca tu edad, por favor:" cin>>edad;
    cout<<"Coloca tu sexo, por favor:" cin>>sexo;
    cout<<"Coloca tu altura, por favor:" cin>>altura;

    cout<<"\nSu edad es:"<<edad<<endl;
    cout<<"Su sexo es:"<<sexo<<endl;
    cout<<"Su altura es:"<<altura<<endl;
    
    return 0;
}

