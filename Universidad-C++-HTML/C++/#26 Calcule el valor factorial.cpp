/*Escribe un programa que calcule el valor de: 1*2*3*.... *n* (fatorial)*/

// 5! *5*4*3*2*1 Factorial de un numero, en este caso factorial de 5

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero, factorial = 1;

    cout<<"Coloque un numero: "; cin>>numero;

    for(int i=1; i<=numero; i++){
        factorial = factorial * i;

    }

    cout<<"\nEl factorial del numero es: "<<factorial<<endl;

    getch();
    return 0;
}

//Ejercicio: Escriba un programa que calcule el valor de: 1!+2!+3!....+n! (Suma de Factoriales)

#include<iostream>

using namespace std;

int main(){
    
    int factorial = 0, f;
    
    cout<<"Coloque un valor para F: "; cin>>f;
    
    for(int i=1; i<=f; i++){
    
    factorial += i;
    }
    
    cout<<"\nLa suma factorial de "<<f<<" es: "<<factorial;

    return 0;
}
// #Resuelto
