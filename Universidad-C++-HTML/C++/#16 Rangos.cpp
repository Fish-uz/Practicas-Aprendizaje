/*Escriba un programa que solicite una edad (un entero) e indique en la salida estandar si la edad introducida esta 
en el rango [18-25].*/

#include <iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Coloque su edad: "; cin>>edad;

    if((edad>=18)&&(edad<=25)){

        cout<<"Su edad esta en el rango de 18-25";
    } 
    else{
        cout<<"Su edad esta fuera de rango";
    }
    return 0;
}

/*Esciba un programa que lea de la entrada estandar tres numeros. Despues de leer un cuarto numero e indicar si el numero
coincide con alguno de los introducidos anteriores*/

#include <iostream>

using namespace std;
    int main(){
        int a,b,c,d;

        cout<<"Digite tres numeros: "; cin>>a>>b>>c;
        cout<<"Digite un cuarto numero: "; cin>>d;

        if(d==a){
            cout<<"El primer numero es igual al cuarto numero";

        }else if(d==b){
            cout<<"El segundo numero es igual al cuarto numero";

        }else if (d==c){
                cout<<"El tercer numero es igual al cuarto numero";

        }else
            cout<<"Ningun numero coincide con el cuarto numero";
    return 0;    
    }
    //Resuelto