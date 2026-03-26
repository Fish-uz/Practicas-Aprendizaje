/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y 
que imprima los datos  del empleado con mayor y menor salario*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct empleado{
    char nombre[20];
    float salario;
}emp[100];

int main(){
    int n_empleados, posM=0, posm=0;
    float mayor=0, menor = 99999;

    cout<<"Digite el numero de empleados: "; cin>>n_empleados;
    cin.ignore(); // Descartar el carácter de nueva línea en el búfer o limpiar bufer

    for(int i=0; i<n_empleados; i++){
        cout<<i+1<<". Digite su nombre: "; cin.getline(emp[i].nombre,20,'\n');
        cout<<i+1<<". Digite su salario: "; cin>>emp[i].salario;
        cin.ignore(); // Descartar el carácter de nueva línea en el búfer o limpiar bufer
        
        //Empleado de mayor salario
        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }

        //Empleado de menor salario
        if(emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }
        
        cout<<"\n";
    }
        
        cout<<"\n::Datos del empleado con MAYOR salario:: \n";
        cout<<"Nombre: "<<emp[posM].nombre<<endl;
        cout<<"Salario: "<<emp[posM].salario<<endl;

        cout<<"\n::Datos del empleado con MENOR salario:: \n";
        cout<<"Nombre: "<<emp[posm].nombre<<endl;
        cout<<"Salario: "<<emp[posm].salario<<endl;

    getch();
    return 0;
}

/*EJERCICIO
Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, pais, numero_medallas
y devuelva los datos (Nombre,pais) del atleta que ha ganado el mayor numero de medallas*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdlib>
#include<time.h>

using namespace std;

struct atletas{
    char nombre[30], pais[20];
    int numero_medallas;

}atl[100];

int main(){

    int num_atetlas, medallas =0, posM;
    srand(time(0));

    cout<<"Digite el numero de Atletas: "; cin>>num_atetlas;
    cout<<'\n';
    cin.ignore();

    for(int i=1; i<=num_atetlas; i++){

        cout<<i<<"- Digite Nombre: "; cin.getline(atl[i].nombre,30,'\n');
        cout<<i<<"- Digite Pais: "; cin.getline(atl[i].pais,20,'\n');
        
        atl[i].numero_medallas = 0 + rand() % (20 + 1 - 0);
        cout<<i<<"- Numero de Medallas: "<<atl[i].numero_medallas<<'\n';

    //Calculando Atleta con mas medallas

        if(atl[i].numero_medallas > medallas){
            medallas = atl[i].numero_medallas;
            posM = i;
        }

        cout<<"\n";
    }

        cout<<"\n:::Atleta Destacado, Con Mayor Nro. Medallas:::\n";
        cout<<"::Nombre: "<<atl[posM].nombre<<endl;
        cout<<"::Pais: "<<atl[posM].pais<<endl;
        cout<<"::Medallas: "<<medallas;

    getch();
    return 0;
}
//Resuelto