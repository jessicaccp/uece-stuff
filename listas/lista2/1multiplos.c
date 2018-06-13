/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 2 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int num;

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    if (num%2==0 && num%3==0)
        printf("\nMultiplo de 2 e 3.\n");
    else
        if (num%2==0)
            printf("\nMultiplo de 2.\n");
        else
            if (num%3==0)
                printf("\nMultiplo de 3.\n");
}
