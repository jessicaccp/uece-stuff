/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 809 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int i, tam;
    char nome[50] = "Jessica Cristina Cacau Patricio", *ptr;
    FILE *fp;
    fp = fopen("meuarquivo.txt", "wt");

    tam = strlen(nome);
    ptr = &nome[tam-1];

    if (fp == NULL)
        printf("Erro ao criar o arquivo.\n");
    else {
        fprintf(fp, "Esse eh meu nome completo\n%s\n", nome);
        for (i=tam-1; i>=0; i--) {
            fprintf(fp, "%c", *ptr);
            ptr--;
        }
    }

    fclose(fp);
}
