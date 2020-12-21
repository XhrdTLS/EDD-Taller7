/* Tomas Lillo Silva | [411] EDD | 2020          */
#include "Factura.h"
#include "LineaDetalle.h"
//constructors
Factura::Factura(){
    this->fecha = 0;
    this->rutCliente = ' ';
    this->nombreCliente =  ' ';
}
Factura::Factura(int _numero, int _fecha, string rut_cliente, string nombre_cliente){
    set_numero(_numero);
    set_fecha(_fecha);
    set_rutCliente(rut_cliente);
    set_nombreCliente(nombre_cliente);
}
Factura::~Factura(){}
//setters
void Factura::set_numero(int _numero){
    numero = _numero;
}
void Factura::set_fecha(int _fecha){
    fecha = _fecha;
}
void Factura::set_rutCliente(string rut_cliente){
    rutCliente = rut_cliente;
}
void Factura::set_nombreCliente(string nombre_cliente){
    nombreCliente = nombre_cliente;
}
//getters
int Factura::get_numero(){
    return this->numero;
}
int Factura::get_fecha(){
    return this->fecha;
}
string Factura::get_rutCliente(){
    return this->rutCliente;
}
string Factura::get_nombreCliente(){
    return this->nombreCliente;
}
//methods
int Factura::iva(){
    int iva;
    iva = (get_precio_unitario())*0.19;
    return iva;
}
int Factura::subTotal(){
}
int Factura::total(){
}
/*se formula un struct para mostrar los mismos
elementos en la misma linea*/
struct linea_detalle{
    int cant;
    int precio;
    int cant_precio; //calculo de subTotal();
    string descrip;
};

void Factura::addLinea(int _cantidad, int precio_unitario, string _descripcion){
    LineaDetalle new_line(_cantidad, precio_unitario, _descripcion);
    linea_detalle line;
    line.cant = get_cantidad();
    line.precio = get_precio_unitario();
    line.cant_precio = subTotal();
    line.descrip = get_descripcion();
    Stack<linea_detalle> s;
    s.push(line);
    s.mostrarStack(s);
}
void Factura::ver(){
    /*pruebas ver()
    cout << "\n\t" << get_numero()
         << "\n\t" << get_fecha()
         << "\n\t" << get_rutCliente()
         << "\n\t" << get_nombreCliente();*/
    //datos factura
        cout << "\n=========================================================\n"
             << "  Factura #" << get_numero()
             << "\t\t\t\tFecha " << get_fecha()
             << "\n--------------------- Datos Cliente ---------------------"
             << "\n   Rut: " << get_rutCliente()
             << "\n   Nombre: " << get_nombreCliente()
             << "\n=========================================================\n"
             << " #\tDescipcion\t\tPrecio\t\tSubtotal\n";
        /*while (/*stack != NULL){
        //se deben colocar descipciones entre 8 - 16 digitos.
        //<< " [Cant]\t[8-16 digitos]\t\t[precio]\t\t[Subtotal]";
            /*jejeje
        }*/

}
