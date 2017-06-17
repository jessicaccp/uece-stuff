/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 110 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    char nome[100];

    printf("Digite seu nome completo:\n");
    gets(nome);
    printf("\nO nome digitado foi: %s\n", nome);
}
