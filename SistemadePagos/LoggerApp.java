package SistemadePagos;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.time.LocalDateTime;

public class LoggerApp {
    private static final String ARCHIVO_LOG = "log_sistema.txt";

    public static void escribirLog(String nivel, String mensaje) {
        try (FileWriter fw = new FileWriter(ARCHIVO_LOG, true);
             PrintWriter pw = new PrintWriter(fw)) {
            
            String fecha = LocalDateTime.now().toString();
            pw.println("[" + fecha + "] [" + nivel + "] " + mensaje);
            
        } catch (IOException e) {
            System.out.println("No se pudo escribir el log: " + e.getMessage());
        }
    }
}