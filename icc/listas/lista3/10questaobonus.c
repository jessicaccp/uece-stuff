/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int v1[10], v2[5], i, par = 0, aux = 0, soma, j, impar, div;

    printf("Digite os valores para o vetor 1:\n");
    for (i=0; i<10; i++) {
        printf("v1[%d] = ", i);
        scanf(" %d", &v1[i]);
        if (v1[i]%2==0)
            par++;
    }

    printf("\nDigite os valores para o vetor 2:\n");
    for (i=0; i<5; i++) {
        printf("v2[%d] = ", i);
        scanf(" %d", &v2[i]);
    }

    int r1[par];

    printf("\nVetor resultante 1: ");
    for (i=0; i<10; i++) {
        if (v1[i]%2==0) {
            soma = v1[i];
            for (j=0; j<5; j++) {
                soma += v2[j];
            }
            r1[aux] = soma;
            aux++;
            printf("%d ", r1[aux-1]);
        }
    }

    aux = 0;
    if (par!=10) {
        impar = 10-par;
        int r2[impar];
        printf("\nVetor resultante 2: ");
        for (i=0; i<10; i++) {
            if (v1[i]%2!=0) {
                div = 0;
                for (j=0; j<5; j++) {
                    if (v1[i]%v2[j]==0)
                        div++;
                }
                r2[aux] = div;
                aux++;
                printf("%d ", r2[aux-1]);
            }
        }
        printf("\n");
    }
    else
        printf("\nVetor resultante 2: nao ha numeros impares em v1.\n");

}
