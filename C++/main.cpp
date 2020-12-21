/* Tomas Lillo Silva | [411] EDD | 2020          */
#include <iostream>
#include "Factura.h"
#include "LineaDetalle.h"
#include "Stack.h"

using namespace std;

int main()
{
    cout << "TODO VA BIEN!" << endl;
    system("pause");

    Factura f1(1001,20201212,"20258555-0","Johan Shell");
    //f1.ver();
    f1.addLinea(1,1500,"Cargador 33W");
    system("pause");
    Factura f2(1010,20201214,"18554795-3","Silvana Regine");
    //f2.ver();
    system("pause");
    return 0;
}
