package Ejercicios;
import java.util.Scanner;

public class PiedraPapelTijera {
    public static void main(String[] arg) {
        Scanner lector = new Scanner(System.in);
        String[] opciones = {"Piedra", "Papel", "Tijera"};
        
        int Pb = 0; // Puntos Bot
        int Pp = 0; // Puntos Player
        int opc;    // Opción del usuario

        System.out.println("\n--- ¡Bienvenido al duelo contra el Bot! ---");

        do {
            // El menú solo se escribe una vez dentro del do
            System.out.println("\nEscoge utilizando numeros: \n1. Piedra \n2. Papel \n3. Tijera \n0. Salir");
            opc = lector.nextInt();

            // Si el usuario no marcó salir (0)
            if (opc != 0) {
                
                // 1. Validación de rango
                if (opc < 1 || opc > 3) {
                    System.out.println("⚠️ Opcion errada, intenta del 1 al 3.");
                    
                } else {
                    // 2. Lógica del Bot
                    int indiceBot = (int) (Math.random() * 3);
                    String eleccionbot = opciones[indiceBot];
                    System.out.println("\nEl Bot eligió: " + eleccionbot);

                    // 3. Determinamos el resultado (Lógica resumida)
                    
                    // Caso Empate: El número del player coincide con el índice + 1
                    if (opc == (indiceBot + 1)) {
                        System.out.println("Bot: Tuviste suerte, un empate.");
                        System.out.println("Sistema: Empate.");
                    } 
                    // Casos donde GANA el Player (usando OR ||)
                    else if ((opc == 1 && eleccionbot.equals("Tijera")) || 
                             (opc == 2 && eleccionbot.equals("Piedra")) || 
                             (opc == 3 && eleccionbot.equals("Papel"))) {
                        
                        System.out.println("Bot: ¡Haces trampa! No puedo perder...");
                        Pp++;
                        System.out.println("Sistema: +1 Punto para Player.");
                    } 
                    // Si no fue empate ni ganó el player, ganó el Bot por descarte
                    else {
                        System.out.println("Bot: ¡JAJAJA! Soy superior.");
                        Pb++;
                        System.out.println("Sistema: +1 Punto para Bot.");
                    }

                    // Mostramos puntuación actual
                    System.out.println("\n>>> MARCADOR: Player " + Pp + " | Bot " + Pb);
                }
            }

        } while (opc != 0); // Mientras no sea 0, el juego sigue

        // --- Resultado Final ---
        System.out.println("\n---------------------------");
        System.out.println("Sistema: Juego finalizado.");
        
        if (Pp > Pb) {
            System.out.println("RESULTADO: ¡HAS GANADO LA PARTIDA! 🎉");
        } else if (Pb > Pp) {
            System.out.println("RESULTADO: El Bot te ha derrotado. 🤖");
        } else {
            System.out.println("RESULTADO: Es un empate técnico. 🤝");
        }
        System.out.println("====================================");
    }
}