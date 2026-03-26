/*
 * Escribe un programa que muestre por consola (con un print) los números de 1 a 100
 (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include <iostream>
using namespace std;

int main(){
    int i;
    
    i = 0;

    while(i<=100){ //Imprimir del 0 al 100
    cout<< i <<endl;
    i++;

        if(i % 3 == 0 && i % 5 == 0){ //Coloca Fiz Buzz en multiplos de 3 y 5 al mismo tiempo.
        cout<<"\tFizz Buzz  ";

        }else if (i % 3 == 0){ //Coloca Fizz a multiplos de 3 unicamente
        cout<<"\tFizz  ";
        
        }else if (i % 5 == 0){ //Coloca Buzz a multiplos de 5 unicamente
        cout<<"\tBuzz  ";
        }
    
    }

    return 0;
 }
 //Resuelto