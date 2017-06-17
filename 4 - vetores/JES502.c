/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 502
- Coloque um caráter curinga UM DÓLAR $) após cada vogal de seu nome.
- Não é para mascarar o resultado, ou seja, ao final do processo, o vetor NOME deve conter o nome
completo e um $ após cada vogal.
- Exemplo: NOME[]=”gildacio jose”, a saída deverá ser “gi$lda$ci$o% jo$se$” */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    char V[100] = "Jessica Cristina Cacau Patricio";
    int tam, i, j;

    tam = strlen(V);
    printf("Nome completo sem dolares: %s\n", V);

    for (i=0; i<tam; i++) {
        if (V[i]=='a' || V[i]=='e' || V[i]=='i' || V[i]=='o' || V[i]=='u' || V[i]=='A' || V[i]=='E' || V[i]=='I' || V[i]=='O' || V[i]=='U') {
            for (j=tam+1; j>i; j--) {
                V[j] = V[j-1];
            }
            tam++;
            V[i+1] = '$';
        }
    }

    printf("Nome completo com dolares: %s\n", V);

}
