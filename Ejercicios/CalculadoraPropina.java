package Ejercicios;

import java.util.Scanner;

public class CalculadoraPropina{
    public static void main(String[] arg){
        Scanner lector = new Scanner(System.in);

        System.out.println("\n***Bienvenido al Restaurante***");
        System.out.println("Elija alguna comida de su agrado en el menu, seleccionando el numero :)");
        System.out.println("***Menu***");
        System.out.println("1. Pollo 15$ \n2. Bistec 12$ \n3. Pescado 13$ \n4. Pasticho 18$ \n5. Ensalada Cesar 6$");

        System.out.println("Seleccione una opcion: ");
        int opcion = lector.nextInt();
        double cuenta = 0;

        if(opcion == 1){
           System.out.println("Has elegido Pollo");
           cuenta += 15;
        }
        else if(opcion == 2){
            System.out.println("Has elegido Bistec");
           cuenta += 12;
        }
        else if(opcion == 3){
            System.out.println("Has elegido Pescado");
           cuenta += 13;
        }
        else if(opcion == 4){
            System.out.println("Has elegido Pasticho");
           cuenta += 18;
        }
        else if(opcion == 5){
            System.out.println("Has elegido Ensalada Cesar");
           cuenta += 6;
        }
        else{
            System.out.println("No has escogido un plato correcto.");
        }

        double porcentajePropina= 0.15;
        double propina = cuenta * porcentajePropina;
        double subtotal = cuenta;
        double total = cuenta + propina;

        System.out.println("\n=== Detalles de su cuenta a pagar ===");
        System.out.println("Sub Total:  " + subtotal);
        System.out.println("Propina del 15%: " + propina);
        System.out.printf("Total a pagar: " + "%.2f",total);
        System.out.println("Gracias por su visita, esperamos verlo pronto ");
    }
}