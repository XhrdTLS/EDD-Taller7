/* Tomas Lillo Silva | [411] EDD | 2020          */
#ifndef LINEADETALLE_H
#define LINEADETALLE_H

#include <iostream>
using namespace std;

class LineaDetalle{
    private:
        int cantidad;
        int precioUnitario;
        string descripcion;
    public:
        LineaDetalle();
        LineaDetalle(int,int,string);
        virtual ~LineaDetalle();
        //setters
        void set_cantidad(int);
        void set_precio_unitario(int);
        void set_descripcion(string);
        //getters
        int get_cantidad();
        int get_precio_unitario();
        string get_descripcion();
        //methods
        int subTotalLinea();

        void ver();
};

#endif // LINEADETALLE_H
