/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 305-2 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    double a, b;

    printf("Digite 2 numeros reais: ");
    scanf("%lf %lf", &a, &b);

    if (a>b)
        printf("O primeiro numero eh maior.\n");
    else // inclui o caso de a<b e de a==b
        printf("O primeiro numero nao eh maior que o segundo.\n");
}
