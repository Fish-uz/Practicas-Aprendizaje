/*Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0; i<5; i++){
        suma += numeros[i];

        cout<<"La suma de los elementos son: "<<suma<<endl;

    }

    getch();
    return 0;
}

//Ejercicio: Escribe un programa que defina un vecor de numeros y calcule la multiplicacion acumulada de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int vector[] {2,4,8,9,8};
    int multiplicacion = 1;
    
    for(int i=0; i<5; i++){
        multiplicacion *= vector[i];
        
        cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;
    }
    
    getch();
    return 0;
}
//Resuelto