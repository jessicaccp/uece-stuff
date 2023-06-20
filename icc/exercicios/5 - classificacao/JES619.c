/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 619 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<time.h> /* biblioteca necessaria para randomizar o rand() */

void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    char V[5][15] = {{"Renata"}, {"Amanda"}, {"Larissa"}, {"Ernani"}, {"Felipe"}}, nome[15];
    float M[5][5], soma, aux;
    int i, j, troca = 1, linha, matriz;

    srand(time(NULL)); /* faz com que a funcao rand() se baseie na hora do sistema */

    /* Recebe as notas dos alunos, cria a media na coluna e indice 4 e imprime a matriz*/
    printf("\t[ NOTAS DE ALGORITMOS II ]\n"
           "ALUNO\tP1\tP2\tP3\tP4\tMEDIA\n");
    for (i=0; i<5; i++) {
        soma = 0.0;
        printf("%s\t", V[i]);
        for (j=0; j<5; j++) {
            if (j==4)
                M[i][j] = soma/4.0;
            else {
                aux = rand()%100;
                M[i][j] = aux/10.0;
            }
            soma += M[i][j];
            printf("%.1f\t", M[i][j]);
        }
        printf("\n");
    }

    /* Ordenacao da matriz utilizando o metodo Bubble Sort de acordo com as notas da media */
    matriz = 4;
    while (troca==1) { /*Enquanto houver trocas, ainda nao esta ordenado */
        troca = 0;
        linha = 0;
        while (linha<matriz) { /* Enquanto a linha atual nao atingir a ultima linha */
            if (M[linha][4] > M[linha+1][4]) { /* Se o valor for maior que o valor da mesma coluna da próxima linha, ocorre a troca */
                for (i=0; i<5; i++) {
                    aux = M[linha][i];
                    M[linha][i] = M[linha+1][i];
                    M[linha+1][i] = aux;
                    troca = 1;
                }
                /* Troca-se os nomes do vetor tambem */
                strcpy(nome, V[linha]);
                strcpy(V[linha], V[linha+1]);
                strcpy(V[linha+1], nome);
            }
            linha++;
        }
        matriz--;
    }

    /* Impressao da nova matriz ordenada */
    printf("\n[ NOTAS DE ALGORITMOS II ORDENADAS POR MEDIA]\n"
           "ALUNO\tP1\tP2\tP3\tP4\tMEDIA\n");
    for (i=0; i<5; i++) {
        printf("%s\t", V[i]);
        for (j=0; j<5; j++) {
            printf("%.1f\t", M[i][j]);
        }
        printf("\n");
    }

    /* Mostra os alunos com media maior ou igual a 7 */
    printf("\n\t[ ALUNOS APROVADOS POR MEDIA ]\n");
    for (i=0; i<5; i++) {
        if (M[i][4] >= 7.0)
            printf("%s. Media: %.1f\n", V[i], M[i][4]);
    }
}
