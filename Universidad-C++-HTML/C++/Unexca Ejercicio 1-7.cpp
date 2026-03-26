/*Dados N números naturales imprimir solo los que cumplan los siguientes criterios: los números deben ser
 mayores a 8 y menores a 30 no se deben imprimir los números 14 y 16 detenerse cuando el numero introducido sea 0.*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un número natural: "; cin>>numero;
    
    while (numero != 0) {
        
        if(numero >8 && numero <30 && numero !=14 && numero !=16) {
            
            cout <<":::El valor ingresado es::: "<<numero<<endl;
        }
        
        cout << "\nIngrese otro número natural: "; cin >> numero;
    }
    
    return 0;
}
// Resuelto