/*==========================================================================================
1) Escriba un programa que lea una lista de números enteros y muestre el número más grande..
============================================================================================*/ 

#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main(){

    int a,b,c,d,e;

    srand(time(NULL));

    a = 1 + rand() % (21 - 1);
    b = 1 + rand() % (21 - 1);
    c = 1 + rand() % (21 - 1);
    d = 1 + rand() % (21 - 1);
    e = 1 + rand() % (21 - 1);

    if(a>b & a>c & a>d & a>e){
        cout<<"El numero mayor es: "<<a;

    }else if(b>c & b>d & b>e){
        cout<<"El numero mayor es: "<<b;

    }else if(c>d & d>e){
        cout<<"El numero mayor es: "<<c;

    }else if(d>e){
        cout<<"El numero mayor es: "<<d;
        
    }else{
        cout<<"El numero mayor es: "<<e;
    }

    cout<<"\nNumero para A "<<a;
    cout<<"\nNumero para B "<<b;
    cout<<"\nNumero para C "<<c;
    cout<<"\nNumero para D "<<d;
    cout<<"\nNumero para E "<<e;

    return 0;
}

/*=================================================================================================
2) Escriba un programa que lea una lista de números enteros y muestre la suma de los números pares.
===================================================================================================*/

#include<iostream>

using namespace std;

int main(){

    int suma,i,j;
    
    cout<<"Coloque un numero: "; cin>>j;

    for(i=0; i<=j; i++){

        if(i % 2 == 0){

            cout<<i<<endl;
            suma = suma + i;
        }
        
    }
        cout<<"\nLa suma de los valores es "<<endl<<suma;
        
    return 0;
}

/*==================================================================================================
3) Escriba un programa que lea una lista de números enteros y muestre la suma de los números impares.
====================================================================================================*/

#include<iostream>

using namespace std;

int main(){

    int i, j, suma;

    cout<<"Coloque un numero: "; cin>>j;

    for(i=0; i<=j; i++){

        if(i % 2 != 0){

            cout<<i<<endl;
            suma += i;
        }
    }
        cout<<"La suma de los impares es: "<<suma<<endl;
    return 0;
}

/*==========================================================================================================
4) Escriba un programa que lea una lista de números enteros y muestre la suma de los dígitos de cada número.
============================================================================================================*/
#include<iostream>

using namespace std;

int main(){

    int numero, suma, i;

    cout<<"Coloque un numero aca: "; cin>>numero;

    for(i=0; i<=numero; i++){

        cout<<i<<endl;
        suma += i;

    }
    cout<<"La suma de cada numero es: "<<suma;

    return 0;
}