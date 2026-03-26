Es una colecciond e uno a mas tipos de elementos denominados campos, cada uno de los cuales uede ser un tipo de dato diferente.

Supongamos que se desea almacenar los datos de una coleccion de discos compactos (CD) de musica. Estos datos pueden ser:

Titulo, Artista, Numero de Canciones, Precio, Fecha de Compra.

Como se declara una estructura en C++

struct NombreDeLaEstructura{
    TipodeDato NombredeCampo
    TipodeDato NombredeCampo
    TipodeDato NombredeCampo
    ...
    TipodeDato NombredeCampo
}; //Importante el " ; " al final de la llave

//Ejemplo

struct coleccion_cd{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
};


