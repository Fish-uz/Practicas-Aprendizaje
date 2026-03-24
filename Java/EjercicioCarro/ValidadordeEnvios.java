package EjercicioCarro;
public class ValidadordeEnvios{ 
    public static void main(String[] arg){

        double pesoPaquete = 30.9;
        boolean tieneEtiqueta = true;
        String tipoDestino = "Internacional";

        if (tieneEtiqueta){
            System.out.println("Paso 1: Aprobado (Posee etiqueta)");

            if(tipoDestino.equals("Nacional")){
                if(pesoPaquete <= 50){
                    System.out.println("Paso 2: Aprobado (Destino Validado)");
                    System.out.println("Paso 3: Aprobado (El Peso no es mayor a 50Kg)");
                    System.out.println("Paso 4: Paquete listo para despacho a destino " + tipoDestino);
                }
                else{
                    System.out.println("Paso 2: Aprobado (Destino Validado)");
                    System.out.println("Paso 3: Rechazado por exceso de Peso Nacional (El Peso es mayor a 50Kg)");
                }
            }
            else if(tipoDestino.equals("Internacional")){
                if(pesoPaquete <= 20){
                    System.out.println("Paso 2: Aprobado (Destino Validado)");
                    System.out.println("Paso 3: Aprobado (El Peso no es mayor a 20Kg)");
                    System.out.println("Paso 4: Paquete listo para despacho a destino " + tipoDestino);
                }
                else{
                    System.out.println("Paso 2: Aprobado (Destino Validado)");
                    System.out.println("Paso 3: Rechazado por exceso de Peso Internacional (El Peso es mayor a 20Kg)");
                }            
            }
            else{
                System.out.println("Error: Destino errado.");
            }
        }
        else{
            System.out.println("Rechazado: Falta de Etiqueta");
        }
    }
}