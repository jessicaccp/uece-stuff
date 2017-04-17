/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 304 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num)                        // se a variavel for diferente de zero, rodara o bloco de instrucoes 1
        printf("Mensagem um.\n");
    else                            // se a variavel for igual a zero, rodara o bloco de instrucoes 2
        printf("Mensagem dois.\n");
}
