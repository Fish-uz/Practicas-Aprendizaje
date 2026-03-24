package EjercicioCarro;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.InputMismatchException;

public class GestionStock {
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        // Mantenemos el nombre con Mayúscula para que coincida con el resto de tu código
        ArrayList<Auto> ListaAutos = new ArrayList<>();

        System.out.println("=== Registro de 3 Autos nuevos ===");

        // 1. Añadimos 'int' antes de la i
        for(int i = 0; i < 3; i++){ 
            try {
                System.out.println("\nVehículo #" + (i + 1));
                System.out.print("Marca: ");
                String marca = lector.nextLine();
                    
                System.out.print("Modelo: ");
                String modelo = lector.nextLine();
                    
                System.out.print("Precio: ");
                double precio = lector.nextDouble();
                    
                lector.nextLine(); // Limpiar el búfer

                Auto nuevo = new Auto(marca, modelo, precio, true);
                  
                // 2. Corregimos 'listaAutos' por 'ListaAutos' (Case Sensitive)
                ListaAutos.add(nuevo);

            } catch (InputMismatchException e) {
                System.out.println("❌ ERROR: El precio debe ser un número decimal.");
                lector.nextLine(); // Limpiamos el error
                i--; // Retrocedemos para repetir el mismo auto
            }
        }

        // Auditoria
        double auditoria = 0;
        for(Auto a : ListaAutos) {
            auditoria += a.getPrecio();
        }

        System.out.println("\n==== Valor Total en Inventario ===");
        System.out.println(auditoria + "$");

        // 3. Verificamos que la lista no esté vacía antes de buscar el primero
        if(!ListaAutos.isEmpty()){
            System.out.println("\nBuscador = Primer Auto: " + ListaAutos.get(0).getMarca() + " " + ListaAutos.get(0).getModelo());
        }
        
        System.out.println("Total de Autos en stock: " + ListaAutos.size());
        
        lector.close();
    }
}