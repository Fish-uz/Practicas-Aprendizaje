/*=================================================================================================================
La Sentencia While
    While (Expresion Logica)
    {
        conjunto de instrucciones;
    }
=================================================================================================================*/

#include <iostream>
#include <conio.h> //Para poder abrir el ejecutor directamente desde el .exe
using namespace std;

//En este caso el codigo imprime numeros del 1 hasta el 10

int main(){
    int i;

    i=1;

    while(i<=10){
        cout<<i<<endl;
        i++; // es igual a poner i = i + 1
    }

    getch(); // Es el comando de la libreria conio.h para abrir archivo desde el .exe
    return 0;
}

//=================================================================================================================
//Ahora aplicamos la sentencia While para que imprima los numeros pero de manera inversa (10 retroceso hasta el 1)
//=================================================================================================================

#include <iostream>
#include <conio.h> //Para poder abrir el ejecutor directamente desde el .exe

using namespace std;

int main(){
    int i;

    i=10;

    while(i>=1){
        cout<<i<<endl;
        i--;
    }

    getch(); // Es el comando de la libreria conio.h para abrir archivo desde el .exe
    return 0;
}