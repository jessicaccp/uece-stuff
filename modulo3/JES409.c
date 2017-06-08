/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 409
1. Usando a estrutura while, Faça um programa para fazer o seguinte:
2. Leia seu nome numa variavel char NOME[50] (ou , se desejar, pode declarar diretamente;
3. Apresente seu nome da ÚLTIMA LETRA PARA A PRIMEIRA, numa mesma linha, através de instruções específicas do while.
4. Compile e execute. */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    printf("Este programa foi feito por Jessica Cristina Cacau Patricio.\n\n");

    /* variaveis */
    char nome[50];
    int tam;

    /* instrucoes */
    printf("Digite seu nome completo:\n");
    gets(nome); //recebe a string inteira de uma linha
    tam = strlen(nome); //variavel "tamanho" recebe tamanho da string

    while (tam) { //enquanto tamanho for diferente de zero
        if (tam == strlen(nome)) //pula uma linha antes de imprimir o resultado
            printf("\n");
        printf("%c", nome[tam-1]); //imprime caractere
        if (tam == 1) //pula outra linha apos imprimir o resultado
            printf("\n");
        tam--; //vai pro caractere anterior
    }
}
