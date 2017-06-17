/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 302 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num>=0)
        printf("O numero entrado eh positivo.\n");
    else
        printf("O numero entrado eh negativo.\n");
}
