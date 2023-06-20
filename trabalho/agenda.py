from amigos import Amigos
from arquivo import *
from contato import Contato
from data import Data
from endereco import Endereco
from familia import Familia
from trabalho import Trabalho

class Agenda:
    # -------------------------------------------------------------- construtor
    def __init__(self, contatos=[]):
        self.__contatos = contatos

    # ------------------------------------------------------------------ getter
    @property
    def contatos(self):
        return self.__contatos

    # ------------------------------------------------------------------ setter
    @contatos.setter
    def contatos(self, contatos):
        self.__contatos = contatos

    # ----------------------------------------------------------------- metodos
    # adiciona contato
    def adicionar(self):
        grupo = self.selecionar_grupo()
        try:
            if grupo == 'Amigos':
                contato = Amigos()
                contato.grupo = 'Amigos'
            elif grupo == 'Trabalho':
                contato = Trabalho()
                contato.grupo = 'Trabalho'
                contato.editar_empresa()
                contato.editar_setor()
            elif grupo == 'Familia':
                contato = Familia()
                contato.grupo = 'Familia'
                contato.editar_parentesco()

            self.editar(contato)
            self.contatos.append(contato)
            print('\nContato salvo!\n')
        except Exception:
            print('\nErro ao adicionar contato.\n')
            return

    # usuário seleciona a que grupo pertence o novo contato
    def selecionar_grupo(self):
        print('1. Amigos')
        print('2. Familia')
        print('3. Trabalho\n')

        while True:
            try:
                grupo = int(input('Opcao: '))
                print()
                if grupo == '':
                    print('\nCampo obrigatorio.\n')
                elif grupo not in range(1,4):
                    print('\nOpcao invalida. Tente novamente. \n')
                else:
                    if grupo == 1:
                        grupo = 'Amigos'
                    elif grupo == 2:
                        grupo = 'Familia'
                    elif grupo == 3:
                        grupo = 'Trabalho'
                    return grupo
            except ValueError:
                print('\nDigite apenas numeros.\n')

    # edita contato
    def editar(self, contato):
        contato.editar_nome()

        print('\n- Telefone:')
        contato.adicionar_telefone()

        print('\n- Emails: ')
        contato.adicionar_email()
        while True:
            try:
                print('\nAdicionar mais um email?')
                print('1. Sim')
                print('2. Nao')
                op = int(input())
                if op in range(1,3):
                    if op == 1:
                        contato.adicionar_email()
                    else:
                        break
                else:
                    print('\nDigite um valor valido.\n')
            except ValueError:
                print('\nDigite apenas numeros.\n')

        print('\n- Endereco:')
        print('Deseja adicionar um endereco?')
        print('1. Sim')
        print('2. Nao')
        while True:
            try:
                op = int(input())
                if op in range(1,3):
                    if op == 1:
                        e = Endereco()
                        contato.editar_endereco(e)
                    else:
                        break
                else:
                    print('\nDigite um valor valido.\n')
            except ValueError:
                print('\nDigite apenas numeros.\n')

        print('\n- Aniversario:')
        print('Deseja adicionar o aniversario?')
        print('1. Sim')
        print('2. Nao')
        while True:
            try:
                op = int(input())
                if op in range(1,3):
                    if op == 1:
                        a = Data()
                        contato.editar_aniversario(a)
                    else:
                        break
                else:
                    print('\nDigite um valor valido.\n')
            except ValueError:
                print('\nDigite apenas numeros.\n')

        print('\n- Reuniao:')
        print('Deseja adicionar uma reuniao?')
        print('1. Sim')
        print('2. Nao')
        while True:
            try:
                op = int(input())
                if op in range(1,3):
                    if op == 1:
                        contato.adicionar_reuniao()
                    else:
                        break
                else:
                    print('\nDigite um valor valido.\n')
            except ValueError:
                print('\nDigite apenas numeros.\n')

    # remove contato
    def remover(self, xml_file):
        nome = input('Nome do contato: ')
        try:
            for contato in self.contatos:
                if contato.nome == nome:
                    remover_file(xml_file, nome)
                    self.contatos.remove(contato)
                    print('\nContato removido!\n')
        except Exception:
            print('\nContato nao existe.\n')
            return

    # lista todos os contatos
    def listar_todos(self):
        try:
            for contato in self.contatos:
                contato.exibir()
        except Exception:
            print('\nErro ao listar contatos.\n')
            return

    # lista todos os contatos por grupos
    def listar_grupo(self):
        print('1. Amigos')
        print('2. Familia')
        print('3. Trabalho\n')
        while True:
            try:
                grupo = int(input('Escolha um grupo: '))
                if grupo in range(1,4):
                    if grupo == 1:
                        grupo = 'Amigos'
                    elif grupo == 2:
                        grupo = 'Familia'
                    else:
                        grupo = 'Trabalho'
                    break
                else:
                    print('\nDigite um valor valido.\n')
            except ValueError:
                print('\nDigite apenas numeros.\n')

        print('\n-', grupo + ':')
        try:
            for contato in self.contatos:
                if contato.grupo == grupo:
                    contato.exibir()
        except Exception:
            print('\nErro ao listar contatos.\n')
            return

    # busca contato pelo nome
    def buscar_nome(self):
        nome = input('Nome do contato: ')
        try:
            for contato in self.contatos:
                if contato.nome == nome:
                    contato.exibir()
                    return
            print('\nContato nao encontrado.\n')
        except Exception:
            print('\nErro ao buscar contato.\n')
            return

    # busca contato pelo email
    def buscar_email(self):
        email = input('E-mail do contato: ')
        try:
            for contato in self.contatos:
                if email in contato.emails:
                    contato.exibir()
                    return
            print('\nContato nao encontrado.\n')
        except Exception:
            print('\nErro ao buscar contato.\n')
            return

    # busca contato pelo telefone
    def buscar_telefone(self):
        telefone = input('Telefone do contato: ')
        try:
            for contato in self.contatos:
                for t in contato.telefones:
                    if telefone == t.numero:
                        contato.exibir()
                        return
            print('\nContato nao encontrado.\n')
        except Exception:
            print('\nErro ao buscar contato.\n')
            return
