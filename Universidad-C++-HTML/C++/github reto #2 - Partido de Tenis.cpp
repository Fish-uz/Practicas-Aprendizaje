/* 
* Escribe un programa que muestre cómo transcurre un juego de tenis y quién lo ha ganado.
 * El programa recibirá una secuencia formada por "P1" (Player 1) o "P2" (Player 2), según quien
 * gane cada punto del juego.
 * 
 * - Las puntuaciones de un juego son "Love" (cero), 15, 30, 40, "Deuce" (empate), ventaja.
 * - Ante la secuencia [P1, P1, P2, P2, P1, P2, P1, P1], el programa mostraría lo siguiente:
 *   15 - Love
 *   30 - Love
 *   30 - 15
 *   30 - 30
 *   40 - 30
 *   Deuce
 *   Ventaja P1
 *   Ha ganado el P1
 * - Si quieres, puedes controlar errores en la entrada de datos.   
 * - Consulta las reglas del juego si tienes dudas sobre el sistema de puntos.
*/
#include <iostream>

using namespace std;

int main(){
    int P1, P2, love, empate, puntuacion, punto_positivo = 30, punto_negativo = 0;

    cout<<"Comienza el Partido de Tenis, coloca aqui la cantidad de anotaciones de cada jugador! "<<endl;
    cout<<"Quien anoto los primeros puntos en esta primera ronda?: "<<endl;
    cout<<"1. Jugador P1"<<endl;
    cout<<"2. Jugador P2"<<endl;
    cout<<"\nPuntuacion"<<endl; cin>>puntuacion ;

   switch(puntuacion){ 
        case 1: P1 = 30, P2 = 0;
        cout<<"La cuenta va 30PTS P1 - P2 LOVE "<<endl;
        cout<<"Ventaja para el P1 "<<endl;break;

        case 2: P1 = 0, P2 = 30;
        cout<<"Ventaja del P2 "<<endl;
        cout<<"La cuenta va P1 LOVE - 30PTS P2"<<endl;break;
    }

    cout<<"\nQuien anoto los primeros puntos en esta segunda ronda?: "<<endl;
    cout<<"1. Jugador P1"<<endl;
    cout<<"2. Jugador P2"<<endl;
    cout<<"\nPuntuacion "; cin>>puntuacion;
    
    if(P1>P2){
        P1 += 30;
        cout<<" La cuenta va "<<P1<<"PTS - "<<P2;
    if(P2>P1)
        P2 += 30;
    }else cout<<" P1 - DEUCE - P2";

     
    return 0;
}
//Resuelto