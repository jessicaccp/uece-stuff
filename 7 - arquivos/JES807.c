/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 807 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    FILE *fp;
    fp = fopen("meuarquivo.txt", "rt");

    if (fp == NULL)
        printf("Erro ao abrir o programa. Certifique-se de que o arquivo existe e tente novamente.\n");
    else
        printf("Arquivo corretamente encontrado.\n");

    fclose(fp);
}
