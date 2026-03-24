package SistemaRRHH;
public class Empleado {
    protected String nombre;
    protected double salarioBase;

    public Empleado(String nombre, double salarioBase){
        this.nombre = nombre;
        this.salarioBase = salarioBase;
    }
    // Método que será heredado y modificado por los hijos
    public double calcularSalario() {
        return salarioBase;
    }

    public void mostrarRecibo() {
        System.out.println("Empleado: " + nombre + " | Salario Final: $" + calcularSalario());
    }
}