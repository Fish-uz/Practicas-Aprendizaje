/*=================================================
1) Programa que muestra los números pares hasta 30
===================================================*/
#include<iostream>

using namespace std;

int main(){

int i;

    for(i=0; i<31; i++){

        if(i % 2 == 0){

            cout<<i<<endl;
        }
    }
    
    
    return 0;
}

/*===========================================================
2) Programa que exhibe los veinte primeros números naturales.
=============================================================*/
#include<iostream>

using namespace std;

int main(){

    int i;

    for(i=0; i<=20; i++){

        cout<<i<<endl;
    }

    return 0;
}

/*====================================================================================================== 
3) Programa que lee dos números de tipo float y muestra la suma, resta y multiplicación de esos números.
========================================================================================================*/

#include<iostream>

using namespace std;

int main(){

    float a,b, suma, resta, multiplicacion;

    cout<<"Coloque un valor para A"; cin>>a;
    cout<<"Coloque un valor para B"; cin>>b;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;

    return 0;
}

/*===============================================================
4) Programa que lee un número entero y muestra si es par o impar.
=================================================================*/ 

#include <iostream>

using namespace std;

int main(){

    int f;

    cout<<"Coloque un numeron natural aqui: "; cin>>f;

    if(f % 2 ==0){
        cout<<"Es un numero PAR";
        
    }else
        cout<<"Es un numero IMPAR";

    return 0;
}


/*=======================================================================
5) Programa que lee un número entero y muestra si es positivo o negativo.
=========================================================================*/ 

#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Coloque un numero natural aqui: "; cin>>numero;

    if(numero>0){
        cout<<"El numero es Positivo";

    }else{
        cout<<"El numero es Negativo";
    }

    return 0;
}

