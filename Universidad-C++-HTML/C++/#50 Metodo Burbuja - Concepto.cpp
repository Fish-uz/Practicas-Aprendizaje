/*METODO BURBUJA
Sencillo algoritmo de ordenamiento.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int matriz[] = {4,1,2,3,5};
    int i,j,aux;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matriz[j] > matriz[j + 1]){
                aux = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = aux;
            }
        }
    }

   cout<<"Orden Ascendente: ";

   for(i=0; i<5; i++){
    cout<<matriz[i]<<" ";

        }

    cout<<"Orden Descendente: ";
    for(i=4; i>=0; i--){
    cout<<matriz[i]<<" ";

        }

    getch();
    return 0;
}