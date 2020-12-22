/* Tomas Lillo Silva | [411] EDD | 2020          */
#ifndef FACTURA_H
#define FACTURA_H

#include "LineaDetalle.h"
#include "Stack.h"
#include <iostream>
using namespace std;

class Factura : public LineaDetalle{
    private:
        int numero;
        int fecha;
        string rutCliente;
        string nombreCliente;
    public:
        Factura();
        Factura(int,int,string,string);
        virtual ~Factura();
        //setters
        void set_numero(int); 
        void set_fecha(int); //yyyymmdd - aaaammdd
        void set_rutCliente(string); //12345678-9 -> sin verificar (randoms)
        void set_nombreCliente(string);
        //getters
        int get_numero();
        int get_fecha();
        string get_rutCliente();
        string get_nombreCliente();
        //methods
        int iva();
        int total();

        void addLinea(int, int, string);
        void ver();
};

#endif // FACTURA_H
