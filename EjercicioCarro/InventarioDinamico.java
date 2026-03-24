package EjercicioCarro;
    import java.util.ArrayList;

public class InventarioDinamico {
    public static void main(String[] args) {
        
        // 1. Declaración: ArrayList<TipoDeDato> nombre = new ArrayList<>();
        ArrayList<Auto> listaAutos = new ArrayList<>();

        // 2. Añadir elementos (¡Sin preocuparte por el índice!)
        listaAutos.add(new Auto("Toyota", "Corolla", 25000, true));
        listaAutos.add(new Auto("Tesla", "Model 3", 45000, false));
        
        // 3. ¿Llegó un Ford? Lo añadimos al final
        listaAutos.add(new Auto("Ford", "Fiesta", 15000, true));

        // 4. ¿Se vendió el Tesla? (Es el índice 1)
        System.out.println("Vendiendo el Tesla...");
        listaAutos.remove(1); 

        // 5. Recorrer la lista (El for-each funciona IGUAL)
        System.out.println("--- INVENTARIO ACTUALIZADO ---");
        for (Auto a : listaAutos) {
            a.mostrarDetalles();
        }

        System.out.println("Total de autos en stock: " + listaAutos.size());
    }
}