from data import Data
from hora import Hora

class Reuniao:
    # -------------------------------------------------------------- construtor
    def __init__(self, data=Data(), hora=Hora()):
        self.__data = data
        self.__hora = hora

    # ----------------------------------------------------------------- getters
    @property
    def data(self):
        return self.__data
    @property
    def hora(self):
        return self.__hora

    # ----------------------------------------------------------------- setters
    @data.setter
    def data(self, data):
        self.__data = data
    @hora.setter
    def hora(self, hora):
        self.__hora = hora

    # ----------------------------------------------------------------- metodos
    # edita data
    def editar_data(self):
        self.data.editar_dia()
        self.data.editar_mes()
        self.data.editar_ano()
        self.data.editar_data()

    # edita hora
    def editar_hora(self):
        self.hora.editar_hora()
        self.hora.editar_minuto()

    # exibe detalhes da reuniao
    def exibir(self):
        self.data.exibir()
        self.hora.exibir()
        self.data.quantos_dias()
