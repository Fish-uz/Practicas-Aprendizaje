package BatallaJuego;
public class Mago extends Personaje {
    private int mana;

    public Mago(String nombre, int vida, int mana) {
        super(nombre, vida);
        this.mana = mana;
    }

    public void lanzarHechizo() {
        System.out.println(nombre + " lanza fuego gastando " + mana + " de mana!");
    }
}