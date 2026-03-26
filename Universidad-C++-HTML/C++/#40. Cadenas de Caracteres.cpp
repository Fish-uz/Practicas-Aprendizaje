//Cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Frank"; //Primera forma de guardar una cadena de caracteres
    char palabra2[] = {'F','r','a','n','k','\0'};//Segunda forma de guardar una cadena de caracteres
    char nombre[20];
    
    cout<<"Digite su nombre: "; 
     
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;

    getch();
    return 0;
}