// Escribe la siguiente expresion Matematica como expresion en C++: a/b+1

#include<iostream>

using namespace std;

int main(){
    float a,b, resultado = 0;

    cout<<"Coloque el valor de a:"; cin>>a;
    cout<<"Coloque el valor de b:"; cin>>b;

    resultado = (a/b) + 1;

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;


    return  0;
}

/*Ejercicio
Escribe la siguiente expresion matematica como expresion C++: a+b/c+d*/

#include<iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Coloque un valor para a: "; cin>>a;
    cout<<"Coloque un valor para b: "; cin>>b;
    cout<<"Coloque un valor para c: "; cin>>c;
    cout<<"Coloque un valor para d: "; cin>>d;

    resultado = (a+b)/(c+d);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}

//Resuelto