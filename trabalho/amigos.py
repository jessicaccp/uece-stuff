from contato import Contato

class Amigos(Contato):
    # -------------------------------------------------------------- construtor
    def __init__(self):
        Contato.__init__(self)

    # ----------------------------------------------------------------- metodos
    # exibe contato
    def exibir(self):
        print("Nome:", self.nome)
        print("Telefones:")
        for telefone in self.telefones:
            telefone.exibir()
        print("Endereco:")
        self.endereco.exibir()
        print("E-mails:")
        for email in self.emails:
            print(email)
        print("Aniversario:")
        self.aniversario.exibir()
        print("Grupo:", self.grupo)
        print("Reunioes:")
        for reuniao in self.reunioes:
            reuniao.exibir()