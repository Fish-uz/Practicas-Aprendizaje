/*1.12 Imprimir el capital que tiene cada año una cuenta de ahorros teniendo en cuenta que cada año se depositan 500Bsf. 
La cuenta produce un 7% de interés anual. La información se requiere para 10 años.*/

#include <iostream>
using namespace std;

int main() {
    float capital = 0;
    float interes_anual = 1.07;
    float deposito_anual = 500;

    for (int i = 1; i <= 10; i++) {
        capital = capital * interes_anual + deposito_anual;
        cout << "Capital al final del año " << i << ": " << capital << " Bsf" << endl;
    }

    return 0;
}
//Resuelto - AI