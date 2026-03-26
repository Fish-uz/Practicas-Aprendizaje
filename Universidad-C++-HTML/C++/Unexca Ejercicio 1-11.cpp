//Determinar si un numero natural es primo

#include<iostream>

using namespace std;


int main(){
    int numero = 0, division = 1, residuo = 0;

    cout<<"Vamos a calcular si un numero es Primo: "<<endl;
    cout<<"Coloque un numero : "; cin>>numero;

    do{
        if(numero % division ==0){
            residuo++;
        }

    }while(division <=numero);

        if(residuo ==2 ){
            cout<<" El numero "<<numero<<"es Primo ";

        }else{
            cout<<" El numero "<<numero<<"no es Primo ";
        }


    return 0;
}
// El programa no imprime si el numero es Primo