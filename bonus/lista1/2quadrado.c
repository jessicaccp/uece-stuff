/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i;

    printf("\n");
    for (i=1; i<=5; i++) {
        if (i==1 || i==5)
            printf("XXXXX\n");
        else
            printf("X   X\n");
    }
}
