/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 602 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char nome[100], pai[100];
    int tamn, tamp, i, encontrado = 0;

    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite o nome completo do seu pai: ");
    gets(pai);

    tamn = strlen(nome);
    tamp = strlen(pai);

    if (tamn<=tamp) {
        for (i=0; i<tamn; i++) {
            if (nome[i] == pai[i]) {
                printf("\nLetra em comum encontrada: %da letra de ambos os nomes - '%c'.\n", i+1, nome[i]);
                encontrado = 1;
                i = tamn;
            }
        }
    }
    else {
        for (i=0; i<tamp; i++) {
            if (nome[i] == pai[i]) {
                printf("\nLetra em comum encontrada: %da letra de ambos os nomes - '%c'.\n", i+1, nome[i]);
                encontrado = 1;
                i = tamp;
            }
        }
    }

    if (encontrado == 0)
        printf("\nNenhuma letra em comum em posicoes iguais em ambos os nomes.\n");
}
