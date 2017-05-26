/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    float media, n1, n2, n3;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &n2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &n3);

    media = (n1+2*n2+2*n3)/5;
    printf("\nMedia: %.2f\n", media);
}
