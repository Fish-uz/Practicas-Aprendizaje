package EjercicioCarro;
public class Auto extends Vehiculo {
    private boolean esNuevo;

    public Auto(String marca, String modelo, double precio, boolean esNuevo) {
        super(marca, modelo, precio); // <--- Llama al constructor de Vehiculo
        this.esNuevo = esNuevo;
    }
}