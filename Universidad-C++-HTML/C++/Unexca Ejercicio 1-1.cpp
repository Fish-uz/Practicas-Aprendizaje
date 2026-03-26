//1.1 Calcular el nuevo salario de un trabajador si obtuvo un incremento del 25% sobre su salario anterior.

#include <iostream>

using namespace std;

int main(){

    float salario,incremento, salario_final;

    cout<<"Hola Pequeña Personita. Vamos a calcular tu salario con un incremento de 25%. \n¿Cual es tu Salario actual?: "; 
    cin>>salario;

    incremento = salario*0.25;
    salario_final = salario + incremento;
    
    cout<<"\nel 25% de tu salario es:\n"<<incremento<<"\n";
    cout<<"\nPor lo tanto. Su nuevo salario es de:\n"<<salario_final; cout<<"\nFelicidades :)";

    return 0;
}
//Resuelto