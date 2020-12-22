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
int Factura::total(){
}
void Factura::addLinea(int _cantidad, int precio_unitario, string _descripcion){
    LineaDetalle new_line(_cantidad, precio_unitario, _descripcion);
    Stack<LineaDetalle> s;
    s.push(new_line);
    s.mostrar_stack(s);
}
void Factura::ver(){
        cout << "\n=========================================================\n"
             << "  Factura #" << get_numero()
             << "\t\t\t\tFecha " << get_fecha()
             << "\n--------------------- Datos Cliente ---------------------"
             << "\n   Rut: " << get_rutCliente()
             << "\n   Nombre: " << get_nombreCliente()
             << "\n=========================================================\n"
             << " #\tDescipcion\t\tPrecio\t\tSubtotal\n";
}
