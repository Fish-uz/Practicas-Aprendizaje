package EjercicioCarro;
public class Vehiculo {
    private String marca;
    private double precio;

    // Constructor del Padre
    public Vehiculo(String marca, double precio) {
        this.marca = marca;
        this.precio = precio;
    }

    // Getters
    public String getMarca() { return marca; }
    public double getPrecio() { return precio; }

    // Método que todos los hijos heredarán
    public void mostrarInfo() {
        System.out.print("Marca: " + marca + " | Precio: $" + precio);
    }
}