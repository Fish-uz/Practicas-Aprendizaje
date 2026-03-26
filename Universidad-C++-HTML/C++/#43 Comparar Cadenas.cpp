//Comparar cadenas - Funcion stcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "hola";
    char palabra2[] = "hola";

    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas Cadenas son iguales";
    }

    getch();
    return 0;
}

/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo,
indicar cual es mayor alfabeticamente*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cadena1[999];
    char cadena2[999];

    cout<<"Coloque una cadena de caracteres aqui: "; cin.getline(cadena1,999,'\n');
    cout<<"Coloque otra cadena de caracteres aqui: "; cin.getline(cadena2,999,'\n');

    if(strcmp(cadena1,cadena2)==0){
        cout<<"\nLas cadenas de caracteres son iguales"<<endl;

    }else{
        cout<<"\nLas cadenas de caracteres son diferentes"<<endl;
    }

    if(strcmp(cadena1,cadena2) < 0){
        cout<<"\n"<<cadena1<<"\n\nLa primera cadena va primero alfabeticamente";

    }else{
        cout<<"\n"<<cadena2<<"\n\nLa segunda cadena va primero albafeticamente";
    }

    getch();
    return 0;
}