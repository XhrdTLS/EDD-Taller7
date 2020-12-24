"""
@author: Tomas Lillo Silva | [411] EDD | 2020
"""
from LineaDetalle import LineaDetalle
class Stack:
    #Definimos Constructor
    def __init__(self):
       self.stack = []
    #fin construtor __init__
        
    #Definimos PUSH(valor)
    def push(self, dataval):
        if dataval not in self.stack:
            self.stack.append(dataval)
            return True
        else:
            return False
    #fin push
            
    #Definimos POP()
    def pop(self):
        if len(self.stack) <= 0:
            return ("No element in the Stack")
        else:
            return self.stack.pop()
    #fin pop
        
    #Definimos Empty()
    def empty(self):
        if len(self.stack) <= 0:
            return True
        else:
            return False
    #fin empty
    
    def mostrarStack(self,s):
        #creamos un auxiliar
        aux = Stack()
        #recorremos el stack
        while (s.empty() == False):
            temp = s.pop()
            print(" ", temp.get_cantidad(),
                  "\t", temp.get_descipcion(),
                  "\t\t", temp.get_precioUnitario(),
                  "\t\t", temp.subTotalLinea(), "\n")
            aux.push(temp)
            
        #volvemos a colocar los datos en el stack original
        #   while (aux.empty() == False):
        #       s.push(aux.pop())
    
#fin clase Stack
