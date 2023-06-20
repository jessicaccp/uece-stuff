from tkinter import *


class MenuPrincipal:

    #  Janela Principal:

    def __init__(self, master):
        self.master = master

        #  Fontes:

        self.font_title = "Calibri 20 bold italic"
        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_titulo = Frame(master, pady=5)
        self.caixa_titulo.pack()

        self.caixa_subtitulo1 = Frame(master, padx=20, pady=10)
        self.caixa_subtitulo1.pack()

        self.caixa_opc1 = Frame(master, padx=10, pady=10)
        self.caixa_opc1.pack()

        self.caixa_subtitulo2 = Frame(master, padx=20, pady=10)
        self.caixa_subtitulo2.pack()

        self.caixa_opc2 = Frame(master, padx=10, pady=10)
        self.caixa_opc2.pack()

        self.caixa_subtitulo3 = Frame(master, padx=20, pady=10)
        self.caixa_subtitulo3.pack()

        self.caixa_opc3 = Frame(master, padx=10, pady=10)
        self.caixa_opc3.pack()

        self.caixa_sair = Frame(master, padx=20, pady=10)
        self.caixa_sair.pack()

        self.caixa_autor = Frame(master, padx=20, pady=5)
        self.caixa_autor.pack()

        #  Títulos e Botões:

        self.titulo = Label(self.caixa_titulo, text="PyGenda v.0.1b", font=self.font_title, width=25)
        self.titulo.pack(side=LEFT)

        self.subtitulo1 = Label(self.caixa_subtitulo1, text=":: CONTATOS ::", font=self.font_h1, width=20)
        self.subtitulo1.pack(side=LEFT)

        self.botaolistar = Button(self.caixa_opc1, text="Listar Contatos", font=self.font_h2, width=20)
        self.botaolistar['command'] = self.janela_listacontatos
        self.botaolistar.pack(side=TOP)

        self.botaolistarpgrupo = Button(self.caixa_opc1, text="Listar por Grupo", font=self.font_h2, width=20)
        self.botaolistarpgrupo['command'] = self.janela_listagrupos
        self.botaolistarpgrupo.pack(side=BOTTOM)

        self.subtitulo2 = Label(self.caixa_subtitulo2, text=":: OPÇÕES DE CONTATO ::", font=self.font_h1, width=20)
        self.subtitulo2.pack(side=LEFT)

        self.botaobuscar = Button(self.caixa_opc2, text="Buscar / Editar", font=self.font_h2, width=20)
        self.botaobuscar['command'] = self.janela_buscar
        self.botaobuscar.pack()

        self.botaoinserir = Button(self.caixa_opc2, text="Adicionar", font=self.font_h2, width=20)
        self.botaoinserir['command'] = self.janela_contatos
        self.botaoinserir.pack(side=TOP)

        self.botaoremover = Button(self.caixa_opc2, text="Remover", font=self.font_h2, width=20)
        self.botaoremover['command'] = self.janela_remover
        self.botaoremover.pack(side=BOTTOM)

        self.subtitulo3 = Label(self.caixa_subtitulo3, text=":: OPÇÕES DE ARQUIVO ::", font=self.font_h1, width=20)
        self.subtitulo3.pack(side=LEFT)

        self.botaocarregararq = Button(self.caixa_opc3, text="Carregar (.xml)", font=self.font_h2, width=20)
        self.botaocarregararq['command'] = self.janela_carregararq
        self.botaocarregararq.pack(side=TOP)

        self.botaosalvararq = Button(self.caixa_opc3, text="Salvar (.xml)", font=self.font_h2, width=20)
        self.botaosalvararq['command'] = self.janela_salvararq
        self.botaosalvararq.pack(side=BOTTOM)

        self.botaosair = Button(self.caixa_sair, text="Sair", font=self.font_h2, width=20)
        self.botaosair['command'] = self.caixa_sair.quit
        self.botaosair.pack()

        self.autores = Label(self.caixa_autor, text="Autoria de Camila Alves, Jessica Cacau e J Alison Silveira", width=48)
        self.autores['font'] = ("Calibri", "10", "italic")
        self.autores.pack()

    # Lista de Contatos:

    def janela_listacontatos(self):
        self.janela_listacontatos = Toplevel(self.master)
        ListaContatos(self.janela_listacontatos)

    # Lista de Grupos:

    def janela_listagrupos(self):
        self.janela_listagrupos = Toplevel(self.master)
        ListaGrupos(self.janela_listagrupos)

    # Janela de Busca (Procurar Contato e Editar ou não):

    def janela_buscar(self):
        self.janela_buscar = Toplevel(self.master)
        BuscareEditar(self.janela_buscar)

    # Janela de Contatos (Inserir Dados e Salvar):

    def janela_contatos(self):
        self.janela_contatos = Toplevel(self.master)
        Contatos(self.janela_contatos)

    # Janela de Remoção (Remover Contato):

    def janela_remover(self):
        self.janela_remover = Toplevel(self.master)
        Remover(self.janela_remover)

    # Janela de Abrir Arquivo (Carregar .xml):

    def janela_carregararq(self):
        self.janela_carregararq = Toplevel(self.master)
        CarregarArquivo(self.janela_carregararq)

    # Janela de Salvar Arquivo (Salvar .xml):

    def janela_salvararq(self):
        self.janela_salvararq = Toplevel(self.master)
        SalvarArquivo(self.janela_salvararq)


class ListaContatos:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        # Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_lista0 = Frame(master, padx=10, pady=10)
        self.caixa_lista0.pack()

        self.caixa_lista1 = Frame(master, padx=20, pady=5)
        self.caixa_lista1.pack()

        #  Dados dos Contatos:

        self.infolista = Label(self.caixa_lista0, text=":: Lista de Contatos ::", font=self.font_h1, width=20).pack(side=TOP)
        
        self.botaosair = Button(self.caixa_lista1, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=BOTTOM)

    def fechar_janela(self):
        self.master.destroy()


class ListaGrupos:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        # Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_lista0 = Frame(master, padx=10, pady=10)
        self.caixa_lista0.pack()

        self.caixa_lista1 = Frame(master, padx=20, pady=5)
        self.caixa_lista1.pack()

        self.caixa_lista2 = Frame(master, padx=20, pady=5)
        self.caixa_lista2.pack()

        #  Dados dos Contatos:

        self.infolista = Label(self.caixa_lista0, text=":: Lista de Grupos ::", font=self.font_h1, width=20).pack(side=TOP)

        self.botaolistafamilia = Button(self.caixa_lista1, text="Família", font=self.font_h2, width=12)
        #self.botaolistafamilia ['command'] = 
        self.botaolistafamilia.pack(side=LEFT)

        self.botaolistaamigos = Button(self.caixa_lista1, text="Amigos", font=self.font_h2, width=12)
        #self.botaolistatrabalho ['command'] =
        self.botaolistaamigos.pack(side=LEFT)

        self.botaolistatrabalho = Button(self.caixa_lista1, text="Trabalho", font=self.font_h2, width=12)
        #self.botaolistatrabalho ['command'] =
        self.botaolistatrabalho.pack(side=LEFT)

        self.botaosair = Button(self.caixa_lista2, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=BOTTOM)

    def fechar_janela(self):
        self.master.destroy()


class BuscareEditar:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        #  Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_buscar0 = Frame(master, padx=10, pady=10)
        self.caixa_buscar0.pack()

        self.caixa_buscar1 = Frame(master, padx=10, pady=10)
        self.caixa_buscar1.pack()

        self.caixa_buscar2 = Frame(master, padx=20, pady=5)
        self.caixa_buscar2.pack()

        #  Bloco de Busca:

        self.infobuscar = Label(self.caixa_buscar0, text=":: Busca por Contato ::", font=self.font_h1, width=20).pack()
        self.insbuscar = Entry(self.caixa_buscar1, font=self.font_corpo, width=40).pack()
        
        self.botaook = Button(self.caixa_buscar2, text="OK", font=self.font_h2, width=12)
        ### INSERIR CONDIÇÃO DE BUSCA ###
        self.botaook['command'] = self.janela_contatos
        self.botaook.pack(side=LEFT)
        
        self.botaosair = Button(self.caixa_buscar2, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=RIGHT)

    def janela_contatos(self):
        self.janela_contatos = Toplevel(self.master)
        Contatos(self.janela_contatos)

    def fechar_janela(self):
        self.master.destroy()


class Contatos:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        # Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas dos Contatos:

        self.caixa_cont0 = Frame(master, padx=10, pady=10)
        self.caixa_cont0.pack()

        self.caixa_cont1 = Frame(master, padx=20, pady=5)
        self.caixa_cont1.pack()

        self.caixa_cont2 = Frame(master, padx=20, pady=5)
        self.caixa_cont2.pack()

        self.caixa_cont3 = Frame(master, padx=20, pady=5)
        self.caixa_cont3.pack()

        #  Caixas de Grupos:

        self.caixa_grupo0 = Frame(master, padx=20, pady=10)
        self.caixa_grupo0.pack()

        self.caixa_grupo1a = Frame(master, padx=20, pady=5)
        self.caixa_grupo1a.pack()

        self.caixa_grupo1b = Frame(master, padx=20, pady=5)
        self.caixa_grupo1b.pack()

        self.caixa_grupo2a = Frame(master, padx=20, pady=5)
        self.caixa_grupo2a.pack()

        self.caixa_grupo2b = Frame(master, padx=20, pady=5)
        self.caixa_grupo2b.pack()

        self.caixa_grupo3a = Frame(master, padx=20, pady=5)
        self.caixa_grupo3a.pack()

        self.caixa_grupo3b = Frame(master, padx=20, pady=5)
        self.caixa_grupo3b.pack()

        self.caixa_grupo3c = Frame(master, padx=20, pady=5)
        self.caixa_grupo3c.pack()


        #  Caixas de Endereço:

        self.caixa_end0 = Frame(master, padx=20, pady=10)
        self.caixa_end0.pack()

        self.caixa_end1 = Frame(master, padx=20, pady=5)
        self.caixa_end1.pack()

        self.caixa_end2 = Frame(master, padx=20, pady=5)
        self.caixa_end2.pack()

        self.caixa_end3 = Frame(master, padx=20, pady=5)
        self.caixa_end3.pack()

        self.caixa_end4 = Frame(master, padx=20, pady=5)
        self.caixa_end4.pack()

        #  Caixas de Opções:

        self.caixa_opc = Frame(master, padx=10, pady=15)
        self.caixa_opc.pack()

        #  Dados dos Contatos:

        self.infocontato = Label(self.caixa_cont0, text=":: Contato ::", font=self.font_h1, width=20).pack(side=LEFT)

        self.nome = Label(self.caixa_cont1, text="Nome:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insnome = Entry(self.caixa_cont1, font=self.font_corpo, width=30).pack(side=LEFT)

        self.aniversario = Label(self.caixa_cont1, text="Aniversário:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insanivdia = Entry(self.caixa_cont1, font=self.font_corpo, width=5).pack(side=LEFT)
        self.insanivmes = Entry(self.caixa_cont1, font=self.font_corpo, width=5).pack(side=LEFT)

        self.telefone = Label(self.caixa_cont2, text="Telefone:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insoperadora = Entry(self.caixa_cont2, font=self.font_corpo, width=4).pack(side=LEFT)
        self.insddd = Entry(self.caixa_cont2, font=self.font_corpo, width=2).pack(side=LEFT)
        self.instelefone = Entry(self.caixa_cont2, font=self.font_corpo, width=10).pack(side=LEFT)

        self.email = Label(self.caixa_cont2, text="E-mail:", font=self.font_h2, width=10).pack(side=LEFT)
        self.insemail = Entry(self.caixa_cont2, font=self.font_corpo, width=25).pack(side=LEFT)

        #  Grupo do Contato:

        self.grupo = Label(self.caixa_grupo0, text=":: Grupo ::", font=self.font_h1, width=20).pack(side=LEFT)

        self.botaofamilia = Radiobutton(self.caixa_grupo1a, text="Família", font=self.font_h2, value=1).pack(side=LEFT)
        self.familia = Label(self.caixa_grupo1b, text="Parentesco:", font=self.font_h2, width=12).pack(side=LEFT)

        opcparentesco = ['Outro', 'Avó', 'Avô', 'Irmã', 'Irmão', 'Mãe', 'Pai', 'Prima', 'Primo']

        parente = StringVar(self.caixa_grupo1b)
        parente.set('Outro')
        menuparentes = OptionMenu(self.caixa_grupo1b, parente, *opcparentesco)
        menuparentes.pack(side=RIGHT)
        
        self.botaoamigos = Radiobutton(self.caixa_grupo2a, text="Amigos", font=self.font_h2, value=2).pack(anchor=NW)
        self.amigos = Label(self.caixa_grupo2a, text="Reunião:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insamigos = Entry(self.caixa_grupo2a, font=self.font_corpo, width=53).pack(side=LEFT)
        self.amigos2 = Label(self.caixa_grupo2b, text="Data (dd:mm:aaaa):", font=self.font_h2, width=18).pack(side=LEFT)
        self.insamigosdia = Entry(self.caixa_grupo2b, font=self.font_corpo, width=6).pack(side=LEFT)
        self.insamigosmes = Entry(self.caixa_grupo2b, font=self.font_corpo, width=6).pack(side=LEFT)
        self.insamigosano = Entry(self.caixa_grupo2b, font=self.font_corpo, width=6).pack(side=LEFT)
        self.amigos2 = Label(self.caixa_grupo2b, text="Hora (hh:mm):", font=self.font_h2, width=14).pack(side=LEFT)
        self.insamigoshora = Entry(self.caixa_grupo2b, font=self.font_corpo, width=6).pack(side=LEFT)
        self.insamigosmin = Entry(self.caixa_grupo2b, font=self.font_corpo, width=6).pack(side=LEFT)

        self.botaotrabalho = Radiobutton(self.caixa_grupo3a, text="Trabalho", font=self.font_h2, value=3).pack(anchor=NW)
        self.trabalho2 = Label(self.caixa_grupo3a, text="Empresa:", font=self.font_h2, width=12).pack(side=LEFT)
        self.instrabalho2 = Entry(self.caixa_grupo3a, font=self.font_corpo, width=20).pack(side=LEFT)
        self.trabalho3 = Label(self.caixa_grupo3a, text="Setor:", font=self.font_h2, width=12).pack(side=LEFT)
        self.instrabalho3 = Entry(self.caixa_grupo3a, font=self.font_corpo, width=20).pack(side=LEFT)
        self.trabalho4 = Label(self.caixa_grupo3b, text="Reunião:", font=self.font_h2, width=12).pack(side=LEFT)
        self.instrabalho4 = Entry(self.caixa_grupo3b, font=self.font_corpo, width=53).pack(side=LEFT)
        self.trabalho5 = Label(self.caixa_grupo3c, text="Data (dd:mm:aaaa):", font=self.font_h2, width=18).pack(side=LEFT)
        self.instrabalhodia = Entry(self.caixa_grupo3c, font=self.font_corpo, width=6).pack(side=LEFT)
        self.instrabalhomes = Entry(self.caixa_grupo3c, font=self.font_corpo, width=6).pack(side=LEFT)
        self.instrabalhoano = Entry(self.caixa_grupo3c, font=self.font_corpo, width=6).pack(side=LEFT)
        self.trabalho6 = Label(self.caixa_grupo3c, text="Hora (hh:mm):", font=self.font_h2, width=14).pack(side=LEFT)
        self.instrabalhohora = Entry(self.caixa_grupo3c, font=self.font_corpo, width=6).pack(side=LEFT)
        self.instrabalhomin = Entry(self.caixa_grupo3c, font=self.font_corpo, width=6).pack(side=LEFT)

        #  Endereço do Contato:

        self.infoendereco = Label(self.caixa_end0, text=":: Endereço ::", font=self.font_h1, width=20).pack(side=LEFT)

        self.rua = Label(self.caixa_end1, text="Rua:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insrua = Entry(self.caixa_end1, font=self.font_corpo, width=30).pack(side=LEFT)

        self.numero = Label(self.caixa_end1, text="Número:", font=self.font_h2, width=12).pack(side=LEFT)
        self.insnumero = Entry(self.caixa_end1, font=self.font_corpo, width=10).pack(side=LEFT)

        self.comp = Label(self.caixa_end2, text="Comp.:", font=self.font_h2, width=12).pack(side=LEFT)
        self.inscomp = Entry(self.caixa_end2, font=self.font_corpo, width=30).pack(side=LEFT)

        self.cep = Label(self.caixa_end2, text="CEP:", font=self.font_h2, width=12).pack(side=LEFT)
        self.cep = Entry(self.caixa_end2, font=self.font_corpo, width=10).pack(side=LEFT)

        self.bairro = Label(self.caixa_end3, text="Bairro:", font=self.font_h2, width=12).pack(side=LEFT)
        self.bairro = Entry(self.caixa_end3, font=self.font_corpo, width=20).pack(side=LEFT)

        self.cidade = Label(self.caixa_end3, text="Cidade:", font=self.font_h2, width=12).pack(side=LEFT)
        self.cidade = Entry(self.caixa_end3, font=self.font_corpo, width=20).pack(side=LEFT)

        self.estado = Label(self.caixa_end4, text="Estado:", font=self.font_h2, width=12).pack(side=LEFT)
        self.estado = Entry(self.caixa_end4, font=self.font_corpo, width=20).pack(side=LEFT)

        self.pais = Label(self.caixa_end4, text="País:", font=self.font_h2, width=12).pack(side=LEFT)
        self.pais = Entry(self.caixa_end4, font=self.font_corpo, width=20).pack(side=LEFT)

        self.botaosalvar = Button(self.caixa_opc, text="Salvar", font=self.font_h2, width=12)
        #  self.botaosalvar ['command'] =
        self.botaosalvar.pack(side=LEFT)
        
        self.botaosair = Button(self.caixa_opc, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=RIGHT)

    def fechar_janela(self):
        self.master.destroy()


class Remover:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        #  Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_remover0 = Frame(master, padx=10, pady=10)
        self.caixa_remover0.pack()

        self.caixa_remover1 = Frame(master, padx=10, pady=10)
        self.caixa_remover1.pack()

        self.caixa_remover2 = Frame(master, padx=20, pady=5)
        self.caixa_remover2.pack()

        #  Bloco de Remoção:

        self.inforemover = Label(self.caixa_remover0, text=":: Contato a Remover ::", font=self.font_h1, width=20).pack()
        self.insremover = Entry(self.caixa_remover1, font=self.font_corpo, width=40).pack()
       
        self.botaoremover = Button(self.caixa_remover2, text="REMOVER", font=self.font_h2, foreground="red", width=12)
        #self.botaoremover['command'] =
        self.botaoremover.pack(side=LEFT)
       
        self.botaosair = Button(self.caixa_remover2, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=RIGHT)

    def fechar_janela(self):
        self.master.destroy()


class CarregarArquivo:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        #  Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_carregar0 = Frame(master, padx=10, pady=10)
        self.caixa_carregar0.pack()

        self.caixa_carregar1 = Frame(master, padx=10, pady=10)
        self.caixa_carregar1.pack()

        self.caixa_carregar2 = Frame(master, padx=20, pady=5)
        self.caixa_carregar2.pack()

        #  Bloco de Carregamento:

        self.infocarregar = Label(self.caixa_carregar0, text=":: Carregar Arquivo do Diretório... ::", font=self.font_h1, width=40).pack()
        self.inscarregar = Entry(self.caixa_carregar1, font=self.font_corpo, width=40).pack()
        
        self.botaocarregar = Button(self.caixa_carregar2, text="Carregar", font=self.font_h2, width=12)
        #self.botaocarregar['command'] =
        self.botaocarregar.pack(side=LEFT)
        
        self.botaosair = Button(self.caixa_carregar2, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=RIGHT)

    def fechar_janela(self):
        self.master.destroy()


class SalvarArquivo:

    def __init__(self, master):
        self.master = master
        self.frame = Frame(self.master)

        #  Fontes:

        self.font_h1 = "Calibri 14 bold"
        self.font_h2 = "Calibri 12 bold"
        self.font_corpo = "Calibri 12"

        #  Caixas:

        self.caixa_salvar0 = Frame(master, padx=10, pady=10)
        self.caixa_salvar0.pack()

        self.caixa_salvar1 = Frame(master, padx=10, pady=10)
        self.caixa_salvar1.pack()

        self.caixa_salvar2 = Frame(master, padx=20, pady=5)
        self.caixa_salvar2.pack()

        #  Bloco de Salvamento:

        self.infosalvar = Label(self.caixa_salvar0, text=":: Salvar Arquivo no Diretório... ::", font=self.font_h1, width=40).pack()
        self.inssalvar = Entry(self.caixa_salvar1, font=self.font_corpo, width=40).pack()
        
        self.botaosalvar = Button(self.caixa_salvar2, text="Salvar", font=self.font_h2, width=12)
        #self.botaosalvar['command'] =
        self.botaosalvar.pack(side=LEFT)
        
        self.botaosair = Button(self.caixa_salvar2, text="Sair", font=self.font_h2, width=12)
        self.botaosair['command'] = self.fechar_janela
        self.botaosair.pack(side=RIGHT)

    def fechar_janela(self):
        self.master.destroy()


def main():
    principal = Tk()
    MenuPrincipal(principal)

    tkvar = StringVar(principal)
    tkvar.set('Outro')

    principal.title("PyGenda v.0.1b")
    principal.geometry("+650+250")
    principal.mainloop()


if __name__ == '__main__':
    main()
