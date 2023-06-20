from contato import Contato

class Trabalho(Contato):
    # -------------------------------------------------------------- construtor
    def __init__(self, setor='', empresa=''):
        Contato.__init__(self)
        self.__setor = setor
        self.__empresa = empresa

    # ----------------------------------------------------------------- getters
    @property
    def setor(self):
        return self.__setor
    @property
    def empresa(self):
        return self.__empresa

    # ----------------------------------------------------------------- setters
    @setor.setter
    def setor(self, setor):
        self.__setor = setor
    @empresa.setter
    def empresa(self, empresa):
        self.__empresa = empresa

    # ----------------------------------------------------------------- metodos
    # edita setor
    def editar_setor(self):
        setor = input("Setor: ")
        self.setor = setor

    # edita empresa
    def editar_empresa(self):
        empresa = input("Empresa: ")
        self.empresa = empresa

    # exibe contato
    def exibir(self):
        print("Nome:" + str(self.nome))
        print("Telefones:")
        for telefone in self.telefones:
            telefone.exibir()
        print("Endereco:")
        self.endereco.exibir()
        print("Emails:")
        for email in self.emails:
            print(email)
        print("Aniversario:")
        self.aniversario.exibir()
        print("Grupo:" + str(self.grupo))
        print("Reunioes:")
        for reuniao in self.reunioes:
            reuniao.exibir()
        print("Setor:" + str(self.setor))
        print("Empresa:" + str(self.empresa))
