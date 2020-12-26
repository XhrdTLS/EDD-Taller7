/* Tomas Lillo Silva | [411] EDD | 2020          */
import java.io.*;
public class Factura {
    //atributes
    private int numero;
    private int fecha;
    private String rutCliente;
    private String nombreCliente;
    private int suma_subTotal = 0;
    //constructors
    public Factura(){
        this.fecha = 0;
        this.rutCliente = " ";
        this.nombreCliente =  " ";
    }
    public Factura(int numero, int fecha, String rutCliente, String nombreCliente){
        set_numero(numero);
        set_fecha(fecha);
        set_rutCliente(rutCliente);
        set_nombreCliente(nombreCliente);
    }
    //setters
    public void set_numero(int _numero) {
        numero = _numero;
    }

    public void set_fecha(int _fecha) {
        fecha = _fecha;
    }

    public void set_rutCliente(String _rutCliente) {
        rutCliente = _rutCliente;
    }

    public void set_nombreCliente(String _nombreCliente) {
        nombreCliente = _nombreCliente;
    }

    public void set_subTotal() {
        suma_subTotal = 0;
    }
    //getters
    public int get_numero() {
        return this.numero;
    }

    public int get_fecha() {
        return this.fecha;
    }

    public String get_rutCliente() {
        return this.rutCliente;
    }

    public String get_nombreCliente() {
        return this.nombreCliente;
    }

    public int get_subTotal() {
        return this.suma_subTotal;
    }
    //methods
    public void subTotal(int cantidad, int precio) {
        this.suma_subTotal = this.suma_subTotal + (cantidad * precio);
    }

    public int iva() {
        int iva;
        iva = (int) (get_subTotal() * 0.19);
        return iva;
    }

    public int total() {
        return (get_subTotal() + iva());
    }

    public void addLinea(int cantidad, int precioUnitario, String descripcion) {
        LineaDetalle new_line = new LineaDetalle(cantidad, precioUnitario, descripcion);
        Stack<LineaDetalle> s = new Stack<LineaDetalle>();
        s.push(new_line);
        s.mostrar_stack(s);
    }
    // muestra informacion del cliente
    public void ver() {
        System.out.println("\n==========================================================\n"+
                           "  Factura #" + get_numero() +
                           "\t\t\t  Fecha " + get_fecha() +
                           "\n--------------------- Datos Cliente ---------------------" +
                           "\n   Rut: " + get_rutCliente() +
                           "\n   Nombre: " + get_nombreCliente() +
                           "\n==========================================================\n" +
                           " #\tDescipcion\t\tPrecio\t\tSubtotal\n");
    }
    // muestra los montos finales
    public void ver_final(){
        System.out.println("\n--------------------- Montos Finales ---------------------"
                           + "\n   Subtotal:\t" + get_subTotal()
                           + "\n   IVA 19%:\t" + iva()
                           + "\n   TOTAL:\t" + total()
                           + "\n==========================================================\n");           
    }
}