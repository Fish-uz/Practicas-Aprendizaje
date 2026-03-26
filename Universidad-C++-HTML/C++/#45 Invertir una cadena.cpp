//Invertir una cadena - Funcion strrev()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cad[] = "Frank";

    strrev(cad);

    cout<<cad<<endl;

    getch();
    return 0;
}

//OTRA MANERA DE HACERLO, por si no funciona la anterior 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

  string palabra = "hola";
  string inversa = palabra;
  reverse(inversa.begin(), inversa.end());
  cout << inversa << endl;
  return 0;
}

/*Hacer un programa que determine si una palabra es polindroma*/

#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string cadena;
    string inversa = cadena;

    cout<<"Coloque una palabra: "; cin>>cadena;
    reverse(inversa.begin(), inversa.end());

    cout<<inversa<<endl;

    getch()
    return 0;
}

//Por resolver