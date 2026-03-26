/*Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta

{8 1 3}        {8 1 3}
{1 7 4}  -->   {1 7 4}
{3 4 9}        {3 4 9} */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char band='F';

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }
    }

    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){
                    band = 'V';
                }
            }
        }
    }

    if(band == 'V'){
        cout<<"La matriz es simetrica";
    }else{
        cout<<"La matriz no es simetrica";
    }

    getch();
    return 0;
}

/*Realice un programa que calcule el producto de dos matrices cuadradas de 3*3*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int matriz1[3][3], matriz2[3][3], producto;
    srand(time(NULL));

    //Almacenando matriz 1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz1[i][j] = 1 + rand()% (9 +1 -1);
        }
    }
    
    //Mostrando matriz 1
    cout<<"Matriz 1"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz1[i][j];
        }
        cout<<"\n";
    }
    
    //Almacenando matriz 2
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz2[i][j] = 1 + rand()% (9 +1 -1);
        }
    }
    
    //Mostrando matriz 2
    cout<<"\nMatriz2"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz2[i][j];
            
            producto = matriz1[i][j] * matriz2[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"\nEl producto de las matrices es: "<<producto;

    getch();
    return 0;
}
//Resuelto