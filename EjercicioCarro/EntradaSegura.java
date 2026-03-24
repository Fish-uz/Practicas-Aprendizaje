package EjercicioCarro;
import java.util.Scanner;
import java.util.InputMismatchException; // Importante para captar el error de teclado

public class EntradaSegura {
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        
        String marca;
        double precio = 0;
        boolean datoValido = false; // Bandera para controlar el bucle

        System.out.print("Ingrese la marca del auto: ");
        marca = lector.nextLine();

        // BUCLE DE VALIDACIÓN ROBUSTA
        while (!datoValido) {
            try {
                System.out.print("Ingrese el precio: ");
                precio = lector.nextDouble(); 
                
                // Si llegamos aquí, es porque nextDouble() no falló
                if (precio > 0) {
                    datoValido = true; // Salimos del bucle
                } else {
                    System.out.println("Error: El precio debe ser mayor a 0.");
                }
                
            } catch (InputMismatchException e) {
                System.out.println("¡ERROR! Debes ingresar un número decimal (usa coma o punto según tu PC).");
                lector.nextLine(); // LIMPIEZA DE BÚFER (Crucial en Java)
            }
        }

        Auto nuevoAuto = new Auto(marca, "Modelo Genérico", precio, true);
        nuevoAuto.mostrarDetalles();
        
        lector.close();
    }
}