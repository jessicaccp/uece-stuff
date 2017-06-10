/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    float somav = 0.0, somap = 0.0, valor;
    char cod;
    int i;

    for (i=1; i<=10; i++) {
        printf("\nCompra %d:\n", i);
        do {
            printf("Insira o codigo: ");
            scanf(" %c", &cod);
            if (cod != 'p' && cod != 'P' && cod != 'v' && cod != 'V')
                printf("Codigo incorreto. Tente novamente.\n");
        } while (cod != 'p' && cod != 'P' && cod != 'v' && cod != 'V');

        printf("Insira o valor da transacao: ");
        scanf(" %f", &valor);

        if (cod == 'v' || cod == 'V')
            somav += valor;
        if (cod == 'p' || cod == 'P')
            somap += valor;
    }

    printf("\nValor total das compras a vista: R$%.2f\n"
           "Valor total das compras a prazo: R$%.2f\n"
           "Valor total das compras efetuadas: R$%.2f\n", somav, somap, somav+somap);

}
