/* Universidade Estadual do Ceara
Ciencia da Computacao
Introducao a Ciencia da Computacao 2016.2
Prof. Leonardo
Lista de exercicios 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
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
