//Escribe un programa que lea dos numeros y determine cual es el mayor
#include <iostream>
using namespace std;

int main(){
    int f1,f2;
        cout<<"Digite 2 numeros: "; cin>>f1>>f2;

    if(f1==f2){
        cout<<"Ambos numeros son iguales: ";
    }
    else if(f1>f2){
        cout<<"El mayor es: "<<f1;
    }
    else{
        cout<<"El mayor es: "<<f2;
    }

    return 0;
}

/*Ejercicio: Escriba un programa que lea tres numeros y determine cual de ellos es el mayor*/

#include<iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"Coloque un valor para 3 valores aca: "; cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"El valor Mayor es A: "<<a;
        
    }else if(b>a && b>c){
        cout<<"El valor Mayor es B: "<<b;
        
    }else if(c>a && c>b){
        cout<<"El valor Mayor es C: "<<c;

    }else{cout<<"Los 3 valores son iguales";}

    return 0;
}
//Resuelto