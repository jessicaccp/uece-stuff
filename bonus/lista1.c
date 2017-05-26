/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void etiqueta () {
    char nome[50], endereco[100], cep[15], telefone[20];

    printf("\nDigite seu nome completo: ");
    gets(nome);
    printf("Digite seu endereco (rua e numero): ");
    gets(endereco);
    printf("Digite seu CEP: ");
    gets(cep);
    printf("Digite seu telefone com ddd: ");
    gets(telefone);

    printf("\n. ETIQUETA\n"
           "%s\n"
           "%s\n"
           "%s | %s\n", nome, endereco, cep, telefone);
}

void quadrado () {
    int i;

    printf("\n");
    for (i=1; i<=5; i++) {
        if (i==1 || i==5)
            printf("XXXXX\n");
        else
            printf("X   X\n");
    }
}

void media () {
    float media, n1, n2, n3;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &n2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &n3);

    media = (n1+2*n2+2*n3)/5;
    printf("\nMedia: %.2f\n", media);
}

void area () {
    float base, altura;

    printf("\nDigite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf(" %f", &altura);

    if (base<=0 || altura <=0)
        printf("\nTriangulo invalido.\n");
    else
        printf("\nArea do triangulo: %.2f.\n", base*altura/2.0);
}

void main () {
    system("cls");
    int i = 0, questao;

    printf(". MENU\n"
           "1 - Etiqueta\n"
           "2 - Quadrado\n"
           "3 - Media\n"
           "4 - Area do triangulo\n"
           "\nDigite o numero da questao: ");
    scanf("%d", &questao);
    getchar();

    switch (questao) {
        case 1:
            etiqueta();
            break;
        case 2:
            quadrado();
            break;
        case 3:
            media();
            break;
        case 4:
            area();
            break;
    }
}
