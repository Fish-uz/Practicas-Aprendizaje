// Escribe la siguiente expresion como expresion en C++: a+(b/c)/d+(e/f)

#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f, resultado = 0;

    cout<<"Coloque un numero para a: "; cin>>a;
    cout<<"Coloque un numero para b: "; cin>>b;
    cout<<"Coloque un numero para c: "; cin>>c;
    cout<<"Coloque un numero para d: "; cin>>d;
    cout<<"Coloque un numero para e: "; cin>>e;
    cout<<"Coloque un numero para f: "; cin>>f;
    
    resultado = (a+(b/c))/(d+(e/f));
    cout.precision(2);
     cout<<"\nSu resultado es: "<<resultado<<endl;

    return 0;
}

/*Ejercicio
Escribe la siguiente expresion como expresion en C++: (a+(b/c-d))*/

#include<iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Coloque un valor para a: "; cin>>a;
    cout<<"Coloque un valor para b: "; cin>>b;
    cout<<"Coloque un valor para c: "; cin>>c;
    cout<<"Coloque un valor para d: "; cin>>d;

    resultado = (a+(b/c-d));
    cout.precision(2);
    cout<<"\nSu resultado es: "<<resultado<<endl;

    return 0;
}
//Resuelto