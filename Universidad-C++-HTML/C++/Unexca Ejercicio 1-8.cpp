/*Imprimir la población de dos países A y B teniendo en cuenta: 
- En el año cero el país A tiene menos población que el país B, las tasas de crecimiento de los países es para A crece 
a un 6% anual y para B a un 3% anual. 
Se debe imprimir las poblaciones de A y B desde el año 0 hasta que el país A exceda la población del país B.*/

#include <iostream>
using namespace std;

int main() {
    int Pais_A = 100;
    int Pais_B = 200;
    int anio = 0;

    while (Pais_A <= Pais_B) {
        cout << "Año " << anio << ": Pais A = " << Pais_A << ", Pais B = " << Pais_B << endl;
        Pais_A *= 1.06; // Tasa de crecimiento del 6% anual para A
        Pais_B *= 1.03; // Tasa de crecimiento del 3% anual para B
        anio++;
    }

    return 0;
}
//Resuelto - AI

