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

    void mostrarStack(Stack<Tipo> &s)
    {
        Stack<Tipo> aux;
        while (s.empty() == false)
        {
            Tipo tmp = s.pop();
            aux.push(tmp);
            cout << tmp << endl;
        }
        //restauramos
        while (aux.empty() == false)
            s.push(aux.pop());
    }
};

#endif // STACK_H_INCLUDED
