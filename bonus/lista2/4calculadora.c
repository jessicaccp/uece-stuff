/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 2 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int opcao, a, b;

    printf("----- CALCULADORA -----\n"
           "1. Soma\n"
           "2. Subtracao\n"
           "3. Multiplicacao\n"
           "4. Divisao\n\n");
    do {
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                printf("\n%d + %d = %d\n", a, b, a+b);
                break;
            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                printf("\n%d - %d = %d\n", a, b, a-b);
                break;
            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                printf("\n%d * %d = %d\n", a, b, a*b);
                break;
            case 4:
                printf("\nDigite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                printf("\n%d / %d = %d\n", a, b, a/b);
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao<1 || opcao>4);
}
