package EjercicioCarro;
public class InventarioSimple {
    public static void main(String[] args) {
        // 1. Declarar un arreglo de tipo 'Auto' con capacidad para 3
        Auto[] estacionamiento = new Auto[3];

        // 2. Llenar los espacios (Usando el constructor que ya dominas)
        estacionamiento[0] = new Auto("Toyota", "Corolla", 25000, true);
        estacionamiento[1] = new Auto("Tesla", "Model 3", 45000, false);
        estacionamiento[2] = new Auto("Ford", "Mustang", 55000, true);

        // 3. ¿Cómo recorremos 500 autos sin escribir 500 líneas? 
        // BIENVENIDO AL BUCLE 'FOR'
        System.out.println("--- LISTADO DE INVENTARIO ---");
        for (int i = 0; i < estacionamiento.length; i++) {
            // Accedemos al auto en la posición 'i' y llamamos a su método
            estacionamiento[i].mostrarDetalles();
        }
    }
}