/* Determinar el costo de una llamada telefónica partiendo de: 
Toda llamada que dure hasta tres minutos tiene un costo de 100Bsf
por cada minuto adicional se cobran 110Bsf */

#include <iostream>

using namespace std;

int main(){
    float minuto, minuto_adicional, precio_adicional = 110, total;

    cout<<"Cuantos minutos duro en la llamada: "; cin>>minuto;

    if(minuto<=3){
        cout<<"El precio de su llamada es de 100Bsf. ";

    }else if(minuto>3){
        minuto_adicional= minuto - 3; 
        
        total = (precio_adicional * minuto_adicional) + 100;

        cout<<"El precio de su llamada es de"; cout<<total; cout<<"Bsf.";
    }
    
    return 0;
}
//Resuelto