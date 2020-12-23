"""
@author: Tomas Lillo Silva | [411] EDD | 2020
"""
Class Factura:
    # Constructor
    def __init__(self,numero = 0,fecha = 0, rut_cliente = " ", nombre_cliente = " "):
       self._numero = numero
       self._fecha = fecha
       self._rutCliente = rut_cliente
       self._nombreCliente = nombre_cliente
    # setters
    def setNumero(self,numero):
        self._numero = numero
    
    def setFecha(self,fecha):
        self._fecha = fecha
    
    def setRutCliente(self,rut_cliente):
        self._rutCliente = rut_cliente

    def setNombreCliente(self,nombre_cliente):
        self._nombreCliente = nombre_cliente

    