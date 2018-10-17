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

import random, math

def func_tds():
    p = 1
    lamb = math.exp(-6)

    for n in range(100):
        p = p * random.random()
        if p < lamb:
            return 60/n

# Calcula os valores da tabela
def main():

    # Calcula valores das colunas e printa tabela com valores arredondados para 2 casas decimais
    print("NC\tTDUC\tTCR\tTDS\tTIS\tTCFB\tTFAR\tTCB\tTLCB")
    tcr = 0
    tfar = 0
    tis = 0
    tlcb = 0
    tds = 0
    for nc in range(1, 21):
        tduc = (math.log(1 - random.random())) * -12
        tcr += tduc
        tis = max(tis + tds, tcr)
        tds = func_tds()
        tcfb = tis - tcr
        tlcb = abs(tfar - tis)
        tfar = tis + tds
        tcb = tfar - tcr
        print("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s" % (round(nc, 2), round(tduc, 2), round(tcr, 2),
            round(tds, 2), round(tis, 2), round(tcfb, 2), round(tfar, 2), round(tcb, 2), round(tlcb, 2)))

if __name__ == '__main__':
    main()