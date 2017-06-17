/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 604 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i, A[500], p, inf, sup, meio;

    for (i=0; i<500; i++)
        A[i] = i*3;

    printf("Digite um inteiro multiplo de 3 entre 0 e 1495: ");
    scanf("%d", &p);

    inf = 0;
    sup = sizeof(A)/4 - 1;

    while (inf<=sup) {
        meio = (inf+sup)/2;

        if (A[meio] == p) {
            printf("Valor encontrado! Posicao de P no vetor A: %d.\n", meio);
            inf = sup+1;
        }
        else {
            if (A[meio] < p)
                inf = meio+1;
            else
                sup = meio-1;
        }
    }
}
