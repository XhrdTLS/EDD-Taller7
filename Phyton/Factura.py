"""
@author: Tomas Lillo Silva | [411] EDD | 2020
"""
from LineaDetalle import LineaDetalle
class Factura(LineaDetalle()):
    # Constructor
    def __init__(self):
       self.__numero = 0
       self.__fecha = 0
       self.__rutCliente = ' '
       self.__nombreCliente = ' '
        #suma los subtotales de cada addlinea
       self.suma_subtotal = 0
    # setters
    def set_numero(self,numero):
        self.__numero = numero
    
    def set_fecha(self,fecha):
        self.__fecha = fecha
    
    def set_rutCliente(self,rut_cliente):
        self.__rutCliente = rut_cliente

    def set_nombreCliente(self,nombre_cliente):
        self.__nombreCliente = nombre_cliente
    
    def set_subTotal(self,ingreso):
        self.suma_subtotal = 0

    #getters
    def get_numero(self):
        return self.__numero
    
    def get_fecha(self):
        return self.__fecha

    def get_rutCliente(self):
        return self.__rutCliente
    
    def get_nombreCliente(self):
        return self.__nombreCliente

    def get_subTotal(self):
        return self.suma_subTotal
    #methods
    def subTotal(self):
        pass

    def iva(self):
        pass

    def total():
        pass
