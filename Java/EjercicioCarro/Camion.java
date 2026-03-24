package EjercicioCarro;
public class Camion extends Vehiculo {
    private double toneladas;

    public Camion(String marca, double precio, double toneladas) {
        super(marca, precio); // Le enviamos los datos al padre
        this.toneladas = toneladas;
    }

    @Override
    public void mostrarInfo() {
        super.mostrarInfo(); // Imprime marca y precio
        System.out.println(" | Carga: " + toneladas + " Toneladas");
    }
}