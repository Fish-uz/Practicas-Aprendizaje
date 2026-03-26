/* Hacer una estructura llamada corredor, en la cual se tendra los siguientes campos: Nombre, edad, sexo, club,
pedir datos al usuario para un corredor, y asi una categoria de competencia:
- Juvenil  <= 18 años
- Señor    <= 40 años
- Vetenano >  40 Años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Nombre: "; cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: "; cin>>c1.edad;
    cout<<"Sexo: "; cin.getline(c1.sexo,10,'\n');
    cout<<"Club: "; cin.getline(c1.club,20,'\n');

    if(c1.edad <= 18){
        strcpy(categoria,"Juvenil");

    }else if(c1.edad <= 40){
        strcpy(categoria,"Senior");

    }else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    getch();
    return 0;
}

/*Hacer una estructura llamada alummno, en la cual se tendran los siguientes Campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos.
Comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno*/

#include<iostream>
#include<conio.h>
using namespace std;

struct alumnos{
    char nombre[50];
    int edad;
    float promedio;

}alumno[3];

int main(){
    int mejor_promedio = 0; // Inicializar la variable con un valor inicial de 0

    for(int i=0; i<3; i++){
        cout<<"Alumno "<<i+1<<endl;
        cout<<"Nombre: "; cin.getline(alumno[i].nombre,50,'\n');
        cout<<"Edad: "; cin>>alumno[i].edad;
        cout<<"Promedio: "; cin>>alumno[i].promedio;
        cin.ignore();
        cout<<"\n";

        if(alumno[i].promedio > alumno[mejor_promedio].promedio){
            mejor_promedio = i; // Actualizar el índice del alumno con el mejor promedio
        }
    }
    
    //Imprmiendo datos del alumno con el mejor promedio

    cout<<"El Alumno con el mejor Promedio es:"<<endl;
    cout<<"Nombre: "<<alumno[mejor_promedio].nombre<<endl;
    cout<<"Edad: "<<alumno[mejor_promedio].edad<<endl;
    cout<<"Promedio: "<<alumno[mejor_promedio].promedio<<endl;

    getch();
    return 0;
}
//Resuelto