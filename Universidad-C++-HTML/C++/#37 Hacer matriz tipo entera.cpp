/*Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar todo su contenido a otra matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[2][2] = {{1,2},{3,4}};
    int matriz2[2][2];

    //Pasando el conetido hacia matriz2
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matriz2[i][j] = numeros[i][j];
        }

    }

    //Mostrando matriz2
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            cout<<matriz2[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}

/*Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarlas de numeros aleatorios, copiar el contenido
a otra matriz y por ultimo mostrarla en pantalla*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int matriz[100][100];
    int matriz2[100][100];
    int filas, columnas;
    srand(time(NULL));

    cout<<"Coloque el numero de filas: "; cin>>filas;
    cout<<"Coloque el numero de columnas: "; cin>>columnas;

    //Almacenando los elementos con numeros aleatorios
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            matriz[i][j] = 1 + rand()% (9 +1 -1);
        }
    }

    //Pasando matriz hacia matriz2
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            matriz2[i][j] = matriz[i][j];
        }
    }

    //Mostrando matriz
    cout<<"\nMostrando matriz"<<endl;
     for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz2[i][j]<<" |";
        }
         cout<<"\n";
    }
    
    //Imprimir Matriz Diagonal Principal
    cout<<"\nMatriz Diagonal Principal: ";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
            cout<<matriz[i][j]<<"|";
            }
        }
    }
    
    getch();
    return 0;
}
//Resuelto 