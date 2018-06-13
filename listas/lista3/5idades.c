/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i = 1, soma = 0, num = 0, idade;

    do {
        printf("Digite a idade #%d: ", i);
        i++;
        scanf(" %d", &idade);
        if (idade != 0) {
            soma += idade;
            num++;
        }
    } while (idade != 0);

    printf("\nMedia das idades entradas: %d.\n", soma/num);

}
