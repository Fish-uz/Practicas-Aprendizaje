Arrays Bidimensionales 
Matriz o Tablas (Filas y Columnas)

Para declarar una matriz en C++ es de la siguiente manera:
    tipo - nombre - [N de filas][N de Columnas];

    int numeros[2][3];
    char letra[3][2];

    Agregar elementos a la matriz:
        int numeros[2][3] = {1,2,3 , 4,5,6}
        El primer numero es para definir Columnas
        El segundo numero es para definir filas
        Despues del igual "=", vas a definir cuales elementos quieres para las filas, para pasar a la otra fila separas los grupos de
        elementos por , 

    Para llamar algun elemento seria como:
        cout<<numero[1][2];  //6
        cout<<numero[0][1]; //2

Otra manera mas entendible de agregar elementos:
    int numeros[2][3] = {{1,2,3} , {4,5,6}};
    El primer numero es para definir Columnas
    El segundo numero es para definir filas
Despues del igual "=", vas a definir cuales elementos quieres para las filas, se agrupa en llaves"{}" y una coma por nada grupo
de elementos. Tambien hace una falta una llave"{}" general para todos los elementos 

Una tercer manera es:
int numeros[2][3] = {1,2,3
                    4,5,6};
Para entender mas como se ocupan las filas. Lo malo de este ultimo metodo, es que te consume mas lineas.

