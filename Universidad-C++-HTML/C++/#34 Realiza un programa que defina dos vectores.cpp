/*Realiza un programa que defina dos vectores de caracteres y despues almanece el contenido de ambos vectores en un nuevo
vector, situado en primer lugar los elementos del primer vector seguido por los elementos del segundo vector.
Muestre el contenido del nuevo vector en la salida estandar*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    //Copiando los elementos de letras 1 hacia letra 3

    for(int i=0; i<5; i++){
        letras3[i] = letras1[i];
    }

    //Copiando los elementos de letras2 hacia letra 3

    for(int i=5; i<10; i++){
        letras3[i] = letras2[i -5];

    }

    //Mostrar el nuevo vector - arreglo - array
    for(int i=0; i<10; i++){
        cout<<letras3[i]<<endl;
    }

    getch();
    return 0;
}

/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo mutiplicados por 2 y muestre el segundo arreglo*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int vector[5];
    int vector2[5];

cout<<"Coloque 5 elentos para el arreglo: "<<endl;
    for(int i=0; i<5; i++){
        
        cout<<i<<"--> "; cin>>vector[i];
        
        vector2[i] = vector[i] * 2;
    }
    
    cout<<"\nLa Multiplicacion de los elemento es: "<<endl;
    for(int i=0; i<5; i++){
        
        cout<<vector2[i]<<endl;
    }

    getch();
    return 0;
}
//Resuelto