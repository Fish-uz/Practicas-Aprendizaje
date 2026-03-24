package BatallaJuego;
public class Arquero extends Personaje {
    private int inteligencia;

    public Arquero(String nombre, int vida, int inteligencia) {
        super(nombre,vida);
        this.inteligencia = inteligencia;
    }
    
    public void LanzarFlecha() {
        System.out.println(nombre + " Flecha Flamigera " + inteligencia + " de inteligencia!");
    }
}