from data import Data
from endereco import Endereco
from reuniao import Reuniao
from telefone import Telefone

class Contato:

    # -------------------------------------------------------------- construtor
    def __init__(self, nome='', telefones=[], endereco=Endereco(), \
                emails=[], aniversario=Data(), grupo='', reunioes=[]):
        self.__nome = nome
        self.__telefones = telefones
        self.__endereco = endereco
        self.__emails = emails
        self.__aniversario = aniversario
        self.__grupo = grupo
        self.__reunioes = reunioes

    # ----------------------------------------------------------------- getters
    @property
    def nome(self):
        return self.__nome
    @property
    def telefones(self):
        return self.__telefones
    @property
    def endereco(self):
        return self.__endereco
    @property
    def emails(self):
        return self.__emails
    @property
    def aniversario(self):
        return self.__aniversario
    @property
    def grupo(self):
        return self.__grupo
    @property
    def reunioes(self):
        return self.__reunioes

    # ----------------------------------------------------------------- setters
    @nome.setter
    def nome(self, nome):
        self.__nome = nome
    @telefones.setter
    def telefones(self, telefones):
        self.__telefones = telefones
    @endereco.setter
    def endereco(self, endereco):
        self.__endereco = endereco
    @emails.setter
    def emails(self, emails):
        self.__emails = emails
    @aniversario.setter
    def aniversario(self, aniversario):
        self.__aniversario = aniversario
    @grupo.setter
    def grupo(self, grupo):
        self.__grupo = grupo
    @reunioes.setter
    def reunioes(self, reunioes):
        self.__reunioes = reunioes

    # ----------------------------------------------------------------- metodos
    # edita nome
    def editar_nome(self):
        while True:
            nome = input('Nome: ')
            if nome == '':
                print('\nCampo obrigatorio.\n')
            else:
                self.nome = nome
                return

    # adiciona telefone
    def adicionar_telefone(self):
        telefone = Telefone()
        self.editar_telefone(telefone)
        self.telefones.append(telefone)

    # edita telefone
    def editar_telefone(self, telefone):
        telefone.editar_codigo()
        telefone.editar_numero()
        telefone.editar_operadora()
    
    # remove telefone
    def remover_telefone(self, telefone):
        try:
            self.telefones.remove(telefone)
        except Exception:
            print('\nTelefone nao existe.\n')
            return
    
    # edita endereco
    def editar_endereco(self, endereco):
        endereco.editar_rua()
        endereco.editar_numero()
        endereco.editar_complemento()
        endereco.editar_cep()
        endereco.editar_bairro()
        endereco.editar_cidade()
        endereco.editar_estado()
        endereco.editar_pais()
    
    # adiciona e-mail
    def adicionar_email(self):
        while True:
            email = input('E-mail: ')
            if email == '':
                print('\nCampo obrigatorio.\n')
            else:
                self.emails.append(email)
                return

    # edita e-mail
    def editar_email(self, email):
        while True:
            e = input('E-mail: ')
            if e == '':
                print('\nCampo obrigatorio.\n')
            else:
                email = e
                return

    # remove e-mail
    def remover_email(self, email):
        try:
            self.emails.remove(email)
        except Exception:
            print('\nEmail nao existe.\n')
            return
    
    # edita aniversario
    def editar_aniversario(self, aniversario):
        aniversario.editar_dia()
        aniversario.editar_mes()
        aniversario.editar_ano()
        aniversario.editar_data()
    
    # edita grupo
    def editar_grupo(self, grupo):
        self.grupo = grupo

    # adiciona reuniao
    def adicionar_reuniao(self):
        reuniao = Reuniao()
        self.editar_reuniao(reuniao)
        self.reunioes.append(reuniao)

    # edita reuniao
    def editar_reuniao(self, reuniao):
        reuniao.editar_data()
        reuniao.editar_hora()

    # remove reuniao
    def remover_reuniao(self, reuniao):
        try:
            self.reunioes.remove(reuniao)
        except Exception:
            print('\nReuniao nao existe.\n')
            return

    # exibe contato
    def exibir(self):
        print('Nome:', str(self.nome))
        print('Telefones:')
        for telefone in self.telefones:
            telefone.exibir()
        print('Endereco:')
        self.endereco.exibir()
        print('E-mails:')
        for email in self.emails:
            print(email)
        print('Aniversario:')
        self.aniversario.exibir()
        print('Grupo:', str(self.grupo))
