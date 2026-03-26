/*Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre
en la salida estandar su tabla de multiplicar*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero;

    do{

    cout<<"Coloque un numero: "; cin>>numero;
    }while ((numero<1) || (numero>10));

    for (int f=1;f<=20;f++){
        cout<<numero<<" * "<<f<<" = "<<numero*f<<endl;
    }

    getch();
    return 0;
}

/*Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese momento
el programa debe terminar y mostrar en la salida estandar el numero de valores mayores que cero leidos*/

#include<iostream>
using namespace std;

int main(){
    int i=0, f;
    
    do{
        cout<<"Coloque un numero aca: "; cin>>f;
        i++;
        
    }while(f !=0); 
    
    if(f ==0){
        i-=1;
    }
    
    cout<<"El numero de valores introducidos es: "<<i;
    cout<<"\nEl cero no cuenta";
    
    return 0;
}

//Resuelto