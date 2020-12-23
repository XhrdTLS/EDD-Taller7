/* Tomas Lillo Silva | [411] EDD | 2020          */
#ifndef LINEADETALLE_H
#define LINEADETALLE_H

#include <iostream>
using namespace std;

class LineaDetalle{
    private:
        int cantidad;
        int precioUnitario;
        int total = 0;
        string descripcion;
    public:
        LineaDetalle();
        LineaDetalle(int,int,string);
        virtual ~LineaDetalle();
        //setters
        void set_cantidad(int);
        void set_precio_unitario(int);
        void set_descripcion(string);
        void set_total(int, int);
        //getters
        int get_cantidad();
        int get_precio_unitario();
        string get_descripcion();
        int get_total();
        //methods
        int subTotal();
        int subTotalLinea();

        void ver();
};

#endif // LINEADETALLE_H
