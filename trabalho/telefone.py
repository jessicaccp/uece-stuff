class Telefone:
    # -------------------------------------------------------------- construtor
    def __init__(self, numero='', codigo='', operadora=''):
        self.__numero = numero
        self.__codigo = codigo
        self.__operadora = operadora

    # ----------------------------------------------------------------- getters
    @property
    def numero(self):
        return self.__numero
    @property
    def codigo(self):
        return self.__codigo
    @property
    def operadora(self):
        return self.__operadora

    # ----------------------------------------------------------------- setters
    @numero.setter
    def numero(self, numero):
        self.__numero = numero
    @codigo.setter
    def codigo(self, codigo):
        self.__codigo = codigo
    @operadora.setter
    def operadora(self, operadora):
        self.__operadora = operadora

    # ----------------------------------------------------------------- metodos
    # edita numero
    def editar_numero(self):
        while True:
            numero = input('Numero: ')
            if numero == '':
                print('\nCampo obrigatorio.\n')
            else:
                self.numero = numero
                return

    # edita codigo
    def editar_codigo(self):
        codigo = input('Codigo de area: ')
        self.codigo = codigo

    # edita operadora
    def editar_operadora(self):
        operadora = input('Operadora: ')
        self.operadora = operadora

    # exibe telefone
    def exibir(self):
        print(str(self.__operadora) + ': (' + str(self.__codigo) + ')' + str(self.__numero))
