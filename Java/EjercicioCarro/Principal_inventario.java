package EjercicioCarro;
public class Principal_inventario{
    public static void main(String[] args){
        Auto[] inventario = new Auto[5];

        inventario[0] = new Auto("Toyota", "Corolla", 25000, true);
        inventario[1] = new Auto("Tesla","Model 3", 45000, false);
        inventario[2] = new Auto("Ford", "Fiesta", 15000, true);
        inventario[3] = new Auto("Cherokee", "Gran Cherokee", 65000, true);
        inventario[4] = new Auto("Ford", "Silverado", 48000, false);

        double sumaPrecios = 0;

        System.out.println("=== AUTOS NUEVOS, PRECIO < 30000 ===");

        for (int i= 0; i< inventario.length; i++){
            sumaPrecios = sumaPrecios + inventario[i].getPrecio();

            if(inventario[i].isesNuevo() && inventario[i].getPrecio() < 30000){
                inventario[i].mostrarDetalles();
            }
        }

        double promedio = sumaPrecios / inventario.length;

        System.out.println("=== RESUMEN FINANCIERO===");
        System.out.println("Suma total de inventario: " + sumaPrecios + "$");
        System.out.println("Promedio de precios: " + promedio + "$");

        int contadorFord = 0;
        double acumuladorPrecioFord = 0;

        for( Auto temp : inventario){
            if(temp.getMarca().equals("Ford")){

                contadorFord ++;
                acumuladorPrecioFord += temp.getPrecio();
            }  
        }

        System.out.println("\n=== REPORTE DE MARCA: FORD ===");
        System.out.println("Se encontraron " + contadorFord + " Autos Ford");
        System.out.println("Valor total de la flota Ford: " + acumuladorPrecioFord + "$");
    }
}