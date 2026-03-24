package SistemaRRHH;
import java.util.ArrayList;

public class SistemaRRHH {
    public static void main(String[] args) {
        // Una lista de 'Empleados' que puede guardar Gerentes y Repartidores
        ArrayList<Empleado> nomina = new ArrayList<>();

        // TU RETO:
        // 1. Añade un Gerente a la lista (ej: "Arianne", base 3000, bono 1000).
        // 2. Añade un Repartidor (ej: "Juan", base 1200, 150 paquetes).
        // 3. Usa un bucle for-each para recorrer la 'nomina'.
        // 4. Llama al método 'mostrarRecibo()' de cada uno.

        nomina.add(new Gerente("Arianne",3000, 1000));
        nomina.add(new Repartidor("Frank", 2000, 400));
        
        System.out.println("=== REPORTE DE NÓMINA MENSUAL ===");
        for (Empleado e : nomina ){
            e.mostrarRecibo();
        }
        System.out.println("Total empleados en nomina: " + nomina.size());    
    }
}