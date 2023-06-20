/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 308 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a, b, resto, aux;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (b>a) {
        aux = b;
        b = a;
        a = aux;
    }

    resto = a%b;
    while (resto!=0 ) {
        a = b;
        b = resto;
        resto = a%b;
    }

    printf("O MDC dos numeros entrados eh %d\n", b);
}
