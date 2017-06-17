/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 601 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char nome[100], colega[20];
    int tamn, tamc, i, j;

    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite o primeiro nome do colega ao lado: ");
    scanf("%s", &colega);

    tamc = strlen(colega);
    tamn = strlen(nome);

    for (i=0; i<tamc; i++) {
        for (j=0; j<tamn; j++) {
            if (nome[j] == colega[i]) {
                printf("\nLetra em comum encontrada! Letra '%c', %da letra de '%s' e %da letra de '%s'\n", nome[j], i+1, colega, j+1, nome);
                return 0;
            }
        }
    }

    printf("\nNenhuma letra em comum encontrada.\n");
}
