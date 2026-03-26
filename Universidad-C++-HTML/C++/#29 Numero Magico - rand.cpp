/*Realice un programa que solicite al usuario que piense un numero entero entre 1 y 100.
el programa debe generar un numero aleatorio en ese mismo rango(1-100), e indicarle al usuario
si el numero que digito es menor o mayor al numero aleatorio, asi hasta que adivine y por ultimo mostrarle
el numero de intentos que le llevo*/

// variable = limite_inferior + rand() %  (limite_superior +1 - limite_inferior);

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int numero, dato, contador= 0;

    srand(time(NULL)); //Se encarga de generar el dato aleatoriamente
    dato = 1 + rand()% (100 + 1 - 1);

    do{
        cout<<"Coloque un numero: "; cin>>numero;
        
        if(numero>100){
            cout<<"\nAmigo calmese, solo es hasta el 100\n";
        }

        if(numero>dato){
            cout<<"\nDigite un numero menor\n";

        }if(numero<dato)
            cout<<"\nDigite un numero mayor\n";
        contador++;

    }while(numero != dato);

    cout<<"\nFelicidades Adivinastes el numero :)\n";
    cout<<"Numero de intentos: "<<contador<<endl;

    system("pause");
    return 0;
}

/*Ejercicio: Realice un programa que calcule la decomposicion en factores primos de un numero entero
Por ejemplo: 20 = 2*2*5*/

#include<iostream>
#include<>