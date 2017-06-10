/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int a, i;

    printf("Digite um inteiro: ");
    scanf("%d", &a);

    printf("\nTabuada de %d:\n", a);
    for (i=1; i<=10; i++) {
        printf("%d * %d = %d\n", a, i, a*i);
    }
}
