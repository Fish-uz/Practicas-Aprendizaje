/* 1.2 Se desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en el 
grupo de estudiantes de su sección*/

#include <iostream>

using namespace std;

int main(){
    int alumnos, H, M, porcentaje_H, porcentaje_M;

        cout<<"Vamos a calcular el porcentaje por sexo de tu seccion"<<endl;
        cout<<"\nCuantos estudiantes hay en tu salon?: "; cin>>alumnos;
        cout<<"¿Cuantos son Hombres?: "; cin>>H;
        cout<<"¿Cuantas son Mujeres?: "; cin>>M;
        
    if(alumnos != H+M){
            
            cout<<"\nHas colocado el numero de alumnos incorrectamente. \nLa suma entre Hombres y Mujeres no es igual al numero de alumnos en total :("<<endl;
        
    }else if(alumnos = H+M){

        porcentaje_H = 100/alumnos*H;
        porcentaje_M = 100/alumnos*M;

        cout<<"\nEl porcentaje total entre los "<<alumnos; cout<<" alumnos es de: "<<endl; 
        cout<<"Hombres: "<<porcentaje_H; cout<<"%";
        cout<<"\nMujeres: "<<porcentaje_M; cout<<"%"<<endl;
    
        if(porcentaje_H>porcentaje_M){
    
            cout<<"\nEn tu salon la mayoria son Hombres, ¡Vaya,vaya!";
            
        }else if(porcentaje_M>porcentaje_H){
    
            cout<<"\nEn tu salon la mayoria son Mujeres. ¡Mujeres al Poder!";
        }
    
    }

    return 0;
}
//Resuelto
