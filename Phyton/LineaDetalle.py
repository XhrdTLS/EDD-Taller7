"""
@author: Tomas Lillo Silva | [411] EDD | 2020
"""
class LineaDetalle():
    # Constuctor
    def __init__(self):
        self.__cantidad = 0
        self.__precioUnitario = 0
        self.__descipcion = ' '
    #setters
    def set_cantidad(self, cantidad):
        self.__cantidad = cantidad
    
    def set_precioUnitario(self,precioUnitario):
        self.__precioUnitario = precioUnitario
    
    def set_descipcion(self, descripcion):
        self.__descripcion = descripcion
    #getters
    def get_cantidad(self):
        return self.__cantidad
    
    def get_precioUnitario(self):
        return self.__precioUnitario
    
    def get_descipcion(self):
        return self.__descripcion
    #methods
    def subTotalLinea(self):
        pass
    
    def ver():
        pass