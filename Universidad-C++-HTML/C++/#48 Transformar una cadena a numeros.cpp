//Transformar una cadena a numeros - Funcion atoi() y atof()

//"123" en cadena -> 123 enteros

//Ejemplo funcion atoi()
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "123";
    int numero;

    numero = atoi(cad);

    cout<<cad<<endl;


    getch();
    return 0;
}

//Ejemplo funcion atof() para numeros con decimales
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "123,468";
    float numero;

    numero = atof(cad);

    cout<<cad<<endl;


    getch();
    return 0;
}

/*Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, 
convertirlos a sus respectivos valores y por ultimo sumarlos*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
    char numero[10];
    char numero2[10];
    int valor1;
    float valor2;
    float suma;

    cout<<"Coloque un numero entero: "; cin>>numero;
    cout<<"Coloque un numero flotante: "; cin>>numero2;

    valor1 = atoi(numero);
    valor2 = atof(numero2);

    suma = valor1 + valor2;
    
    cout.precision(2);
    cout<<std::fixed;
    cout<<"\nLa suma de los valores es: "<<suma<<endl;

    getch();
    return 0;
}