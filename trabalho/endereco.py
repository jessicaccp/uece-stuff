class Endereco:
    # -------------------------------------------------------------- construtor
    def __init__(self, rua='', numero='', complemento='', bairro='', cep='', \
                cidade='', estado='', pais=''):
        self.__rua = rua
        self.__numero = numero
        self.__complemento = complemento
        self.__bairro = bairro
        self.__cep = cep
        self.__cidade = cidade
        self.__estado = estado
        self.__pais = pais

    # ----------------------------------------------------------------- getters
    @property
    def rua(self):
        return self.__rua
    @property
    def numero(self):
        return self.__numero
    @property
    def complemento(self):
        return self.__complemento
    @property
    def bairro(self):
        return self.__bairro
    @property
    def cep(self):
        return self.__cep
    @property
    def cidade(self):
        return self.__cidade
    @property
    def estado(self):
        return self.__estado
    @property
    def pais(self):
        return self.__pais

    # ----------------------------------------------------------------- setters
    @rua.setter
    def rua(self, rua):
        self.__rua = rua
    @numero.setter
    def numero(self, numero):
        self.__numero = numero
    @complemento.setter
    def complemento(self, complemento):
        self.__complemento = complemento
    @bairro.setter
    def bairro(self, bairro):
        self.__bairro = bairro
    @cep.setter
    def cep(self, cep):
        self.__cep = cep
    @cidade.setter
    def cidade(self, cidade):
        self.__cidade = cidade
    @estado.setter
    def estado(self, estado):
        self.__estado = estado
    @pais.setter
    def pais(self, pais):
        self.__pais = pais

    # ----------------------------------------------------------------- metodos
    # edita rua
    def editar_rua(self):
        rua = input('Rua: ')
        self.rua = rua

    # edita numero
    def editar_numero(self):
        numero = input('Numero: ')
        self.numero = numero

    # edita complemento
    def editar_complemento(self):
        complemento = input('Complemento: ')
        self.complemento = complemento

    # edita bairro
    def editar_bairro(self):
        bairro = input('Bairro: ')
        self.bairro = bairro

    # edita cep
    def editar_cep(self):
        cep = input('CEP: ')
        self.cep = cep

    # edita cidade
    def editar_cidade(self):
        cidade = input('Cidade: ')
        self.cidade = cidade

    # edita estado
    def editar_estado(self):
        estado = input('Estado: ')
        self.estado = estado

    # edita pais
    def editar_pais(self):
        pais = input('Pais: ')
        self.pais = pais

    # exibe endereço
    def exibir(self):
        print('Rua:', str(self.rua))
        print('Numero:', str(self.numero))
        print('Complemento:', str(self.__complemento))
        print('Bairro:', str(self.__bairro))
        print('CEP:', str(self.__cep))
        print('Cidade:', str(self.__cidade))
        print('Estado:', str(self.__estado))
        print('Pais:', str(self.__pais))
