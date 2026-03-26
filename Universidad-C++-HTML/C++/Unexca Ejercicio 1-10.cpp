/*Desarrollar las tablas de multiplicar del 1 al 10.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int f=1, u=1;

    while((f<1) || (f>10));
        
    for(int f=1; f<=10; f++){
        cout<<"Tabla de Multiplicar del "<<f<<endl; 
        
    for(int u=1; u<=10; u++){
        cout<<f<<" * "<<u<<" = "<<f*u<<endl;
    }
        cout<<"\n";
        
        }
    getch();
    return 0;
}

//Resuelto