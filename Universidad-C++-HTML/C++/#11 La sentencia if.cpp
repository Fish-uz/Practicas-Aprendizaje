/*La sentencia if:

    if(condicion){
        instrucciones 1;
    }
    else{
        instrucciones2;
    }
*/ 

#include <iostream>

using namespace std;

int main()
{
    int numero,dato = 5; //Colocando variables

    cout<<"Coloque un numero: "; // Pidiendo al usuario que coloque un digito
    cin>>numero; // el digito del usuario se guardara en la variable numero

    if(numero == dato){ // Se coloca sentensia if(significa "si"), si la variable numero es igual ("==") a dato.
        cout<<"El numero es 5"; // Si esto es verdadero, debera imprimir el siguiente mensaje
    }
    else{ // (Else significa "Si no") Si no es verdadero, debera imprimir el siguiente mensaje
        cout<<"El numero es diferente a 5";

    } 
    /* IMPORTANTE========= 
    Podemos colocar "==" para validar si una variable es igual a otra. 
    Tambien podemos usar "!=" si una variable es diferente a otra.
    Otra cosa a tomar en cuenta, es que tambien podemos usar mayor que, menor que, menor o igual, <,>,==. */

    return 0;
}