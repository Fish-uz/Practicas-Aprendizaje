/* La sentencia Do While

    do{
        conjunto de instrucciones;
    }while(expresion logica);
*/

#include <iostream>
#include <conio.h> //Para poder abrir el ejecutor directamente desde el .exe

using namespace std;

int main(){
    int i;

    i = 1;

    do{

        cout<<i<<endl;
        i++ // Aumenta la variable de 1 en 1

    }while(i<=10);

     getch(); // Es el comando de la libreria conio.h para abrir archivo desde el .exe
    return 0;
}