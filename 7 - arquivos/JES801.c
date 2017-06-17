/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 801 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main () {
    int idade, *pint;
    float altura, *pfloat;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura em metros: ");
    scanf(" %f", &altura);

    pint = &idade;
    pfloat = &altura;

    printf("Voce tem %d anos e mede %.2fm.\n", *pint, *pfloat);
}
