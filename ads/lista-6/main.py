"""
    Legenda:
        NC -   número do cliente
        TDUC - tempo desde a última chegada
        TCR -  tempo de chegada no relógio
        TDS -  tempo de serviço
        TIS -  tempo de início do serviço
        TCFB - tempo do cliente na fila do banco
        TFAR - tempo final do atendimento no relógio
        TCB -  tempo do cliente no banco
        TLCB - tempo livre do caixa do banco
"""

import random

# Calcula os valores para as colunas 2 e 4
def sorteio(tempo, probabilidade):
    prob_x = random.random()
    for i in range(len(tempo)):
        if prob_x <= probabilidade[i]:
            return tempo[i]

# Calcula os valores da tabela
def main(t_chegada, p_chegada, t_servico, p_servico):

    # Item depende dos valores recebidos por parâmetro
    if len(t_chegada) == 3:
        print("Item a)")
    else:
        print("Item b)")

    # Calcula valores das colunas e printa tabela com valores arredondados para 2 casas decimais
    print("NC\tTDUC\tTCR\tTDS\tTIS\tTCFB\tTFAR\tTCB\tTLCB")
    tcr = 0
    tfar = 0
    tis = 0
    tlcb = 0
    tds = 0
    for nc in range(1, 21):
        tduc = sorteio(t_chegada, p_chegada)
        tcr += tduc
        tis = max(tis + tds, tcr)
        tds = sorteio(t_servico, p_servico)
        tcfb = tis - tcr
        tlcb = abs(tfar - tis)
        tfar = tis + tds
        tcb = tfar - tcr
        print("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s" % (round(nc, 2), round(tduc, 2), round(tcr, 2),
            round(tds, 2), round(tis, 2), round(tcfb, 2), round(tfar, 2), round(tcb, 2), round(tlcb, 2)))
    print()

if __name__ == '__main__':
    # Valores para o método do sorteio
    t_chegada = [10, 12, 14]
    p_chegada = [0.35, 0.75, 1.0]
    t_servico = [9, 10, 11]
    p_servico = [0.3, 0.8, 1.0]

    # Valores para o Método de Monte Carlo
    t_chegada_mmc = [2.5, 7.5, 12.5, 17.5, 22.5, 27.5, 32.5, 37.5, 42.5]
    p_chegada_mmc = [0.35, 0.54, 0.73, 0.86, 0.89, 0.96, 0.97, 0.99, 1.0]
    t_servico_mmc = [9.275, 9.825, 10.375, 10.925, 11.475, 12.025, 12.575, 13.125, 13.675]
    p_servico_mmc = [0.06, 0.11, 0.34, 0.54, 0.75, 0.87, 0.96, 0.99, 1.0]

    # Chamada da função principal para os valores do item a e do item b
    main(t_chegada, p_chegada, t_servico, p_servico)
    main(t_chegada_mmc, p_chegada_mmc, t_servico_mmc, p_servico_mmc)