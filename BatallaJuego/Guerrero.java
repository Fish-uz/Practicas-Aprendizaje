package BatallaJuego;
public class Guerrero extends Personaje {
    private int fuerza;

    public Guerrero(String nombre, int vida, int fuerza) {
        super(nombre, vida); // Enviamos el nombre y vida al constructor del padre
        this.fuerza = fuerza;
    }

    public void atacar() {
        System.out.println(nombre + " ataca con una fuerza de " + fuerza + "!");
    }
}