// 1) Imprime los números pares del 1 al 20 utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int i;

    i=1;

    while(i<=20){

        if(i%2 ==0){
            cout<<i<<endl;

        }
            
        i++;
    }

    return 0;
}

// 2) Imprime los números impares del 1 al 20 utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int i;

    i=1;

    while(i<=20){

        if(i%2 !=0){
            cout<<i<<endl;        
        }

        i++;
    }
    return 0;
}

// 3) Imprime la tabla de multiplicar del número 10 utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int f,i;

    f=1;

    while(f<=5){
        i= f * 5;

        cout<<f<<"x"<<"5 = "<<i<<endl;
        f++;
    }
        
    return 0;
}

// 4) Pide al usuario que ingrese un número y muestra la suma de los números desde el 1 hasta ese número utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int f, i=1, suma;
    cout<<"Coloque un numero aca: "; cin>>f;

    while(i<=f){

        suma = i + f;
        cout<<i<<" + "<<f<<" = "<<suma<<endl;
        i++;
    }

    return 0;
}

// 5) Pide al usuario que ingrese un número y muestra la suma de los números pares desde el 1 hasta ese número utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int f, i=1, suma;

    cout<<"Coloque un numero aca: "; cin>>f;

    while(i<=f){
        if(i%2 == 0){
            suma = i + f;
            cout<<i<<" + "<<f<<" = "<<suma<<endl;
        }
        
        i++;
    }

    return 0;
}

// 6) Pide al usuario que ingrese un número y muestra la suma de los números impares desde el 1 hasta ese número utilizando un ciclo While.

#include<iostream>

using namespace std;

int main(){

    int f, i=1, suma;
    cout<<"Coloque un nuevo aca: "; cin>>f;

    while(i<=f){

        if(i%2 !=0){
            suma = i + f;
            cout<<i<<" + "<<f<<" = "<<suma<<endl;
        }
    i++;
    }
    
    return 0;
}

// 7) Pide al usuario que ingrese un número y muestra la tabla de multiplicar de ese número utilizando un ciclo while.

#include<iostream>

using namespace std;

int main(){
    int f, i=1, multiplicacion;
    cout<<"Coloque un numero aca: "; cin>>f;

    while(i<=f){
        
        multiplicacion = i * f;
        cout<<i<<" x "<<f<<" = "<<multiplicacion<<endl;

        i++
    }

    return 0;
}