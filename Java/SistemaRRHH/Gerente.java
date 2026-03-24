package SistemaRRHH;
public class Gerente extends Empleado {
    private double bono;

    public Gerente(String nombre, double salarioBase, double bono) {
        super(nombre, salarioBase); // Se los pasamos al padre
        this.bono = bono;
    }

    @Override
    public double calcularSalario() {
        // El salario del gerente es la base + el bono
        return salarioBase + bono; 
    }
}