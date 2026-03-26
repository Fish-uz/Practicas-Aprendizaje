/*Pasar una palabra a Mayuscula - Funcion strupr()*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
    char palabra[] = "frank";

    strupr(palabra);

    cout<<palabra<<endl;

    getch();
    return 0;
}


//Otra forma es con la funcion transform() con la libreria algorithm

/*Pasar una palabra a Mayuscula - Funcion transform()*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    char palabra[] = "frank";

    transform(palabra, palabra + strlen(palabra), palabra, ::toupper);

    cout<<palabra<<endl;

    getch();
    return 0;
}

/*Convertir dos cadenas de minisculas a MAYUSCULAS. Compararlas, y decir si son iguales o no*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    char cadena1[999];
    char cadena2[999];

    cout<<"Coloque una Primera cadena de caracteres en minuscula: "; cin.getline(cadena1,999,'\n');
    cout<<"Coloque una Segunda cadena de caracteres en minuscula: "; cin.getline(cadena2,999,'\n');

    transform(cadena1, cadena1 + strlen(cadena1), cadena1, ::toupper);
    transform(cadena2, cadena2 + strlen(cadena2), cadena2, ::toupper);

    cout<<"\n"<<cadena1<<endl;
    cout<<cadena2<<endl;

    if(strcmp(cadena1,cadena2)==0){
        cout<<"\nAmbas Cadenas son Iguales";

    }else{
        cout<<"\nAmbas cadenas son diferentes";
    }


    getch();
    return 0;
}
//Resuelto