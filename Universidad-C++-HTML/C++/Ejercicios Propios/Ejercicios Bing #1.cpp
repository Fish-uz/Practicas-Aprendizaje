/*==========================================
|| Imprimir los números del 1 al 10. ||
============================================*/
#include <iostream>

using namespace std;

int main(){

for(int i=0; i<11; i++){

    cout<<"-->"<<i<<endl;
}   
    return 0;
}

/*===========================================
|| Imprimir los números pares del 1 al 20. ||
=============================================*/

#include <iostream>

using namespace std;

int main() {
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}

/*============================================
|| Imprimir los números impares del 1 al 20. ||
==============================================*/

#include <iostream>

using namespace std;

int main(){
    int i;

    for(i=1; i<=20; i++){
        if(i % 2 == 1){
            cout<< i << endl;
        }

    }

    return 0;
}

/*========================================================
|| Calcular la suma de los primeros 10 números enteros. ||
==========================================================*/

#include <iostream>

using namespace std;

int main(){
    
int suma, f=0;

for(int i=1; i<11; i++){
    
    cout<<"--> "<<i<<endl;
    
    suma = i * i;
    
    f = f + suma;
    
}
    cout<<"\n--> "<<f<<endl;
    
    return 0;
}

/*==========================================================
|| Calcular el producto de los primeros 5 números enteros. ||
============================================================*/

#include <iostream>

using namespace std;

int main(){



    return 0;
}
