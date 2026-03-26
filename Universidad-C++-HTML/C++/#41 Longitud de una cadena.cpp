/*Longitud de una cadena de caracteres - Funcion strilen()*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}

/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, 
y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[999]; 
    int longitud;

    cout<<"Coloque una cadena de caracteres: "; cin.getline(palabra, 999,'\n');

    longitud = strlen(palabra);
    
    cout<<"\nLongitud de los caracteres: "<<longitud<<endl;

    if(longitud >=10){
        cout<<"\n"<<palabra;
    }
    
    return 0;
}
//Resuelto