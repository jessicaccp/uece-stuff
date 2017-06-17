/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 303 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num%2==0)
        printf("O numero entrado eh par.\n");
    else
        printf("O numero entrado eh impar.\n");
}
