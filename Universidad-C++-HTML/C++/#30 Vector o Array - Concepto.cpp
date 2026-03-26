/*Video de Pura teoria de Vector o Array*/

Para definir un vector se utiliza

Ejemplos

tipo numero[tamaño]; Primero el tipo de de dato(float, int, char), luego el nombre de la variable, por ultimo el tamaño
del vector dentro de corchetes []

int numero[10];
char letras[5];
float reales[15];

Iniciacion de un vector en su definicion. Es decir tu decides cuales valores estaran dentro del vector

int numero[]= {1,4,6,7,3};

El arreglo quedaria mas o menos  1 4 6 7 3 
Posiciones dentro del array     -0 1 2 3 4-

En caso de querar llamar una posicion seria esto:

numero[0]=1; Traeria el numero 1 porque esta en la posicion 0 del array
numero[1]=4: Traeria el numero 4 porque esta en la posicion 1 del array
numero[2]=6; Traeria el numero 6 porque esta en la posicion 2 del array
numero[3]=7; Traeria el numero 7 porque esta en la posicion 3 del array
numero[4]=3; Traeria el numero 3 porque esta en la posicion 4 del array

Ejemplo con caracteres:
Iniciacion de un vector en su definicion

char letra[]= {'a','e','i','o','u'};

El arreglo quedaria mas o menos - a e i o u -
Posiciones dentro del array     - 0 1 2 3 4 - 

En caso de querar llamar una posicion seria esto:

letra[0]= 'a';
letra[1]= 'e';
letra[2]= 'i';
letra[3]= 'o';
letra[4]= 'u';
