/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 501
- Defina um vetor com 100 posições, tipo CHAR de nome V com o seguinte conteúdo:
char NOME[]=”coloque seu nome completo aqui”.
- RETIRE TODAS AS VOGAIS de dentro desse vetor
- Não é para mascarar o resultado, ou seja, ao final do processo, o vetor NOME deve conter apenas
CONSOANTES e espaços.
- Exemplo: NOME[]=”gildacio jose”, a saída deverá ser “gldc js” */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    printf("Este programa foi escrito por Jessica Cristina Cacau Patricio.\n\n");

    char V[100] = "Jessica Cristina Cacau Patricio";
    int tam, i, j;

    tam = strlen(V);
    printf("Nome completo com vogais: %s\n", V);

    for (i=0; i<tam; i++) {
        if (V[i]=='a' || V[i]=='e' || V[i]=='i' || V[i]=='o' || V[i]=='u' || V[i]=='A' || V[i]=='E' || V[i]=='I' || V[i]=='O' || V[i]=='U') {
            for (j=i; j<tam; j++) {
                V[j] = V[j+1];
                printf("%s\n", V);
            }

            // em caso de vogais seguidas, a primeira vogal foi removida e a proxima esta na atual posicao de "i"
            // se nao voltarmos o "i" em -1, o "i" vai pular pro proximo espaco do vetor e a vogal nao sera removida
            if (V[i]=='a' || V[i]=='e' || V[i]=='i' || V[i]=='o' || V[i]=='u' || V[i]=='A' || V[i]=='E' || V[i]=='I' || V[i]=='O' || V[i]=='U') {
                i-=1;
            }
        }
    }

    printf("Nome completo sem vogais: %s\n", V);

}
