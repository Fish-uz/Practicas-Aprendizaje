//Pasar una palabra a minuscula - Funcion stlwr()
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "APRENDIENDOATS";

    stlwr(palabra);

    cout<<palabra<<endl;


    getch();
    return 0;
}
//Probar con el copilador instalado y no el web

/*Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario
no convertirlo*/

#include<iostream>