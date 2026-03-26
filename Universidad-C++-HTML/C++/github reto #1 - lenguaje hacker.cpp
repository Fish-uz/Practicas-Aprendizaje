/* Reto #1: EL "LENGUAJE HACKER"
Escribe un programa que reciba un texto y transforme lenguaje natural a
 * "lenguaje hacker" (conocido realmente como "leet" o "1337"). Este lenguaje
 *  se caracteriza por sustituir caracteres alfanuméricos.
 * - Utiliza esta tabla (https://www.gamehouse.com/blog/leet-speak-cheat-sheet/) 
 *   con el alfabeto y los números en "leet".
 *   (Usa la primera opción de cada transformación. Por ejemplo "4" para la "a")*/

#include <iostream>
#include <algorithm>
 using namespace std;

 int main(){
   string texto;
   
   cout<<"Hola, Bienvenido. codificaremos su texto natural, en lenguaje leet: "<<endl; getline(cin,texto);
    /*El gentline se usa para leer cadena de textos, es decir si el texto tiene espacio por lo tanto primero 
    se pone la funcion "getline" luego entre parentesis viene "cin","luego la varible" donde de se va a guardar el texto
    */

   replace(texto.begin(), texto.end(), 'a','4');
   replace(texto.begin(), texto.end(), 'e','3');
   replace(texto.begin(), texto.end(), 'i','!');
   replace(texto.begin(), texto.end(), 'o','0');
   replace(texto.begin(), texto.end(), 'u','u');
   replace(texto.begin(), texto.end(), 'A','4');
   replace(texto.begin(), texto.end(), 'E','3');
   replace(texto.begin(), texto.end(), 'I','!');
   replace(texto.begin(), texto.end(), 'O','0');
   replace(texto.begin(), texto.end(), 'U','U');
  
   cout<<texto<<endl;

    return 0;
 }
 //Resuelto