package EjercicioCarro;
public class Principal_Auto{
    public static void main(String[] args){
        Auto car1 = new Auto("Toyota","Corolla", 250000, true);
        Auto car2 = new Auto("Tesla","Model 3", 45000, false);

        System.out.println("=== Detalles Iniciales ===");
        car1.mostrarDetalles();
        car2.mostrarDetalles();

        System.out.println("\n=== Aplicando Descuentos ===");
        car1.aplicarDescuento(15);
        car2.aplicarDescuento(5);

        System.out.println("\n=== Detalles Finales ===");
        car1.mostrarDetalles();
        car2.mostrarDetalles();

        System.out.println("Suma de ambos usando GETTERS");
        double sumaTotal = car1.getPrecio() + car2.getPrecio();
        System.out.println("Inversion total en el inventario: " + sumaTotal + "$");

        System.out.println("\nIntentando poner un precio en negativo");
        car1.setPrecio(-500);

        System.out.println("\nIntentando borrar la marca...");
        car2.setMarca("");
    }
}