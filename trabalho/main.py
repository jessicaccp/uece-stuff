import sys
from agenda import Agenda
from arquivo import *
from interface import *

def main ():
    agenda = Agenda()
    xml_file = 'arquivo.xml'

    while True:
        menu(agenda, xml_file)

def menu(agenda, xml_file):
    print('\n[ PyGENDA v.0.1a ]\n')
    print(' 1. Adicionar contato')
    print(' 2. Editar contato')
    print(' 3. Remover contato')
    print(' 4. Listar todos os contatos')
    print(' 5. Listar contatos por grupo')
    print(' 6. Buscar por nome')
    print(' 7. Buscar por telefone')
    print(' 8. Buscar por email')
    print(' 9. Salvar em arquivo')
    print('10. Carregar contatos de arquivo')
    print('11. Sair \n')

    opcao = escolher_opcao(1, 11)

    if opcao == 1:
        print('\n- Adicionar contato')
        agenda.adicionar()
    elif opcao == 2:
        print('\n- Editar contato')
        nome = input('Nome do contato: ')
        for contato in agenda.contatos:
            if contato.nome == nome:
                agenda.editar(contato)
                return
        print('\nContato nao encontrado.\n')
    elif opcao == 3:
        print('\n- Remover contato')
        agenda.remover(xml_file)
    elif opcao == 4:
        print('\n- Listar todos os contatos')
        agenda.listar_todos()
    elif opcao == 5:
        print('\n- Listar contatos por grupo')
        agenda.listar_grupo()
    elif opcao == 6:
        print('\n- Buscar contato por nome')
        agenda.buscar_nome()
    elif opcao == 7:
        print('\n- Buscar contato por telefone')
        agenda.buscar_telefone()
    elif opcao == 8:
        print('\n- Buscar contato por email')
        agenda.buscar_email()
    elif opcao == 9:
        print('\n- Salvar em arquivo')
        insert(xml_file, agenda.contatos)
    elif opcao == 10:
        print('\n- Carregar contatos de arquivo')
        print_xml(xml_file)
    elif opcao == 11:
        sys.exit()
    else:
        print('Erro.')

def escolher_opcao(primeiro, ultimo):
    while True:
        try:
            opcao = int(input('Opcao escolhida: '))
            if opcao not in range(primeiro, ultimo+1):
                print('\nOpcao invalida. \n')
            else:
                return opcao
        except ValueError:
            print('\nDigite apenas numeros. \n')

if __name__ == '__main__':
    main()
