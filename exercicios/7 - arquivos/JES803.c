/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 803 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    float V[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, *ptr;
    int i;

    ptr = V;

    for (i=0; i<10; i++) {
        printf("Posicao: %d\tValor armazenado: %f\tEndereco da posicao: %d\n", i, *ptr, ptr);
        ptr++;
    }
}
