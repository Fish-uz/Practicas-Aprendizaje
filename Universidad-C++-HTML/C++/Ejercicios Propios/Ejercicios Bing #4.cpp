/* 1) Crea un programa que pida al usuario un número del 1 al 7 y muestre el nombre del día de la semana correspondiente.*/

#include<iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Coloque un numero del 1 al 7: "; cin>>numero;

    switch(numero){
        case 1:cout<<"Lunes";break;
        case 2:cout<<"Martes";break;
        case 3:cout<<"Miercoles";break;
        case 4:cout<<"Jueves";break;
        case 5:cout<<"Viernes";break;
        case 6:cout<<"Sabado";break;
        case 7:cout<<"Domingo";break;
        default:cout<<"No corresponde a ningun numero de la semana";break;
    }

    return 0;
}

/* 2) Crea un programa que pida al usuario un número del 1 al 5 y muestre el nombre de una fruta correspondiente a ese número.*/

#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Coloque un numero del 1 al 5 "; cin>>num;

    switch(num){
        case 1:cout<<"Este numero corresponde a una UVA";break;
        case 2:cout<<"Este numero corresponde a una FRESA";break;
        case 3:cout<<"Este numero corresponde a una MANZANA";break;
        case 4:cout<<"Este numero corresponde a una PARCHITA";break;
        case 5:cout<<"Este numero corresponde a una GUAYABA";break;
        default:cout<<"No reconozco esta fruta :(";
    }
    return 0;
}

/* 3) Crea un programa que pida al usuario un número del 1 al 4 y muestre el nombre de una estación del año correspondiente a ese número.*/

#include<iostream>

using namespace std;

int main(){
    int num;

    cout<<"Coloque un numero del 1 al 4, de las estaciones del año: "; cin>>num;

    switch(num){
        case 1:cout<<"Primavera ";break;
        case 2:cout<<"Verano ";break;
        case 3:cout<<"Otoño ";break;
        case 4:cout<<"Invierno ";break;
        default: cout<<"Solo existen 4 estaciones del año";break;
    }

    return 0;
}