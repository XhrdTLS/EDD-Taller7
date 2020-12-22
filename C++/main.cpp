/* Tomas Lillo Silva | [411] EDD | 2020          */
#include <iostream>
#include "Factura.h"
#include "LineaDetalle.h"
#include "Stack.h"

using namespace std;

int main(){
    cout << "    FACTURAS: Taller 7\nSe pausara en cada factura nueva, \nse debe pulsar para continuar.\n\n";
    system("pause");

    Factura f1(1001,20201212,"20258555-0","Johan Shell");
    f1.ver();
    f1.addLinea(1,10000,"Cargador 33W");
    f1.addLinea(2,4500,"Adaptador 12v");
    f1.addLinea(5,2000,"Tira LED 1M");
    cout << "\n=========================================================\n";
    system("pause");
    system("cls");
    Factura f2(1010,20201214,"18554795-3","Silvana Regine");
    //f2.ver();
    //system("pause");
    return 0;
}
