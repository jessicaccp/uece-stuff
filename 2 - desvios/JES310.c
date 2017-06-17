/* Universidade Estadual do Ceara
Introducao a Computacao 2016.2 - Prof. Gildacio
Jessica Cristina Cacau Patricio (1388627)
Exercicio 310 */

#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

void main () {
    int a, b, c, maior;

    printf("Digite 3 inteiros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
        if (a>c)
            maior = a;
        else
            maior = c;
    else
        if (b>c)
            maior = b;
        else
            maior = c;

    printf("O numero %d eh o maior.\n", maior);
}
