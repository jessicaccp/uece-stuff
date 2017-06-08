/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 815 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    /* Declaracao das variaveis */
    double num, maior, menor, qtd=0, media, soma=0;
    FILE *fp;
    fp = fopen("aleatorios.txt", "rt"); /* Abre o arquivo para leitura */

    /* Se o arquivo nao for encontrado, mostra mensagem de erro e finaliza o programa */
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo \"aleatorios.txt\". Certifique-se que ele existe e tente novamente.\n");
        return 0;
    }

    /* Senao, enquanto nao chegar no fim do arquivo, roda as seguintes instrucoes */
    while (! feof(fp)) {
        fscanf(fp, "%lf", &num); /* Le o valor */
        soma += num; /* Adiciona-o na soma de todos os valores do arquivo */
        qtd++; /* Conta-se +1 na variavel de contagem de numeros do arquivo */

        if (qtd==1) /* Se for o primeiro numero do arquivo, tambem vai ser o menor e o maior */
            maior = menor = num;
        if (num>maior) /* Se for maior que o maior, torna-se o maior */
            maior = num;
        if(num<menor) /* Se for menor que o menor, torna-se o menor */
            menor = num;
    }
    media = soma/qtd; /* Calcula-se a media */

    printf("Menor numero da serie: %.2lf.\n"
           "Maior numero da serie: %.2lf.\n"
           "Media da serie: %.2lf.\n", menor, maior, media);

    fclose(fp);
    return 0;
}
