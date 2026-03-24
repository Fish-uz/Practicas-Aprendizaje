package SistemaRRHH;
public class Repartidor extends Empleado {
    private int paquetesEntregados;

    public Repartidor(String nombre, double salarioBase, int paquetesEntregados) {
        super(nombre, salarioBase);
        this.paquetesEntregados = paquetesEntregados;
    }

    @Override
    public double calcularSalario() {
        // Gana $2 extra por cada paquete
        return salarioBase + (paquetesEntregados * 2);
    }
}