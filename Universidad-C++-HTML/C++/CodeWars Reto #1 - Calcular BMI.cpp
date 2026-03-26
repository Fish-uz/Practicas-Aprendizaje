/* Escriba la función bmi que calcula el índice de masa corporal (bmi = peso / altura 2 ).

si bmi <= 18.5 devuelve "Bajo peso"

si bmi <= 25.0 devuelve "Normal"

si bmi <= 30.0 devuelve "Sobrepeso"

si bmi > 30 devolver "Obeso" */

#include<iostream>

using namespace std;

int main(){
        float peso,altura, bmi = 0;

        cout<<"Coloque su Peso: "; cin>>peso;
        cout<<"Coloque su Altura: "; cin>>altura;

        bmi = peso/(altura*altura);

        if (bmi<=18.5){

            cout<<"\nSu Indice de Masa Corporal es de: "<<bmi; cout<<" Estado: Bajo Peso "<<endl;

        } else if (bmi<=25.0){
            cout<<"\nSu Indice de Masa Corporal es: "<<bmi; cout<<" Estado: Normal "<<endl;

        }else if (bmi<=30.0){
            cout<<"\nSu Indice de Masa Corporal es: "<<bmi; cout<<" Estado: Sobrepeso "<<endl;

        }else if (bmi>30){
            cout<<"\nSu Indice de Masa Corporal es: "<<bmi; cout<<" Estado: Obeso "<<endl;
        }
             cout<<"\nRealizo Por Frank Uzcategui";

    return 0;
}
//Resuelto
