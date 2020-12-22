#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <stack>
#include "LineaDetalle.h"
using namespace std;
template <class Tipo>
class Stack : private stack<Tipo> {
public:
    void push(Tipo _valor) {
        stack<Tipo>::push(_valor);
    }

    Tipo pop() {
        Tipo temp = stack<Tipo>::top();
        stack<Tipo>::pop();
        return temp;
    }

    bool empty () {
        return stack<Tipo>::empty();
    }

    /*void mostrarStack(Stack<linea_detalle> &s)
    {
        Stack<linea_detalle> aux;
        while (s.empty() == false)
        {
            linea_detalle tmp = s.pop();
            aux.push(tmp);
            cout << tmp << endl;
        }
        //restauramos
        while (aux.empty() == false)
            s.push(aux.pop());
    }*/
    void mostrar_stack(Stack<LineaDetalle> &s)
    {
        Stack<LineaDetalle> aux;
        while (s.empty() == false){
            LineaDetalle temp = s.pop();
            aux.push(temp);
            cout << temp.get_cantidad()
                 << "\t" << temp.get_descripcion()
                 << "\t\t" << temp.get_precio_unitario()
                 << "\t\t" << temp.subTotal() << endl;

        }
    }
};

#endif // STACK_H_INCLUDED
