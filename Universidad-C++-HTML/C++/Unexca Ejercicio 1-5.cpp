 /* 1.5 Dado un conjunto de 100 números naturales determinar cuantos están entre 25 y 35, 
cuantos son mayores a 30, cuantos menores de 12, hallar promedio general */

#include <iostream>

using namespace std;

int main(){

    int contador_25y35 = 0; //Contar numeros entre 25 y 35
    int contador_mayores_a30 = 0; // Contar numeros mayores a 30
    int contador_menores_a12 = 0; // contar numeros menores a 12
    float promedio; // Para sacar el promedio general

    for(int i=1; i<=100; i++){
        
        cout<<i<<endl; //Imprimira los 100 numeros del ciclo for

        if(i>=25 && i<=35){
            contador_25y35 = contador_25y35+ 1;

        }if(i>30){
            contador_mayores_a30 = contador_mayores_a30+ 1;

        }if(i<12){
            contador_menores_a12 = contador_menores_a12+ 1;

        }
       
    }

    promedio = (contador_25y35 + contador_mayores_a30 + contador_menores_a12) / 3;
    
    
    cout<<"\nTotales entre mayores a 25 y menores a 35 son : "<<contador_25y35<<endl;
    cout<<"Totales mayores a 30 son : "<<contador_mayores_a30<<endl;
    cout<<"Totales menores a 12 son : "<<contador_menores_a12<<endl;
    cout<<"Promedio de los numeros es: "<<promedio<<endl;

    return 0;
}
//Resuelto