/*Hacer un programa que realice la serie fibonacci -> 1 - 1 -  2 - 3 - 5 - 8...........n */

#include<iostream>

using namespace std;

int main(){
    int f, x=0, y=1, z=1;

    cout<<"Colocar el numero de elementos : "; cin>>f;

    for(int i=1; i<=f; i++){

        z = x + y;
        cout<<z<<" ";
        x= y;
        y= z;
    }


    return 0;
}

/*Ejercicio: En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de: 
a)Alumnos que aprobaron todos los examenes
b)Alumnos que aprobaron al menos un examen
c)Alumnos que aprobaron unicamente el ultimo examen,
Realice un programa que permita la lectura de los datos y el calculo de las estadisticas*/

#include<iostream>

using namespace std;

int main(){
    int examen1, examen2, examen3, estadistica, alumnos_aprobados;

    cout<<"====Recuerda que son solo 5 estudiantes ;)===="<<endl;
    cout<<"Cuantos alumnos aprobaron el examen 1: "<<endl; cin>>examen1;
    cout<<"Cuantos alumnos aprobaron el examen 2: "<<endl; cin>>examen2;
    cout<<"Cuantos alumnos aprobaron el examen 3: "<<endl; cin>>examen3;

    if(examen1>5 && examen2>5 && examen3>5)
    {
        cout<<"====Solo debes colocar mas de 5 alumnos ;(====";
    
    }else
        alumnos_aprobados += examen1 + examen2 + examen3;
        
        cout<<"\nAlumnos que aprobaron todos los examenes: "<<alumnos_aprobados<<endl;
        cout<<"Alumnos que aprobaron al menos un examen: "<<alumnos_aprobados<<endl;
        cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<examen3<<endl;
        
    return 0;
}