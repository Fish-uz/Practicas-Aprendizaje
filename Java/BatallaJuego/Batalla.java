package BatallaJuego;

public class Batalla {
    public static void main(String[] args) {
        Guerrero conan = new Guerrero("Conan", 100, 25);
        Mago gandalf = new Mago("Gandalf", 80, 50);
        Arquero artemisa = new Arquero("Artemisa", 120, 60);

        conan.atacar();        // Método propio del Guerrero
        gandalf.lanzarHechizo(); // Método propio del Mago
        artemisa.LanzarFlecha(); // Metodo propio del Arquero

        // AMBOS pueden usar el método del padre
        conan.recibirDanio(10);
        gandalf.recibirDanio(20);
        artemisa.recibirDanio(15
        );
    }
}