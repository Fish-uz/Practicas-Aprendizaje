/*Hacer 2 estructuras llamadas promedio que tendra los siguientes campos: nota1, nota2, nota3;
Y otra llamada alumno que tendra los siguientes miembros: nombre, sexo, edad; 
hacer que la estrutura promedio este anidada en la estructura alumno, 
luego pedir todos los datos para un alumno, 
luego calcular su promedio, 
y por ultimo imprimir todos sus datos incluidos el promedio*/

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
    float nota1, nota2, nota3;
};

struct alumno{
    char nombre[20], sexo[10];
    int edad;
    struct promedio prom;
}alumno1;

int main(){
    float promedio_alumno;

    cout<<"Digite su nombre: "; cin.getline(alumno1.nombre, 20,'\n');
    cout<<"Digite su sexo: "; cin.getline(alumno1.sexo, 10,'\n');
    cout<<"Digite su edad: "; cin>>alumno1.edad;

    cout<<"\n:::Notas del Alumno:::\n";

    cout<<"Nota 1: "; cin>>alumno1.prom.nota1;
    cout<<"Nota 2: "; cin>>alumno1.prom.nota2;
    cout<<"Nota 3: "; cin>>alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

    cout<<"\n:::Datos del Alumno:::\n";

    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;

    getch();
    return 0;
}

/*Hacer 2 estructuras llamadas promedio que tendra los siguientes campos: nota1, nota2, nota3;
Y otra llamada alumno que tendra los siguientes miembros: nombre, sexo, edad; 
hacer que la estrutura promedio este anidada en la estructura alumno, 
luego pedir todos los datos para N cantidad de alumnos 
luego calcular su promedio, y calcular cual de todos tiene el mejor promedio
y por ultimo imprimir todos sus datos incluidos el promedio*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct calificaciones{
    float nota1, nota2, nota3;
};

struct alumnos{
    char nombre[30], sexo[10];
    int edad;
    struct calificaciones notas;
}alumno[20];

int main(){
    float promedio_alumno, mejor_promedio;
    int posM, numero_de_alumnos;
    srand(time(0));
    
    cout<<"Digite el numero de Alumnnos: "; cin>>numero_de_alumnos;
    cout<<'\n';
    cin.ignore();

    for(int i=0; i<numero_de_alumnos; i++){

        cout<<i+1<<"- Digite su Nombre: "; cin.getline(alumno[i].nombre, 30, '\n');
        cout<<i+1<<"- Digite su Sexo: "; cin.getline(alumno[i].sexo, 10, '\n');
        cout<<i+1<<"- Digite su Edad: "; cin>>alumno[i].edad;

        //Sacando Promedio======
        cout<<"\n:::Notas del Alumno:::"<<i+1<<"\n";

        alumno[i].notas.nota1 = 0 + rand()% 21;
        alumno[i].notas.nota2 = 0 + rand()% 21;
        alumno[i].notas.nota3 = 0 + rand()% 21;

        cout<<"Nota 1: "<<alumno[i].notas.nota1<<endl;
        cout<<"Nota 2: "<<alumno[i].notas.nota2<<endl;
        cout<<"Nota 3: "<<alumno[i].notas.nota3<<endl;

        promedio_alumno = (alumno[i].notas.nota1 + alumno[i].notas.nota2 + alumno[i].notas.nota3) / 3;

        cout<<"Promedio: "<<promedio_alumno<<endl;
        cin.ignore();
        
        //Sacando alumno con mayor promedio
        if(promedio_alumno > mejor_promedio){
            mejor_promedio = promedio_alumno;
            posM = i;

        }

        cout<<"\n";
    }

    cout<<"\n:::Alumno con Mayor Promedio es:::\n";
    cout<<"::Nombre: "<<alumno[posM].nombre<<endl;
    cout<<"::Edad: "<<alumno[posM].edad<<endl;
    cout<<"::Promedio: "<<mejor_promedio;


    getch();
    return 0;
}
//Resuelto