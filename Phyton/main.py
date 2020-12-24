"""
@author: Tomas Lillo Silva | [411] EDD | 2020
Links: https://repl.it/@XhrdTLS/Taller7Python#main.py
GitHub: https://github.com/XhrdTLS/EDD-Taller7

"""
from Stack import Stack
from LineaDetalle import LineaDetalle
from Factura import Factura 

print("    FACTURAS: Taller 7")
f1 = Factura(10001, 20201212, "20258555-0", "Johan Shell")
f1.ver()
f1.addLinea(1,10000,"Cargador 33W")
f1.ver_final()