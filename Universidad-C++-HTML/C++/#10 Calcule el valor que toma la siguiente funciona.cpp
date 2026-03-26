/* Realice un programa que calcule el valor que toma la siguiene funcion para unos valores dados de X e Y:  
f(x,y)= raiz cuadrada de X sobre Y elevado a 2 - 1*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x,y,resultado = 0;

    cout<<"Coloque un numero para X: "; cin>>x;
    cout<<"Coloque un numero para Y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1);

//==============================================================================================================================
/*El codigo "sqrt" significa RAIZ CUADRADA, por ejemplo si en (x) coloca 64, el numero sera 8,
porque saca la raiz automaticamente de la variable */
//==============================================================================================================================
/*El codigo "pow" es para elevar un exponente el cual se usa primero la variable y luego de la , colocar a el numero a elevar
Ambas funciones sqrt y pow. Estan dentro de la libreria <math.h>. sin esta libreria estos codigos no funcionarian.*/
//==============================================================================================================================
    
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}

//==============================================================================================================================
/*Ejercicio Propio: Escriba un programa que calcule las soluciones de una ecuacion de segundo grado
de la forma ax*^2+bx+c=0, teniendo en cuenta que: x= (-b+-(RaizCuadrada B elevado a 2 - 4.a.c entre 2.a)*/
//==============================================================================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,x_positivo = 0, x_negativo = 0;

    cout<<"Coloque un numero para A: "; cin>>a;
    cout<<"Coloque un numero para B: "; cin>>b;
    cout<<"Coloque un numero para C: "; cin>>c;

    x_positivo = (-b)+(sqrt(pow(b,2)-4*a*c))/(2*a);
    x_negativo = (-b)-(sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"\nEl resultado de la ecuacion estandar es: "<<x_positivo<<endl;
    cout<<"El resultado de la ecuacion en negativo es: "<<x_negativo<<endl;

    return 0;
}
//Resuelto



/*Ejercicio Propio: Escriba un programa que calcule las soluciones de una ecuacion de segundo grado
de la forma ax*^2+bx+c=0,*/

#include<iostream>

using namespace std;

int main{
    int x

    return 0;
}