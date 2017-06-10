/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 2 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf(" %d", &b);
    printf("Digite o valor de C: ");
    scanf(" %d", &c);

    if (a<b+c && b<a+c && c<a+b) {
        printf("\nABC eh um triangulo ");
        if (a==b && a==c)
            printf("equilatero.\n");
        else
            if (a==b || a==c || b==c)
                printf("isosceles.\n");
            else
                printf("escaleno.\n");
    }
    else
        printf("\nABC nao eh um triangulo.\n");
}
