/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    char nome[50], endereco[100], cep[15], telefone[20];

    printf("\nDigite seu nome completo: ");
    gets(nome);
    printf("Digite seu endereco (rua e numero): ");
    gets(endereco);
    printf("Digite seu CEP: ");
    gets(cep);
    printf("Digite seu telefone com ddd: ");
    gets(telefone);

    printf("\n%s\n"
           "%s\n"
           "%s | %s\n", nome, endereco, cep, telefone);
}
