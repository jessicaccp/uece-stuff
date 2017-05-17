/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 603 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char nome[30], letra[10] = "", let;
    int tam, encontrado = 0, num = 0, i;

    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);
    tam = strlen(nome);

    while (num<10) {
        printf("\nDigite uma letra: ");
        scanf(" %c", &let);
        if (let == '*')
            break;

        for (i=0; i<tam; i++) {
            if (nome[i] == let)
                encontrado = 1;
        }

        if (encontrado == 0) {
            letra[num] = let;
            letra[num+1] = '\0';
            num++;
        }

        encontrado = 0;
        printf("Letras nao encontradas: %s\n", letra);
    }
}
