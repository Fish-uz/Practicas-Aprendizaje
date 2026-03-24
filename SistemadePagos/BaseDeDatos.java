package SistemadePagos;
import java.util.ArrayList;

public class BaseDeDatos {
    // Simulamos la tabla de la base de datos con una lista
    private static ArrayList<String> tablaPagos = new ArrayList<>();

    public static void insertarPago(String metodo, double monto) {
        String registro = "INSERT INTO pagos (metodo, monto) VALUES ('" + metodo + "', " + monto + ");";
        
        // Guardamos el "comando" en nuestra lista
        tablaPagos.add(registro);
        
        // ¡Agregamos un LOG para saber que se guardó!
        LoggerApp.escribirLog("DB-SQL", "Registro insertado: " + registro);
    }

    public static void mostrarTabla() {
        System.out.println("\n--- CONTENIDO DE LA BASE DE DATOS (SQL) ---");
        for (String fila : tablaPagos) {
            System.out.println(fila);
        }
    }
}