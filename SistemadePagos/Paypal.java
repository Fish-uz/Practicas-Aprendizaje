package SistemadePagos;

public class Paypal implements MetodoPago{
    private String estado;

    @Override
    public void procesarPago(double monto){
        System.out.println("[LOG - INFO] Conectando con el banco...");
        this.estado = "PAGO EXITOSO";
        System.out.println("Cobrando" + monto + "$ de la tarjeta.");
    }

    @Override
    public String obtenerEstado(){
        return this.estado;
    }
}
