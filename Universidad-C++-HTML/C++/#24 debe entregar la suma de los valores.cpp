/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20,-30] o se 
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos*/

#include <iostream>

using namespace std;

int main (){
    int numero, suma = 0;

    do{
        cout<<"Coloque un numero: "; cin>>numero;

        if(numero>0)
            suma += numero;

    }while(((numero<20) || (numero>30)) && (numero !=0));

    cout<<"\nLa suma es: "<<suma<<endl;

    return 0;
}

/*Escriba un programa que calcule x^y, donde tanto X como Y son enteros positivos, sin utilizar la funcion pow */

#include <iostream>
using namespace std;

int main(){
    long long x, y, f, resultado = 1;

    cout<<"Digite un numero para x: "; cin>>x;
    cout<<"Digite un numero para y: "; cin>>y;
    
    f = y;

    while(y !=0){
        
        resultado *= x;
        --y;
    }

    cout << "El resultado de " << x << "^" << f << " es: " << resultado << endl;

    return 0;
}
//Resuelto