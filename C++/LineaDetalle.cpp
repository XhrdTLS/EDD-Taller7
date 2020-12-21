/* Tomas Lillo Silva | [411] EDD | 2020          */
#include "LineaDetalle.h"

//constructors
LineaDetalle::LineaDetalle(){
    cantidad = 0;
    precioUnitario = 0;
    descripcion = ' ';
}
LineaDetalle::LineaDetalle(int _cantidad, int precio_unitario, string _descipcion){
    set_cantidad(_cantidad);
    set_precio_unitario(precio_unitario);
    set_descripcion(_descipcion);
}
LineaDetalle::~LineaDetalle(){}

//setters
void LineaDetalle::set_cantidad (int _cantidad){
    cantidad = _cantidad;
}
void LineaDetalle::set_precio_unitario(int precio_unidad){
    precioUnitario = precio_unidad;
}
void LineaDetalle::set_descripcion(string _descripcion){
    descripcion = _descripcion;
}
//getters
int LineaDetalle::get_cantidad(){
    return this->cantidad;
}
int LineaDetalle::get_precio_unitario(){
    return this->precioUnitario;
}
string LineaDetalle::get_descripcion(){
    return this->descripcion;
}
//methods
int LineaDetalle::subTotalLinea(){
}
void LineaDetalle::ver(){
    //pruebas para ver()
    cout << "\n\t" << get_cantidad()
         << "\n\t" << get_precio_unitario()
         << "\n\t" << get_descripcion();
}
