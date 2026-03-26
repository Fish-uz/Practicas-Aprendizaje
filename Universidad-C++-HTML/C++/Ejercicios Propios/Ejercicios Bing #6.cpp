/* 1) Suma de vectores: Crea un programa que pida al usuario dos vectores de tamaño n y los sume. 
El resultado debe ser un nuevo vector de tamaño n.*/

#include<iostream>

using namespace std;

int main(){
    int f,d,u;
    int arreglo1[100];
    int arreglo2[100];
    int arreglo3[100];

    cout<<"Coloque un numero para los arreglos: "; cin>>f;
    
    d = f; //Para que los dos arreglos sean del mismo tamaño
    
    cout<<"\nElementos para el Primer Arreglo: "<<endl;

    for(int i=0; i<f; i++){
        cout<<"Coloque un numero aca para el arreglo 1: "; cin>>arreglo1[i];
    }
    
    cout<<"\nElementos para el Segundo Arreglo: "<<endl;
    
    for(int i=0; i<d; i++){
        cout<<"Coloque un numero aca para el Arreglo 2: "; cin>>arreglo2[i];
    }
    
    cout<<"\nSuma de Elementos para el Arreglo 3: "<<endl;
        
    for(int i=0; i<5; i++){
        
        arreglo3[i] = arreglo1[i] + arreglo2[i];
        
        cout<<arreglo3[i]<<endl;
    }

    return 0;
}