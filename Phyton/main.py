"""
@author: Tomas Lillo Silva | [411] EDD | 2020
Links: https://repl.it/@XhrdTLS/Taller7Python#main.py
GitHub: https://github.com/XhrdTLS/EDD-Taller7

"""
from Stack import Stack
from LineaDetalle import LineaDetalle
from Factura import Factura 

def mostrarStack(s):
    #creamos un auxiliar
    aux = Stack()
    #recorremos el stack
    while (s.empty() == False):
        valor = s.pop()
        print("mostrando Stack:", valor)
        aux.push(valor)
        
    #volvemos a colocar los datos en el stack original
    while (aux.empty() == False):
        s.push(aux.pop())

print("    FACTURAS: Taller 7")
f1 = Factura(10001, 20201212, "20258555-0", "Johan Shell")
f1.ver()