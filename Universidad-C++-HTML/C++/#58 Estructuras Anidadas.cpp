#include<iostream>
#include<conio.h>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleado[2];

int main (){
    for(int i=0; i<2; i++){
        fflush(stdin); //Vaciar el buffer y permitir digitar los valores
        cout<<"Digite su nombre: "; cin.getline (empleado[i].nombre,20,'\n');
        cout<<"Digite su direccion: "; cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite la ciudad: "; cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite la provincia: "; cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
        cout<<"Salario: "; cin>>empleado[i].salario;
        cout<<"\n";
    }

    //Imprimiendo los datos

    for(int i=0; i<2; i++){
        cout<<"Nombre: "<<empleado[i].nombre<<endl;
        cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario : "<<empleado[i].salario;
        cout<<"\n";
    }


    getch();
    return 0;
}