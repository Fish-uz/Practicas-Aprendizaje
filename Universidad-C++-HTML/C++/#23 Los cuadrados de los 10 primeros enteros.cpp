/*Realice un programa que calcule y muestre en la salida estandar la suma
de los cuadrados de los 10 primeros enteros mayores que cero*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int suma = 0, cuadrado;

    for(int i=1; i<=10; i++){

        cuadrado = i * i;
        suma += cuadrado; // <-- Es lo mismo que colocar suma = suma + cuadrado. Se coloca como en la primera parte, para acortar el codigo

    }

        cout<<"El resultado de la suma es : "<<suma<<endl;
    getch();
    return 0;
}

/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir
debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura mas alta y la mas baja*/

