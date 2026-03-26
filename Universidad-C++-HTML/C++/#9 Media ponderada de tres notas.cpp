/* La calificacion final de un estudiante es la media ponderada de tres notas la nota de practicas que cuenta un 30% del 
total, la nota teorica que cuenta con un 60%, y la nota de participacion que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estandar. Las tres notas de un alumno y escriba en la salida estandar su nota final */

#include <iostream>

using namespace std;

int main(){

    float practica,teorica,participacion,notafinal = 0;

    cout<<"Coloque la nota de Practica: "; cin>>practica;
    cout<<"Coloque la nota de Teorica: "; cin>>teorica;
    cout<<"Coloque la nota de Participacion: "; cin>>participacion;

    practica *= 0.30; //Seria lo mismo si lo escribo --> practica = practica * 0.30 <--Con lo primero reducimos el codigo.
    teorica *= 0.60;
    participacion *= 0.10;

    notafinal= practica + teorica + participacion;
    cout<<"\nLa nota final del estudiante es: "<<notafinal<<endl;
    
    return 0;
}

/*Ejercicio Propio: Escriba un programa que lea de la entrada estandar los dos catetos de un
 triangunlo rectangulo y escriba en la salida estandar su hipotenusa*/

 //- Cada triángulo rectángulo tiene entonces dos catetos
 //- La hipotenusa es igual a la suma de los cuadrados de los catetos.

#include <iostream>

using namespace std;

int main(){
    float catetoA,catetoB,hipotenusa = 0;

    cout<<"Digite los centimetros del cateto A: "; cin>>catetoA;
    cout<<"Digite los centimetros del cateto B: "; cin>>catetoB;

    hipotenusa = catetoA + catetoB;

    cout<<"\nLa hipotenusa es igual a la suma de los cuadros de los catetos"<<endl<<"por lo tanto su resultado es: "<<hipotenusa<<endl;

    return 0;
}
//Resuelto
