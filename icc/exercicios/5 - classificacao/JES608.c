/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 608 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int V[10], p, num=0, achei=0, i, menor, posicao, segpos, segundo;

    while (num<10) {
        printf("Digite um inteiro: ");
        scanf("%d", &p);

        if (num>0) {
            for (i=0; i<num; i++)
                if (V[i] == p) {
                    achei = 1;
                    printf("O valor %d ja foi inserido no vetor anteriormente.\n", p);
                }
        }

        if (achei == 0) {
            V[num] = p;
            num++;
            printf("Valor %d adicionado!\n", p);
        }
        else
            achei = 0;

        printf("Vetor atual: ");
        for (i=0; i<num; i++)
            if (i != num-1)
                printf("%d ", V[i]);
            else
                printf("%d\n\n", V[i]);
    }

    for (i=0; i<num; i++) {
        if (i==0 || V[i]<menor) {
            if (menor<segundo) {
                segundo = menor;
                segpos = posicao;
            }
            posicao = i;
            menor = V[i];
        }
        if (i==1 || (V[i]<segundo && V[i]>menor)) {
            segpos = i;
            segundo = V[i];
        }
    }
    printf("Menor valor: %d. Posicao: %d.\n"
           "Segundo menor valor: %d. Posicao: %d.\n", menor, posicao, segundo, segpos);
}
