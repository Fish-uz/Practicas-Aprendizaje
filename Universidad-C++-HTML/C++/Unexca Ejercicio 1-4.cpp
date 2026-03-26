// 1.4 Dados tres números naturales cualesquiera determinar cual es el mayor de los tres

#include <iostream>

using namespace std;

int main(){

    float a,b,c;

    cout<<"Digite 3 numeros: "<<endl; cin>>a>>b>>c;

    if(a > b && a > c){

        cout<<"\nEl valor mayor es: "<<a;
    
    }else if(b > a && b > c){

        cout<<"\nEl valor mayor es: "<<b;

    }else{ 
        cout<<"\nEl valor mayor es: "<<c;
    }    

    return 0;
}

//Resuelto