package EjercicioCarro;
import java.util.ArrayList;

public class Principal {
    public static void main(String[] args) {
        // Una lista que acepta CUALQUIER tipo de Vehiculo
        ArrayList<Vehiculo> inventario = new ArrayList<>();

        // Añadimos objetos de diferentes clases a la misma lista
        inventario.add(new Auto("Mazda", 25000, true));
        inventario.add(new Camion("Volvo", 85000, 15.5));
        inventario.add(new Auto("Toyota", 18000, false));

        System.out.println("=== INVENTARIO POLIMÓRFICO ===");
        
        for (Vehiculo v : inventario) {
            // Java detecta automáticamente si el vehiculo 'v' 
            // es un Auto o un Camion y usa el método correcto.
            v.mostrarInfo();
        }
    }
}