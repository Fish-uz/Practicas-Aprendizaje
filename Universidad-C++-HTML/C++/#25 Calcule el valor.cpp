/*Escriba un programa que calcule el valor de 1+2+3+.........+n */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, suma = 0;

    cout<<"coloque el numero de elementos: "; cin>>n;

    for(int i=1;i<=n;i++){ // i=1 Que comience en 1; i=menor o igual a n; i++ incrementa la i uno en uno hasta llegar al numero f.

        suma = suma + i;
    }

      cout<<"La suma tota de los elementos es : "<<suma<<endl;


    getch();
    return 0;
}

/*Ejercicio: Escriba un progama que calcule el valor de 1+3+5+...+2n-1*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int f, suma =0;

    cout<<"Coloque un numero para f: "; cin>>f;

    for(int i=1; i<=f; i+=2){

        suma = suma + i +((2*f)-1);
        cout<<"Los valores son: "<<i<<endl;
    }
    
    cout<<"La suma de los valores es: "<<suma;
 
    getch();
    return 0;
}
// POR RESOLVER