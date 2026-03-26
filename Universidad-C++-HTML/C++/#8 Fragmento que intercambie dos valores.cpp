// Escriba un fragmento de programa que intercambie los valores de dos variables. 

#include<iostream>

using namespace std;

int main(){

    int x,y,aux;

    cout<<"Coloque un numero para x: "; cin>>x;
    cout<<"Coloque un numero para y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;

   return 0;
}

/*EJERCICIO Escriba un programa que lea la nota final de cuatro alumnos y calcule 
    la nota final media de los cuatro alumnos*/

#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3,a4,promedio = 0;

    cout<<"Ingrese la nota del Alumno 1: "; cin>>a1;
    cout<<"Ingrese la nota del Alumno 2: "; cin>>a2;
    cout<<"Ingrese la nota del Alumno 3: "; cin>>a3;
    cout<<"Ingrese la nota del Alumno 4: "; cin>>a4;

    promedio = (a1+a2+a3+a4)/4;

    cout<<"\nLa nota promedia entre los 4 Alummos es: " <<promedio<<endl;

    return 0;
}
//Resuelto