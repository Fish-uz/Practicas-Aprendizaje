/*Copiar el contenido de una cadena a otra - Funcion strcpy()*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char nombre[] = "Frank";
     char nombre2[20];

    strcpy(nombre2, nombre);

    cout<<nombre2<<endl;

    getch();
    return 0;
}

/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido
hacia otro arreglo de caracteres*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char caracteres[999];
    char caracteres2[999];

    cout<<"Coloque una cadena de caracteres: "; cin.getline(caracteres,999,'\n');

    strcpy(caracteres2,caracteres);

    cout<<caracteres2<<endl;

    getch();
    return 0;
}
//Resuelto