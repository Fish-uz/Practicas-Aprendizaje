package Ejercicios;
import java.util.Scanner; // 1. IMPORTAR la herramienta

public class ClubVIP {
    public static void main(String[] arg) {
        // 2. CREAR el objeto Scanner
        Scanner lector = new Scanner(System.in);

        System.out.println("=== BIENVENIDO AL CLUB VIP ===");

        // 3. PEDIR DATOS
        System.out.print("Ingrese su edad: ");
        int edad = lector.nextInt(); // El programa se detiene aquí hasta que presiones Enter

        System.out.print("¿Tiene membresía? (true/false): ");
        boolean tieneMembresia = lector.nextBoolean();
        
        // 4. LÓGICA (Tu código mejorado)
        if (edad >= 18 && tieneMembresia) {
            System.out.println("ACCESO CONCEDIDO: Disfrute la fiesta.");
        } else if (edad < 18) {
            System.out.println("ACCESO DENEGADO: Solo para adultos.");
        } else {
            System.out.println("ACCESO DENEGADO: Requiere comprar membresía.");
        }

        // 5. CERRAR el recurso (Buena práctica de desarrollador Senior)
        lector.close(); 
    }
}