/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 808 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    FILE *fp;
    fp = fopen("meuarquivo.txt", "wt");

    if (fp == NULL)
        printf("Erro ao criar o arquivo.\n");
    else
        printf("Arquivo criado corretamente.\n");

    fclose(fp);
}
