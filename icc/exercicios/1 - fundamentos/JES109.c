/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 109 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int idade;
    char nome[100];
    float altura;

    printf("Apertando ENTER ao final de cada entrada, responda:\n\n"
           "Qual seu primeiro nome? ");
    scanf("%s", &nome);
    fflush(stdin);  // para caso a pessoa insira mais de um nome
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    printf("Qual sua altura, em metros? (utilize ponto ao inves de virgula) ");
    scanf("%f", &altura);
    printf("\n[FICHA]\n"
           "%s\n"
           "%d anos\n"
           "%.2f metros\n", nome, idade, altura);
}
