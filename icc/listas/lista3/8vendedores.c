/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    /* total de vendas de cada vendedor
    percentual de comissão de cada vendedor
    nomes
    10 vendedores */
    float total[10], comissao[10], contt = 0.0, maior, menor;
    char nomes[10][100];
    int ma, me, i;

    for (i=0; i<10; i++) {
        printf("Vendedor #%d\n"
               "Nome: ", i+1);
        gets(nomes[i]);
        printf("Total de vendas: R$");
        scanf(" %f", &total[i]);
        printf("Pencentual de comissao: ");
        scanf(" %f", &comissao[i]);
        printf("\n");
        getchar();
    }

    printf("\n---- VENDEDORES ----\n");
    for (i=0; i<10; i++) {
        printf("#%d. %s\n"
               "Comissao a receber: R$%.2f\n", i+1, nomes[i], comissao[i]*total[i]/100.0);
        contt += total[i];
        if (i==0) {
            maior = comissao[i]*total[i]/100.0;
            menor = comissao[i]*total[i]/100.0;
            ma = 0;
            me = 0;
        }
        else {
            if (comissao[i]*total[i]/100.0 > maior) {
                maior = comissao[i]*total[i]/100.0;
                ma = i;
            }
            if (comissao[i]*total[i]/100.0 <menor) {
                menor = comissao[i]*total[i]/100.0;
                me = i;
            }
        }
    }
    printf("\nTotal de todas as vendas: R$%.2f\n"
           "Maior valor a ser recebido: R$%.2f, pelo vendedor %s\n"
           "Menor valor a ser recebido: R$%.2f, pelo vendedor %s\n", contt, maior, nomes[ma], menor, nomes[me]);
}
