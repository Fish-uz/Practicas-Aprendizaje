/*Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. 
La matriz transpuesta es aquella en la qe la columna "i" , era la fila "i" de la matriz original

{1 2 3}     {1 4 7}
{4 5 6} --> {2 5 8}
{7 8 9}     {2 6 9}*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
        }
    }

    cout<<"\nMatriz Original\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[i][j];
        }
         cout<<"\n";
    }
    cout<<"\n";
    cout<<"Matriz Transpuesta\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[j][i];
        }
         cout<<"\n";
    }

    getch();
    return 0;
}

/*Realice un programa que calcule la suma de dos raices cuadradas de 3x3*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    srand(time(NULL));

    //Almacenando Elementos en la Matriz 1
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz1[i][j] = 1 + rand ()% (9 +1 -1);
        }
    }

    //Mostrado Matriz 1
    cout<<"Matriz 1"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz1[i][j]<<" |";
        }
        cout<<"\n";
    }
        
    //Almacenando Elementos en la Matriz 2
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz2[i][j] = 1 + rand ()% (9 +1 -1);
        }
    }
    
    //Mostrado Matriz 2
    cout<<"\nMatriz 2"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz2[i][j]<<"|";
            
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        cout<<"\n";
    }
    
    //Mostrado Matriz 3
    cout<<"\n"<<"Matriz 3"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matriz3[i][j]<<"| ";
        }
        cout<<"\n";
    }
    
    getch();
    return 0;
}