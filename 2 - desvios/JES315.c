/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)

Exercicio 315 */

#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

void main () {
    char nome[50];
    float nota1, nota2;

    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Nota da segunda prova: ");
    scanf("%f", &nota2);
    if (nota1>nota2)
        printf("\nRefaca a segunda prova.\n");
    else {
        nota1 = nota2;
        printf("Nota da terceira prova: ");
        scanf("%f", &nota2);
        if (nota1>nota2)
            printf("\nRefaca a terceira prova.\n");
        else {
            nota1 = nota2;
            printf("Nota da quarta prova: ");
            scanf("%f", &nota2);
            if (nota1>nota2)
                printf("\nRefaca a quarta prova.\n");
            else {
                nota1 = nota2;
                printf("Nota da quinta prova: ");
                scanf("%f", &nota2);
                if (nota1>nota2)
                    printf("\nRefaca a quinta prova.\n");
                else
                    printf("\nNao eh necessario refazer nenhuma prova.\n");
            }
        }
    }
}
