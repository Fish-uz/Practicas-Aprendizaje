/*Añadir o Concatenar una cadena con otra  - Funcion strcat()*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cat1[] = "Esto es una cadena";
    char cat2[] = " de ejemplo";
    char cat3[30];

    strcpy(cat3,cat1); //cat3 tendria "Esto es un cadena"
    strcat(cat3,cat2);//cat3 tendria ahora "Esto es una cadena de ejemplo", se le agrego la segunda cadena 
    //**Alerta con la funciones strcpy - strcat**

    cout<<cat3<<endl;

    getch();
    return 0;
}

/*Crea una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle 
al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo 
"Hola que tal (NombreDelUsuario)"*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cadena1[] = "Hola que tal, ";
    char cadena2[99];
    char cadena3[99];
    char cadena4[] = " te ves muy bien hoy ;)";
    
    cout<<"Hola que tal! :) Cual es tu nombre?: "; cin.getline(cadena2,99,'\n');
    
    strcpy(cadena3,cadena1);
    strcat(cadena3,cadena2);
    strcat(cadena3,cadena4);
    
    cout<<"\n"<<cadena3<<endl;
    
    getch();
    return 0;
}
//Resuelto