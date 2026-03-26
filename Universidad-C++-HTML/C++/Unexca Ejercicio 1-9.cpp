/*Dados dos números naturales que forman un intervalo, imprimir los números que se 
encuentran entre ellos.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a,b;
    
    cout<<"Vamos a formar un intervalo"<<endl;
    cout<<"\nColoque un numero para A: "; cin>>a;
    cout<<"Coloque un numero para B: "; cin>>b;
    
    if(a >= b){
        cout<<"Intervalo Errado. El valor de A no puede ser mayor que el Valor de B."<<endl;
        
    }else{
        
        cout<<"\nLos numeros que forman el intervalo entre A y B son: "<<endl;
        
        cout<< "*A* -- ";
        
        for(int i=a; i<=b; i++){
            cout<<i<<"  ";
        }
            
        cout<< "-- *B*";
    }
        
    getch();
    return 0;
}
//Resuelto