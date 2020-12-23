"""
@author: Tomas Lillo Silva | [411] EDD | 2020
"""
from LineaDetalle import LineaDetalle
class Factura(LineaDetalle):
    # Constructor
    def __init__(self, numero, fecha, rutCliente, nombreCliente):
       self.set_numero(numero)
       self.set_fecha(fecha)
       self.set_rutCliente(rutCliente)
       self.set_nombreCliente(nombreCliente)
        #suma los subtotales de cada addlinea
       self.suma_subtotal = 0
    def ingreso_f(self, numero, fecha, rutCliente, nombreCliente): 
        self.set_numero(numero)
        self.set_fecha(fecha)
        self.set_rutCliente(rutCliente)
        self.set_nombreCliente(nombreCliente)
    # setters
    def set_numero(self,numero):
        self.__numero = numero
    
    def set_fecha(self,fecha):
        self.__fecha = fecha
    
    def set_rutCliente(self,rut_cliente):
        self.__rutCliente = rut_cliente

    def set_nombreCliente(self,nombre_cliente):
        self.__nombreCliente = nombre_cliente
    
    def set_subTotal(self):
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
        self.suma_subtotal = self.suma_subtotal + (self.__cantidad * self.__precioUnitario)

    def iva(self):
        pass

    def total(self):
        return self.get_cantidad() + self.iva()
    
    def ver(self):
        print("\n=========================================================\n",
              "  Factura #", self.get_numero(),
              "\t\t\t  Fecha ", self.get_fecha(),
              "\n--------------------- Datos Cliente ---------------------",
              "\n   Rut: ", self.get_rutCliente(),
              "\n   Nombre: ", self.get_nombreCliente(),
              "\n=========================================================\n",
              " #\tDescipcion\t\tPrecio\t\tSubtotal\n")

    def ver_final(self):
        print("\n--------------------- Montos Finales - --------------------",
              "\n   Subtotal:\t", self.get_subTotal(),
              "\n   IVA 19%:\t", self.iva(),
              "\n   TOTAL:\t", self.total(),
              "\n=========================================================\n")
