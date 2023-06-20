class Hora:
    # -------------------------------------------------------------- construtor
    def __init__(self, hora=0, minuto=0):
        self.__hora = hora
        self.__minuto = minuto

    # ----------------------------------------------------------------- getters
    @property
    def hora(self):
        return self.__hora
    @property
    def minuto(self):
        return self.__minuto

    # ----------------------------------------------------------------- setters
    @hora.setter
    def hora(self, hora):
        self.__hora = hora
    @minuto.setter
    def minuto(self, minuto):
        self.__minuto = minuto

    # ----------------------------------------------------------------- metodos
    # edita hora
    def editar_hora(self):
        try:
            while True:
                hora = int(input('Hora: '))
                if hora < 0 or hora > 23:
                    print('\nDigite um valor valido.\n')
                else:
                    self.hora = hora
                    return
        except ValueError:
            print('\nDigite apenas numeros.\n')

    # edita minuto
    def editar_minuto(self):
        try:
            while True:
                minuto = int(input("Minuto: "))
                if minuto < 0 or minuto > 59:
                    print('\nDigite um valor valido.\n')
                else:
                    self.minuto = minuto
                    return
        except ValueError:
            print('\nDigite apenas numeros.\n')

    # exibe hora
    def exibir(self):
        print(str(self.__hora) + ':' + str(self.__minuto))
