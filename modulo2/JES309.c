/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 309 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    double a, b;

    printf("Digite 2 numeros reais: ");
    scanf("%lf %lf", &a, &b);

    if (a>b)
        printf("O primeiro numero eh maior.\n");
    else
        if (a<b)
            printf("O segundo numero eh maior.\n");
        else
            printf("Os dois numeros sao iguais.\n");
}
