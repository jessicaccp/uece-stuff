/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int v[15], i;

    for (i=0; i<15; i++) {
        printf("v[%d] = ", i);
        scanf(" %d", &v[i]);
    }

    printf("\nElementos iguais a 30:\n");
    for (i=0; i<15; i++)
        if (v[i]==30)
            printf("v[%d] = 30\n", i);
    printf("\n");
}
