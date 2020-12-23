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
    set_subTotal(0);
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
int Factura::get_subTotal(){
    return suma_subTotal;
}
//methods
float Factura::iva(){
    float iva;
    iva = (get_subTotal()*0.19);
    return iva;
}
int Factura::total(){
    return (get_subTotal() + iva());
}
void Factura::addLinea(int _cantidad, int precio_unitario, string _descripcion){
    LineaDetalle new_line(_cantidad, precio_unitario, _descripcion);
    subTotal(_cantidad, precio_unitario);
    Stack<LineaDetalle> s;
    s.push(new_line);
    s.mostrar_stack(s);
}
void Factura::set_subTotal(int _ingreso){
    this->suma_subTotal = 0;
}
void Factura::subTotal(int _cantidad, int _precio){
    this->suma_subTotal = suma_subTotal + (_cantidad * _precio);
    //cout << "\n" <<this->suma_subTotal << "\n";
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
void Factura::ver_final(){
    cout << "\n--------------------- Montos Finales ---------------------"
         << "\n   Subtotal:\t" << get_subTotal()
         << "\n   IVA 19%:\t" << iva()
         << "\n   TOTAL:\t" << total()
         << "\n=========================================================\n";
}
