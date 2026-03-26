/*Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros
del vector con sus indices asociados*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n, numero[100];

    cout<<"Coloque el numero para el vector: "; cin>>n;


    for(int i=0; i<n; i++){
    cout<<"Digite un numero: "; cin>>numero[i]; //Guardara todos los elementos del vector
    }

    //Ahora vamos a mostrar los elementos con sus indices asociados

    for(int i=0; i<n; i++){
    cout<<i<<" --> "<<numero[i]<<endl;
    }  

    getch();
    return 0;
}

/*Escribe un programa que defina un vector de numeros y muestre en la salida estandar del vector en orden inverso -
 del ultimo al primer elemento*/

 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 int main(){
     int vector[50],f;
     
     cout<<"Coloque un numero para el vector: "; cin>>f;
     
     for(int i=0; i<f; i++){
         cout<<"Digite un numero: "; cin>>vector[i];
     }
     
     cout<<"\nOrden inverso: "<<endl;
     for(int i=0; i<f; i++){
         cout<<i<<"--> "<<vector[f - i - 1]<<endl;
     }

    getch()
    return 0;
 }
 //Resuelto