/* Tomas Lillo Silva | [411] EDD | 2020          */
import java.io.*;

public class LineaDetalle {
    //atributes    
    private int cantidad;
    private int precioUnitario;
    private String descripcion;
    //constructors
    public LineaDetalle() {
        cantidad = 0;
        precioUnitario = 0;
        descripcion = " ";
    }

    public LineaDetalle(int cantidad, int precioUnitario, String descripcion) {
        this.cantidad = cantidad;
        this.precioUnitario = precioUnitario;
        this.descripcion = descripcion;
    }

    //setters
    public void set_cantidad(int _cantidad) {
        cantidad = _cantidad;
    }

    public void set_descripcion(String _descripcion) {
        descripcion = _descripcion;
    }

    public void set_precioUnitario(int _precioUnitario) {
        precioUnitario = _precioUnitario;
    }
    //getters
    public int get_cantidad() {
        return this.cantidad;
    }
    public int get_precioUnitario() {
        return this.precioUnitario;
    }

    public String get_descripcion() {
        return this.descripcion;
    }
    //methods
    public int subtotalLinea() {
        int s_total;
        s_total = (get_cantidad() * get_precioUnitario());
        return s_total;
    }

    public void ver() {
        System.out.println("");
    }

}
