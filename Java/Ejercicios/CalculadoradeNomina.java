package Ejercicios;
import java.util.Scanner;

public class CalculadoradeNomina {
     public static void main(String[] arg){
        Scanner lector = new Scanner(System.in);

        System.out.println("=== Calculadora ===");
        
        System.out.println("Digite su nombre: ");
        String nombre = lector.nextLine();
        
        System.out.println("\nDigite su horas trabajadas: ");
        int horas = lector.nextInt();

        System.out.println("\nDigite horas pagadas: ");
        double pago = lector.nextDouble();

        double sueldo_bruto = horas * pago;
        double impuesto = 0;
        double bono = 0;

        if(sueldo_bruto > 2000){
            impuesto = sueldo_bruto * 0.10;
            System.out.println("Su sueldo es mayor a 2000$. Le toca un puesto del 10%" + "Por lo tanto se descontara: " + impuesto);
        }

        if(horas > 160){
            bono = 150;
        }

        double sueldoNeto = sueldo_bruto - impuesto + bono;
        
         // SALIDA DE DATOS
        System.out.println("\n=== RESUMEN DE PAGO PARA: " + nombre + " ===");
        System.out.println("Sueldo Bruto: " + sueldo_bruto + "$");
        System.out.println("Descuento (10% Impuesto): - " + impuesto + "$");
        System.out.println("Bono por horas extra: + " + bono + "$");
        System.out.println("---------------------------------------");
        System.out.println("SUELDO NETO A RECIBIR: " + sueldoNeto + "$");

        lector.close(); // Siempre cerrar el recurso
     }
}