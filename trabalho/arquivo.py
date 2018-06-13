import xml.etree.ElementTree as ET
import os

from contato import Contato
from data import Data
from endereco import Endereco
from hora import Hora
from reuniao import Reuniao
from telefone import Telefone

def indentar(elemento, nivel=0):
    i = "\n" + nivel * "  "
    if len(elemento):
        if not elemento.text or not elemento.text.strip():
            elemento.text = i + "  "
        if not elemento.tail or not elemento.tail.strip():
            elemento.tail = i
        for elemento in elemento:
            indentar(elemento, nivel + 1)
        if not elemento.tail or not elemento.tail.strip():
            elemento.tail = i
    else:
        if nivel and (not elemento.tail or not elemento.tail.strip()):
            elemento.tail = i

def insert(xml_file, contatos):
    tree = ET.ElementTree()
    try:
        tree.parse(xml_file)
        root = tree.getroot()
    except Exception:
        print('\nArquivo nao encontrado, gerando um novo arquivo: ' + xml_file)
        root = ET.Element('agenda')
        tree._setroot(root)
        tree.write(xml_file)
        
    for contato in contatos:
        cont = ET.SubElement(root, 'contato')

        nome = ET.SubElement(cont, 'nome')
        nome.text = contato.nome

        telefone = ET.SubElement(cont, 'telefone')
        numero = ET.SubElement(telefone, 'numero')
        codigo = ET.SubElement(telefone, 'codigo')
        operadora = ET.SubElement(telefone, 'operadora')
        for t in contato.telefones:
            numero.text = t.numero
            codigo.text = t.codigo
            operadora.text = t.operadora

        endereco = ET.SubElement(cont, 'endereco')
        rua = ET.SubElement(endereco, 'rua')
        rua.text = contato.endereco.rua
        num = ET.SubElement(endereco, 'numero')
        num.text = contato.endereco.numero
        complemento = ET.SubElement(endereco, 'complemento')
        complemento.text = contato.endereco.complemento
        bairro = ET.SubElement(endereco, 'bairro')
        bairro.text = contato.endereco.bairro
        cep = ET.SubElement(endereco, 'cep')
        cep.text = contato.endereco.cep
        cidade = ET.SubElement(endereco, 'cidade')
        cidade.text = contato.endereco.cidade
        estado = ET.SubElement(endereco, 'estado')
        estado.text = contato.endereco.estado
        pais = ET.SubElement(endereco, 'pais')
        pais.text = contato.endereco.pais

        email = ET.SubElement(cont, 'email')
        for e in contato.emails:
            email.text = e

        aniversario = ET.SubElement(cont, 'aniversario')
        dia = ET.SubElement(aniversario, 'dia')
        dia.text = contato.aniversario.dia
        mes = ET.SubElement(aniversario, 'mes')
        mes.text = contato.aniversario.mes
        ano = ET.SubElement(aniversario, 'ano')
        ano.text = contato.aniversario.ano

        grupo = ET.SubElement(cont, 'grupo')
        grupo.text = contato.grupo

        reuniao = ET.SubElement(cont, 'reuniao')
        data = ET.SubElement(reuniao, 'data')
        dia_r = ET.SubElement(data, 'dia')
        mes_r = ET.SubElement(data, 'mes')
        ano_r = ET.SubElement(data, 'ano')
        hora = ET.SubElement(reuniao, 'hora')
        hora_r = ET.SubElement(hora, 'hora')
        minuto = ET.SubElement(hora, 'minuto')
        for r in contato.reunioes:
            dia_r.text = r.data.dia
            mes_r.text = r.data.mes
            ano_r.text = r.data.ano
            hora_r.text = r.hora.hora
            minuto.text = r.hora.minuto
    
    try:
        root.append(cont)
    except Exception:
        print('\nAdicione contatos primeiro.\n')
    indentar(root)
    tree.write(xml_file)

def remover_file(xml_file, nome_do_contato):
    tree = ET.ElementTree()
    try:
        tree.parse(xml_file)
        root = tree.getroot()
    except Exception:
        raise '\nArquivo nao encontrado.\n'
    for child1 in root:
        for child2 in child1:
            if child2.tag == 'nome':
                if child2.text == nome_do_contato:
                    root.remove(child1)
                    tree.write(xml_file)
        
def print_xml(xml_file):
    tree = ET.ElementTree()
    try:
        tree.parse(xml_file)
        root = tree.getroot()
    except Exception:
        raise '\nArquivo nao encontrado.\n'
    ET.dump(root)
