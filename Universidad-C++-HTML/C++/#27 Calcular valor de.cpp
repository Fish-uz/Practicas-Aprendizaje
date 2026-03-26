/*Escribe un programa que calcule el valor de 2^1+2^2+2^3+....+2^n*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int suma = 0, elevacion = 0 ,n;

    cout<<"Calcular el numero de elementos a sumar: "; cin>>n;

    for(int i=1; i<=n; i++){
        elevacion = pow(2,i);
        suma += elevacion;
    }
    cout<<"\nEl resultado de la suma es: "<<suma<<endl; 

    getch();
    return 0;
}

//Ejercicio: Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6....n

#include<iostream>
#include <conio.h>

using namespace std;

int main(){
    int f, valor1,valor2, suma;
    
    cout<<"Coloque un numero para F: "; cin>>f;
    
    for(int i=0; i<=f; i++){
        
        if(i%2==0){ //El numero es par
            valor1 += i;
        }
        
        else{
            valor2 += i;
        }
        
    suma = valor2 - valor1;
    }
    
    cout<<"\nEl resultado es: "<<suma;
    
    getch();
    return 0;
}

//Resuelto