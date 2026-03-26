/*Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas. 
Posteriormente mostras la matriz en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    //Almacenando elementos en la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    //Mostrando la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    
    getch();
    return 0;
}

/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de matriz*/

#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
    int matriz[3][3];
    srand(time(NULL));
    
     //Almacenando elementos en la matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        matriz[i][j] = 1 + rand()%(9 +1 -1);
        }
    }
    
    //Mostrando la matriz
    cout<<"Matriz"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz[i][j];
        }
         cout<<"\n";
    }
    
    //Mostrando Diagonal Principal
    cout<<"\nMatriz Diagonal Principal";
    cout<<"\n"<<matriz[0][0]<<endl;
    cout<<matriz[1][1]<<endl;
    cout<<matriz[2][2]<<endl;
    
    getch();
    return 0;
}
//Resuelto