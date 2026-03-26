//Estructuras Basicas en C++

#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
    char nombre[20];
    int edad;

}
persona1 = {"Frank",27},
persona2 = {"Daniel",18};

int main (){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;

    getch();
    return 0;
}


//Ejemplo 2 ===================================

#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
    char nombre[20];
    int edad;

}persona1;

int main (){
    cout<<"Nombre: "; cin.getline(persona1.nombre,20,'\n');
    cout<<"Edad: "; cin>>persona1.edad;

    cout<<"\nImprimiendo datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    getch();
    return 0;
}