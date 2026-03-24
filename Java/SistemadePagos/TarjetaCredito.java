package SistemadePagos;

public class TarjetaCredito implements MetodoPago {
    private String estado;

    @Override
    public void procesarPago(double monto) {
        LoggerApp.escribirLog("INFO", "Procesando tarjeta...");
        this.estado = "PAGO EXITOSO CON TARJETA";
        System.out.println("Cobrando " + monto + "$ de la tarjeta.");
    }

    @Override
    public String obtenerEstado() {
        return this.estado;
    }
}