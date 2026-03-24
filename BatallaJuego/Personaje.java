package BatallaJuego;
public class Personaje {
    protected String nombre; // 'protected' permite que los hijos lo vean directamente
    protected int vida;

    public Personaje(String nombre, int vida) {
        this.nombre = nombre;
        this.vida = vida;
    }

    public void recibirDanio(int cantidad) {
        this.vida -= cantidad;
        System.out.println(nombre + " recibió " + cantidad + " de daño. Vida restante: " + vida);
    }
}