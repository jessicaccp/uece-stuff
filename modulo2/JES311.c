/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 311 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    double a, b, c, d;

    printf("Digite 2 numeros reais: ");
    scanf("%lf %lf", &a, &b);

    if (a>b) {
        printf("O primeiro numero eh maior que o segundo.\n");
        c = a*b;
        d = a-b;
        printf("Produto: %.2lf\n"
               "Diferenca: %.2lf\n", c, d);
    }
    else {
        printf("O primeiro numero nao eh maior que o segundo.\n");
        c = b/a;
        d = a+b;
        printf("A: %.2lf, B: %.2lf\n"
               "Divisao: %.2lf\n"
               "Soma: %.2lf\n", a, b, c, d);
    }
}
