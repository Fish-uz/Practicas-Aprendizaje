/*Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numero[100],n, mayor;

    cout<<"El numero de elementos del arreglo: "; cin>>n;

    for(int i=0; i<n; i++){
        cout<<i+1<<". Digite un numero: "; cin>>numero[i];
        
        if(numero[i] > mayor){

            mayor = numero[i];
        }
    }

    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;

    getch()
    return 0;
}

/*Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale
a la suma del resto de numeros del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int vector[100],f,mayor,suma;

    cout<<"Coloque un numero para el vector: "; cin>>f;   
    
    for(int i=0; i<f; i++){
        cout<<"Coloque un digito: "; cin>>vector[i];
        
        suma += vector[i];
        
        if(vector[i]>mayor){
            mayor= vector[i];
        }
        
    }
    
    if(mayor== suma - mayor){
        cout<<"La suma de los demas elementos del vector es igual a: "<<mayor;
        
    }else{
        cout<<"Ningun elmento conincide con la suma del vector: ";
        
    }

    getch();
    return 0;
}