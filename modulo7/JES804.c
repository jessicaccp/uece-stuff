/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 804 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char V[10] = "ABCDEFGHIJ", *ptr;
    int i;

    ptr = V;

    for (i=0; i<10; i++) {
        printf("Posicao: %d\tValor armazenado: %c\tEndereco da posicao: %d\n", i, *ptr, ptr);
        ptr++;
    }
}
