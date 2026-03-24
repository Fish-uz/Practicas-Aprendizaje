package SistemadePagos;
import java.util.ArrayList;

public class Tienda {
    public static void main(String[] args) {
        // 1. Log de inicio
        LoggerApp.escribirLog("EVENT", "--- INICIANDO SESIÓN DE TIENDA ---");
        
        ArrayList<MetodoPago> listaPagos = new ArrayList<>();
        listaPagos.add(new TarjetaCredito());
        listaPagos.add(new Paypal());

        // 2. Log de proceso con Streams
        LoggerApp.escribirLog("INFO", "Analizando " + listaPagos.size() + " transacciones.");

        listaPagos.stream().forEach(pago -> {
            BaseDeDatos.insertarPago(pago.getClass().getSimpleName(), 200.00);
            pago.procesarPago(200.00);
            // 3. Log de cada resultado individual
            LoggerApp.escribirLog("SUCCESS", "Pago procesado: " + pago.obtenerEstado());
        });

        // 4. Log de cierre
        BaseDeDatos.mostrarTabla();
        LoggerApp.escribirLog("EVENT", "--- SESIÓN FINALIZADA CORRECTAMENTE ---");
    }
}