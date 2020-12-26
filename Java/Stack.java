/* Tomas Lillo Silva | [411] EDD | 2020          */
import java.io.*;

public class Stack<tipo> {

    private java.util.Stack<tipo> stack_temp;

    public Stack() {
        stack_temp = new java.util.Stack<tipo>();
    }

    public void push(tipo valor) {
        stack_temp.push(valor);
    }

    public tipo pop() {
        return stack_temp.pop();
    }

    public boolean empty() {
        return stack_temp.isEmpty();
    }
    
    //muestra el stack
    public static void mostrar_stack(Stack<LineaDetalle> s) {
        Stack<LineaDetalle> aux = new Stack<LineaDetalle>();
        while (!s.empty()) {
            LineaDetalle temp = s.pop();
            aux.push(temp);
            System.out.print(" " + temp.get_cantidad() + "\t" 
                            + temp.get_descripcion() + "\t\t"
                            + temp.get_precioUnitario() + "\t\t" 
                            + temp.subtotalLinea() + "\n");
        }
        while (aux.empty() == false) {
            s.push(aux.pop());
        }
    }
}