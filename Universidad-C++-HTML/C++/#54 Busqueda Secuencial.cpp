/*Busqueda Secuencial - Busqueda Binario - Busqueda en Arreglos*/

//a[5] = {3,4,2,1,5} dato = 4; Buscar si realmente el numero 4 pertenece al arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5};
    int i, dato;
    char band = 'F';

    dato = 4;

    //Busqueda Secuencial
    i=0;
    while((band =='F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arrelgo"<<endl;

    }else if(band == 'V') {
        cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;

    }

    getch();
    return 0;
}

/*Ejemplo busqueda e caracteres*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char a[] = {'e','i','a','u','o'},dato;
    int i;
    char band = 'F';

    dato = o;

    //Busqueda Secuencial
    i=0;
    while((band =='F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arrelgo"<<endl;

    }else if(band == 'V') {
        cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;

    }

    getch();
    return 0;
}