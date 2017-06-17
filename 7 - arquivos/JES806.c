/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 806 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char nome[50] = "jessica cristina cacau patricio", *ptr;
    int i;

    ptr = nome;

    for (i=0; i<strlen(nome); i++) {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
}
