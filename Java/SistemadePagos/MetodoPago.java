package SistemadePagos;

public interface MetodoPago {
    void procesarPago(double monto);
    String obtenerEstado();
}
