from datetime import date

class Data:
    # -------------------------------------------------------------- construtor
    def __init__(self, dia=0, mes=0, ano=0, data=0):
        self.__dia = dia
        self.__mes = mes
        self.__ano = ano
        self.__data = data

    # ----------------------------------------------------------------- getters
    @property
    def dia(self):
        return self.__dia
    @property
    def mes(self):
        return self.__mes
    @property
    def ano(self):
        return self.__ano
    @property
    def data(self):
        return self.__data

    # ----------------------------------------------------------------- setters
    @dia.setter
    def dia(self, dia):
        self.__dia = dia
    @mes.setter
    def mes(self, mes):
        self.__mes = mes
    @ano.setter
    def ano(self, ano):
        self.__ano = ano
    @data.setter
    def data(self, data):
        self.__data = data

    # ----------------------------------------------------------------- metodos
    # quantos dias faltam
    def quantos_dias(self):
        hoje = date.today()
        hoje -= self.data
        if hoje == 0:
            print('Hoje!')
        else:
            print('Faltam', str(hoje.days), 'dias.')

    # exibe data
    def exibir(self):
        print(str(self.dia) + '/' + str(self.mes) + '/' + str(self.ano))

    # edita dia
    def editar_dia(self):
        while True:
            try:
                dia = int(input('Dia: '))
                if dia < 1 or dia > 31:
                    print('\nDigite um dia valido.\n')
                else:
                    self.dia = dia
                    return
            except ValueError:
                print('\nDigite apenas numeros.\n')

    # edita mes
    def editar_mes(self):
        while True:
            try:
                mes = int(input('Mes: '))
                if mes < 1 or mes > 12:
                    print('\nDigite um mes valido.\n')
                else:
                    self.mes = mes
                    return
            except ValueError:
                print('\nDigite apenas numeros.\n')

    # edita ano
    def editar_ano(self):
        while True:
            try:
                ano = int(input('Ano: '))
                if ano < 1:
                    print('\nDigite um ano valido.\n')
                else:
                    self.ano = ano
                    return
            except ValueError:
                print('\nDigite apenas numeros.\n')

    # edita data
    def editar_data(self):
        if self.mes == 2 and self.dia > 29:
            print('\nData invalida. Fevereiro nao tem mais de 29 dias. Edite a data.\n')
        elif self.mes in [4, 6, 9, 11] and self.dia > 30:
            print('\nData invalida. Esse mes nao pode ter mais de 30 dias. Edite a data.\n')
        elif self.dia == 0 or self.mes == 0 or self.ano == 0:
            print('\nData invalida. Edite-a.\n')
        else:
            self.data = date(self.ano, self.mes, self.dia)
