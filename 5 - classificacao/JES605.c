/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 605 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i, A[500], inf, sup, meio, p;

    for (i=0; i<500; i++)
        A[i] = i*3;

    printf("Digite um numero inteiro: ");
    scanf("%d", &p);

    inf = 0;
    sup = sizeof(A)/4 - 1;

    while (inf<=sup) {
        meio = (inf+sup)/2;

        if (A[meio] == p) {
            printf("Numero encontrado na posicao %d.\n", meio);
            inf = sup+1;
        }
        else {
            if (A[meio] < p)
                inf = meio+1;
            else
                sup = meio-1;

            if (inf>sup)
                printf("Numero nao existe no vetor. Deveria estar entre posicoes %d e %d.\n", sup, inf);
        }
    }
}
